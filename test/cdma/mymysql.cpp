#include "mymysql.h"
#include <QMessageBox>
#include<string.h>

//这个类的目的是实现封装，封装所有和mysql相关函数
mymysql::mymysql()
{
    mysql_init(&mysql);
    connection = NULL;
    memset(buf,0,sizeof (buf));

}

int mymysql::sql_connect(const char *Hostname, const char *User, const char *Password, const char *DBName)
{
    connection = mysql_real_connect(&mysql,Hostname,User,Password,DBName,0,0,0);
    if(connection == NULL)
    {
        memset(buf,0,sizeof (buf));
        strcpy(buf,mysql_error(&mysql));
        //QMessageBox::information(0,"",mysql_error(&mysql));
        return -1;
    }
    else {
        mysql_query(connection,"set names utf8");
        return 0;
    }

}

void mymysql::sql_disconnect()
{
    if(connection)
    {
        mysql_close(connection);
        connection = NULL;
    }
}

//执行没有返回结果的SQL语句
int mymysql::sql_exec(const char *SQL)
{
    int state = mysql_query(connection,SQL);//执行SQL语句
    if(state != 0)
    {
        memset(buf,0,sizeof (buf));
        strcpy(buf,mysql_error(&mysql));
        return -1;
    }
    return 0;

}

int mymysql::sql_open(const char *SQL,QStandardItemModel **p)
{
    int state = mysql_query(connection,SQL);//执行SQL语句
    if(state != 0)
    {
        memset(buf,0,sizeof (buf));
        strcpy(buf,mysql_error(&mysql));
        return -1;
    }
    MYSQL_RES *result = mysql_store_result(connection);
    if(result == NULL)//没有查询结果
    {
        memset(buf,0,sizeof (buf));
        strcpy(buf,mysql_error(&mysql));
        return -1;
    }

    int rowcount = mysql_affected_rows(connection);//函数返回SQl语句执行后有多少行
    int fieldcount = mysql_field_count(connection);//函数返回SQl语句执行后有多少列

    *p = new QStandardItemModel(rowcount,fieldcount);//根据SQL语句返回的行列综述，动态的建一个model出来
    MYSQL_FIELD *field;
    int i = 0;
    int j = 0;
    int iFieldCount = 0;
    for(i=0;i<fieldcount;i++)
    {
        field = mysql_fetch_field(result);
        (*p)->setHeaderData(i,Qt::Horizontal,field->name);
    }

    for (i=0;i<rowcount;i++) {//循环遍历每一行
        MYSQL_ROW row = mysql_fetch_row(result);
        for (j = 0;j<fieldcount;j++) {
            (*p)->setData((*p)->index(i,j,QModelIndex()),row[j]);
        }
    }

    mysql_free_result(result);//释放mysql_store_result函数分配的内存空间
    return 0;
}

const char *mymysql::geterror()
{
    return buf;
}
