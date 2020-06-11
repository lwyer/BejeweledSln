#ifndef DATABASE_H
#define DATABASE_H

#include <QTextCodec>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QTime>
#include <QSqlError>
#include <QtDebug>
#include <QSqlDriver>
#include <QSqlRecord>

class DataBase
{
public:
    bool createConnection();  //创建一个连接
    bool createTable();       //创建数据库表
    bool insert(int id,QString name,QString password,int credite);  //出入数据
    bool queryAll();          //查询所有信息
    bool queryone(int id,QString password);
    bool updateById(int id,int credite);//更新分数

    bool deleteById(int id);  //删除
    QString sortById();          //排序
};


#endif // DATABASE_H
