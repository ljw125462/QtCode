#include "heroplane.h"
#include"config.h"

heroPlane::heroPlane()
{
    //加载飞机图片资源
    m_Plane.load(PLANE_PATH);

    //初始化坐标
    m_x = GAME_WIDTH*0.5-m_Plane.width()*0.5;
    m_y = GAME_HEIGHT-m_Plane.height() - 80;

    //矩形边框  碰撞检测用
    m_Rect.setWidth(m_Plane.width());
    m_Rect.setHeight(m_Plane.height());
    m_Rect.moveTo(m_x,m_y);

    //初始化间隔记录变量
    m_recorder = 0;
}

void heroPlane::shoot()
{
    //累加时间间隔记录的变量
    m_recorder++;

    //如果记录数字未达到发射间隔，直接return
    if(m_recorder < BULLET_INTERVAL)
    {
        return;
    }

    m_recorder = 0;
    //发射子弹
    for (int i = 0;i<BULLET_NUM;i++) {
        //如果是空闲状态的子弹，发射子弹
        if(m_bullets[i].m_free)
        {
            m_bullets[i].m_free = false;
            m_bullets[i].m_x = m_x + m_Rect.width()*0.5 - 10;
            m_bullets[i].m_y = m_y - 25;
            break;
        }
    }
}

void heroPlane::setPosition(int x, int y)
{
    m_x = x;
    m_y = y;
    m_Rect.moveTo(m_x,m_y);
}
