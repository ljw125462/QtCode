#ifndef STONE_H
#define STONE_H

#include<QString>

class Stone
{
public:
    Stone();
    ~Stone();

    enum TYPE{JIANG,SHI,XIANG,CHE,MA,PAO,BING};
    int _row;
    int _col;
    int _id;
    int _dead;
    int _red;
    TYPE _type;

    QString getText()
    {
        switch (this->_type)
        {
            case CHE:
                return "车";
            case MA:
                return "马";
            case PAO:
                return "炮";
            case BING:
                return "兵";
            case JIANG:
                return "将";
            case SHI:
                return "士";
            case XIANG:
                return "相";
        }
        return "错误";
    }
};

#endif // STONE_H
