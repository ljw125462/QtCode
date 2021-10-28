#ifndef MYMYSQL_H
#define MYMYSQL_H

//路径中使用/符号
#include<windows.h>
#include<mysql.h>
#include <QStandardItemModel>
class mymysql
{
public:
    mymysql();
    const char *geterror();
    //第一个参数代表server IP地址，第二个参数代表用户名，第三个密码，第四个使用数据库名
    int sql_connect(const char *Hostname,const char *User,const char *Password,const char *DBName);
    void sql_disconnect();
    int sql_exec(const char *SQL);
    int sql_open(const char *SQL,QStandardItemModel **p);

private:
    MYSQL *connection;
    MYSQL mysql;
    char buf[1024];
};

#endif // MYMYSQL_H
