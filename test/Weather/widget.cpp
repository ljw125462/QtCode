#include "widget.h"
#include "ui_widget.h"
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QString>
#include <QTextCodec>
#include <QDebug>

#include <QJsonParseError>
#include <QJsonObject>
#include <QJsonDocument>
#include <QPixmap>
#include <QJsonArray>
#include <QPalette>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //设置背景（模板）
    QPalette Pic;
    Pic.setBrush(QPalette::Background,QBrush(QPixmap(":/image/WeatherBackground.jpg").scaled(this->size())));
    this->setPalette(Pic);

    //允许应用程序发送网络请求并接收响应
    netManager =new QNetworkAccessManager(this);
    //持有一个要用QNetworkAccessManager发送的请求
    QNetworkRequest ipRequest;
    ipRequest.setUrl(QUrl("http://whois.pconline.com.cn/ipJson.jsp?ip"));
    //使用QNetworkAccessManager发送的请求的数据和报头。
    //网络连接
    QNetworkReply *iReply=netManager->get(ipRequest);
    connect(iReply,SIGNAL(finished()),this,SLOT(slotGetReplyFinished()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::slotGetReplyFinished()
{
    QNetworkReply *reply =(QNetworkReply *)sender();

    QTextCodec *codec = QTextCodec::codecForName("gbk");
    QString data = codec->toUnicode(reply->readAll());

    qDebug("%s",data.toStdString().data());

    reply->deleteLater();

    int cityLocation = data.indexOf("city")+7;
    int cityCodeLocation = data.indexOf("cityCode")-4;

    QString cityName = data.mid(cityLocation,cityCodeLocation-cityLocation);
    qDebug("%s",cityName.toStdString().data());

    ui->location->setText(cityName);

    //持有一个要用QNetworkAccessManager发送的请求
    QNetworkRequest weatheripRequest;
    weatheripRequest.setUrl(QUrl("http://wthrcdn.etouch.cn/weather_mini?city="+cityName));
    //使用QNetworkAccessManager发送的请求的数据和报头。
    //网络连接
    QNetworkReply *weatheriReply=netManager->get(weatheripRequest);
    connect(weatheriReply,SIGNAL(finished()),this,SLOT(slotGetWeatherReplyFinished()));

}

void Widget::slotGetWeatherReplyFinished()
{
    QNetworkReply *reply =(QNetworkReply *)sender();

    QTextCodec *codec = QTextCodec::codecForName("utf8");
    QString data = codec->toUnicode(reply->readAll());

    qDebug("%s",data.toStdString().data());

    reply->deleteLater();

    QJsonParseError jsonError;
    QJsonObject jsonObject;
    QJsonDocument jsonDocument;
    QString jsonData;
    QString iconPic;

    iconPath();
    jsonDocument = QJsonDocument::fromJson(data.toUtf8(),&jsonError);

    if(!jsonDocument.isNull() && (jsonError.error == QJsonParseError::NoError))
    {
        if(jsonDocument.isObject())
        {
            jsonObject = jsonDocument.object();
            jsonObject = jsonObject.value("data").toObject();

//------------解析昨天的天气数据------------------------
            //解析温度
            jsonData = jsonObject.value("wendu").toString();
            qDebug("%s",jsonData.toStdString().data());
            ui->label_2->setText(jsonData);

            //解析感冒
            jsonData = jsonObject.value("ganmao").toString();
            qDebug("%s",jsonData.toStdString().data());
            ui->label_5->setText(jsonData);

            jsonObject = jsonObject.value("yesterday").toObject();
            jsonData = jsonObject.value("type").toString();
            ui->weather1->setText(jsonData);

            for (int i = 0;i<12;i++) {
                if(jsonData == iconList[i])
                {
                    iconPic = ":/image/"+QString::number(i+1)+".png";
                    qDebug("%s",iconPic.toStdString().data());
                    break;
                }
            }
            QPixmap iconpix(iconPic);

            iconpix = iconpix.scaled(ui->label_7->width(),ui->label_7->height(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation);

            ui->label_7->setPixmap(iconpix);

            //设置高低温
            jsonData = jsonObject.value("low").toString().mid(3,3)+"/";
            jsonData = jsonData+jsonObject.value("high").toString().mid(3,2);
            ui->temperature1->setText(jsonData);


//-----------------解析今天的天气数据--------------------------
            jsonObject = jsonDocument.object();
            jsonObject = jsonObject.value("data").toObject();
            QJsonArray forecast = jsonObject.value("forecast").toArray();
            jsonObject = forecast.at(0).toObject();

            //设置今天高低温
            jsonData = jsonObject.value("low").toString().mid(3,3)+"/";
            jsonData = jsonData+jsonObject.value("high").toString().mid(3,2);
            ui->temperature2->setText(jsonData);

            jsonData = jsonObject.value("type").toString();

            ui->weather2->setText(jsonData);

            //设置图片
            for (int i = 0;i<12;i++) {
                if(jsonData == iconList[i])
                {
                    iconPic = ":/image/"+QString::number(i+1)+".png";
                    break;
                }
            }
            QPixmap iconpix1(iconPic);

            iconpix1 = iconpix1.scaled(ui->label_13->width(),ui->label_13->height(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
            ui->label_13->setPixmap(iconpix1);

//-----------------解析明天的天气数据--------------------------
            jsonObject = forecast.at(1).toObject();

            //设置明天高低温
            jsonData = jsonObject.value("low").toString().mid(3,3)+"/";
            jsonData = jsonData+jsonObject.value("high").toString().mid(3,2);
            ui->temperature3->setText(jsonData);

            jsonData = jsonObject.value("type").toString();

            ui->weather3->setText(jsonData);

            //设置图片
            for (int i = 0;i<12;i++) {
                if(jsonData == iconList[i])
                {
                    iconPic = ":/image/"+QString::number(i+1)+".png";
                    break;
                }
            }
            QPixmap iconpix2(iconPic);

            iconpix2 = iconpix2.scaled(ui->label_17->width(),ui->label_17->height(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
            ui->label_17->setPixmap(iconpix2);


        }
    }


}

void Widget::iconPath()
{
    iconList <<"大雨"
             <<"暴雨"
             <<"晴"
             <<"阴"
             <<"多云"
             <<"中雨"
             <<"冰雹"
             <<"大雪"
             <<"沙尘"
             <<"小雨"
             <<"雷雨"
             <<"小雨转多云";


}
