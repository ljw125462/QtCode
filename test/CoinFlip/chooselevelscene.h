﻿#ifndef CHOOSELEVELSCENE_H
#define CHOOSELEVELSCENE_H

#include <QMainWindow>
#include "playscene.h"

class ChooseLevelScene : public QMainWindow
{
    Q_OBJECT
public:
    explicit ChooseLevelScene(QWidget *parent = nullptr);

    //重写绘图事件
    void paintEvent(QPaintEvent *);

    //游戏场景对象指针
    PlayScene *play = NULL;


signals:
    void chooseSceneBack();

public slots:
};

#endif // CHOOSELEVELSCENE_H
