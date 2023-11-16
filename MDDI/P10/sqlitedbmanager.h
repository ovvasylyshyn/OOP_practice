#ifndef SQLITEDBMANAGER_H
#define SQLITEDBMANAGER_H

#include"dbmanager.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include "Apartment.h"
#include"HotelRoom.h"

class SqliteDBManager
{     QSqlDatabase db;


public:
   static SqliteDBManager* instance;
    const QString APARTMENT_NAME = "Apartment";
    const QString HOTELROOM_NAME_TABLE = "HotelRoom";
    const QString TABLE_ID = "id";
    const QString TABLE_NUMBER = "number";
    const QString TABLE_FLOOR = "floor";
    const QString TABLE_NUM_OF_ROOM = "numOfRoom";
    const QString TABLE_AREA = "area";
    const QString TABLE_STREET = "street";
    const QString TABLE_SUN_SIDE = "sunSide";
    const QString TABLE_CORNER_APAR = "cornerApar";
    const QString TABLE_PRICE = "price";
    const QString TABLE_LIST_OF_ADD = "listOfAdd";
    bool closeDataBase();
    bool createTables_a();
     bool createTables_h();
    bool createTables();
     SqliteDBManager();

    bool connectToDataBase() ;

    QSqlDatabase getDB() ;

    bool inserIntoTable(const Apartment& apartment) ;
    bool inserIntoTable(const HotelRoom& hotelRoom) ;
};

#endif // SQLITEDBMANAGER_H
