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

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
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

    jsonDocument = QJsonDocument::fromJson(data.toUtf8(),&jsonError);

    if(!jsonDocument.isNull() && (jsonError.error == QJsonParseError::NoError))
    {
        if(jsonDocument.isObject())
        {
            jsonObject = jsonDocument.object();
            jsonObject = jsonObject.value("data").toObject();

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
            //设置高低温
            jsonData = jsonObject.value("low").toString().mid(3,3)+"/";
            jsonData = jsonData+jsonObject.value("high").toString().mid(3,2);
            ui->temperature1->setText(jsonData);



//            jsonObject = jsonObject.value("today").toObject();
//            jsonData = jsonObject.value("type").toString();
//            ui->weather2->setText(jsonData);

//            jsonObject = jsonObject.value("tomorrow").toObject();
//            jsonData = jsonObject.value("type").toString();
//            ui->weather3->setText(jsonData);

        }
    }



}
