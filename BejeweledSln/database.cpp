#include "database.h"
#include "qstring.h"
//建立一个数据库连接
bool DataBase::createConnection()
{
    //以后就可以用"sqlite1"与数据库进行连接了
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", "sqlite1");
    db.setDatabaseName(".//qtDb.db");
    if( !db.open())
    {
        qDebug() << "无法建立数据库连接";
        return false;
    }
    return true;
}

//创建数据库表
bool DataBase::createTable()
{
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    bool success = query.exec("create table automobil(id int primary key,name varchar,password varchar(6),credit int)");

    if(success)
    {
        qDebug() << QObject::tr("数据库表创建成功！\n");
        return true;
    }
    else
    {
        qDebug() << QObject::tr("数据库表创建失败！\n");
        return false;
    }
}

//向数据库中插入记录
bool DataBase::insert(int id,QString name,QString password,int credite)
{
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);

        query.prepare("insert into automobil values(?, ?, ?,?)");
        query.addBindValue(id);
        query.addBindValue(name);
        query.addBindValue(password);
        query.addBindValue(credite);
        if(!query.exec())
        {
        qDebug()<<query.lastError();
        return false;
        }
        else
        {
        qDebug()<<"inserted!";
        return true;
        }

}

//查询所有信息
bool DataBase::queryAll()
{
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    query.exec("select * from automobil");
    QSqlRecord rec = query.record();
    qDebug() << QObject::tr("automobil表字段数：" ) << rec.count();

    while(query.next())
    {
        int id = query.value(0).toInt();
        QString name = query.value(1).toString();
        QString password=query.value(2).toString();
        int credit=query.value(3).toInt();
         qDebug()<<QString("id:%1    name:%2 password:%3 credit:%4").arg(id).arg(name).arg(password).arg(credit);
    }
}
//查询个人
bool DataBase::queryone(int id,QString password)
{
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    query.exec("select * from automobil");
    QSqlRecord rec = query.record();
   // qDebug() << QObject::tr("automobil表字段数：" ) << rec.count();

    while(query.next())
    {
        int id1 = query.value(0).toInt();
        if(id==id1){
        QString name1 = query.value(1).toString();
        QString password1=query.value(2).toString();
        int credit1=query.value(3).toInt();
        if(password1==password){
       // qDebug()<<QString("id:%1    name:%2 password:%3 credit:%4").arg(id1).arg(name1).arg(password1).arg(credit1);
        return true;
        }else{
            return false;
        }


     }

     }
    return false;
}

//查询名字?
QString DataBase::queryname(int id)
{
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //寤虹珛鏁版嵁搴撹繛鎺?
    QSqlQuery query(db);
    query.exec("select * from automobil");
    QSqlRecord rec = query.record();
   // qDebug() << QObject::tr("automobil琛ㄥ瓧娈垫暟锛? ) << rec.count();

    while(query.next())
    {
        int id1 = query.value(0).toInt();
        if(id==id1){
        QString name1 = query.value(1).toString();
        QString password1=query.value(2).toString();
        int credit1=query.value(3).toInt();

       qDebug()<<QString("id:%1    name:%2 password:%3 credit:%4").arg(id1).arg(name1).arg(password1).arg(credit1);

            return name1;
        }


     }


    return "false";
}

//根据ID删除记录
bool DataBase::deleteById(int id)
{
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    query.prepare(QString("delete from automobil where id = %1").arg(id));
    if(!query.exec())
    {
        qDebug() << "删除记录失败！";
        return false;
    }
    return true;
}

//根据ID更新分数
bool DataBase::updateById(int id,int credite)
{
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    int credit1;
    QString name1;
    QString password1;
    query.exec("select * from automobil");
    while(query.next())
    {
        int id1 = query.value(0).toInt();
        if(id==id1){
        name1 = query.value(1).toString();
        password1=query.value(2).toString();
        credit1=query.value(3).toInt();
        break;

         }
    }

    query.prepare(QString("update automobil set credit=?where id=%1").arg(id));


     if(credite>credit1)
     {
     query.bindValue(0,credite);
      }

     bool success=query.exec();
     if(!success)
     {
         return false;
     }
    return true;
}

//更新名字
bool DataBase::updatename(int id,QString name)
{
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //寤虹珛鏁版嵁搴撹繛鎺?
    QSqlQuery query(db);
    int credit1;
    QString name1;
    QString password1;
    query.exec("select * from automobil");
    while(query.next())
    {
        int id1 = query.value(0).toInt();
        if(id==id1){
        name1 = query.value(1).toString();
        password1=query.value(2).toString();
        credit1=query.value(3).toInt();
        break;

         }
    }

    query.prepare(QString("update automobil set name=?where id=%1").arg(id));


     if(name!=name1)
     {
     query.bindValue(0,name);
      }

     bool success=query.exec();
     if(!success)
     {
         return false;
     }
    return true;
}


//排序和返回字符串
QString DataBase::sortById()
{
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);

    if (query.exec(QString("select * from %1 order by %2 %3;")\
                        .arg("automobil")\
                        .arg("credit")\
                        .arg("desc")))  //   %1:tableNmae  %2:列  %3:asc(升序)  desc(降序)
        {
             qDebug()  << "select sucess";

        }
        else
        {
             qDebug()  << "select fail";
        }
    QString str=NULL;
    int i=1;
    str="rank  id     name     credit\n";
    while(query.next())
    {

        int id = query.value(0).toInt();
        QString name = query.value(1).toString();
        QString password=query.value(2).toString();
        int credit=query.value(3).toInt();
         //qDebug()<<QString("id:%1    name:%2 password:%3 credit:%4").arg(id).arg(name).arg(password).arg(credit);
         str=str+QString("%1     %2     %3      %4\n").arg(i).arg(id).arg(name).arg(credit);
         i++;
    }
    //qDebug().noquote()<<str;
    return str;
}

