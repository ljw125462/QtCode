#include "bullet.h"

Bullet::Bullet()
{
    //加载子弹资源
    m_Bullet.load(BULLET_PATH);

    //子弹坐标初始化
    m_x = GAME_WIDTH * 0.5 - m_Bullet.width() * 0.5;
    m_y = GAME_HEIGHT;

    //子弹空闲状态
    m_free = true;

    //子弹速度
    m_speed = BULLET_SPEED;

    //子弹矩形边框（碰撞检测）
    m_Rect.setWidth(m_Bullet.width());
    m_Rect.setHeight(m_Bullet.height());
    m_Rect.moveTo(m_x,m_y);
}

void Bullet::updatePosition()
{
    //如果子弹是空闲状态，不需要计算坐标
    if(m_free)
    {
        return;
    }

    //子弹向上移动
    m_y -= m_speed;
    m_Rect.moveTo(m_x,m_y);

    if(m_y <= -m_Rect.height())
    {
        m_free = true;
    }
}
