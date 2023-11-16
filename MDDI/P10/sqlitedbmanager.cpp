#include "sqlitedbmanager.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QFile>
#include <QDateTime>

SqliteDBManager::SqliteDBManager()
{   this-> db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName("ExampleDataBase");
    this-> db.setDatabaseName("DataBase.db");
        QFile logfile("logfile.txt");
        if (logfile.open(QIODevice::WriteOnly | QIODevice::Append)) {
              if (!this->connectToDataBase()) {
            QTextStream output(&logfile);
            output << QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss") + ": " << " not conected "  << "\n";
    } else {
            QTextStream output(&logfile);
            output<<QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss") + ": "<< "conected to database"  << "\n";
    logfile.close();}
    }
    }


bool SqliteDBManager::connectToDataBase() {
    try{
    if(db.open()){
        return true;
    } else
        return false;
    } catch  (QSqlError error) {
    qDebug() << error.text();
    exit(1);
    }}


QSqlDatabase SqliteDBManager::getDB() {
    return db;
}

bool SqliteDBManager::closeDataBase() {
    QFile logfile("logfile.txt");
    if (logfile.open(QIODevice::WriteOnly | QIODevice::Append)) {
    QTextStream output(&logfile);
    output << QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss") + ": ";

    if (db.isOpen()) {
        db.close();
        output << "database closed\n";
        return true;
    } else {
        output << "database not closed\n";
        return false;
    }
    }
    return false;
}


bool SqliteDBManager::createTables_a() {
    QSqlQuery query;
    try{
        if (!query.exec("CREATE TABLE" + APARTMENT_NAME + " ("
                                                       "id VARCHAR(255) PRIMARY KEY,"
                                                       "number INTEGER NOT NULL,"
                                                       "floor INTEGER NOT NULL,"
                                                       "numOfRoom INTEGER NOT NULL,"
                                                       "area INTEGER NOT NULL,"
                                                       "street VARCHAR(255) NOT NULL,"
                                                       "sunSide VARCHAR(255) NOT NULL,"
                                                       "cornerApar VARCHAR(255) NOT NULL"
                                                       ")")) {
        QFile logfile("logfile.txt");
        if (logfile.open(QIODevice::WriteOnly | QIODevice::Append)) {
            QTextStream output(&logfile);
            output << QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss") + ": " << "Can`t create table apartment " << "\n";
            logfile.close();
        }
        }
        else {
        return true;
        }
    } catch (QSqlError error) {
        qDebug() << error.text();
        return false;
}
}

bool SqliteDBManager::createTables_h() {
    QSqlQuery query;
try{
    if (!query.exec("CREATE TABLE " + HOTELROOM_NAME_TABLE + " ("
                                                             "id VARCHAR(255) PRIMARY KEY,"
                                                             "number INTEGER NOT NULL,"
                                                             "floor INTEGER NOT NULL,"
                                                             "numOfRoom INTEGER NOT NULL,"
                                                             "price INTEGER NOT NULL,"
                                                             "street VARCHAR(255) NOT NULL,"
                                                             "listOfAdd VARCHAR(255)"
                                                             ")")) {
        QFile logfile("logfile.txt");
        if (logfile.open(QIODevice::WriteOnly | QIODevice::Append)) {
            QTextStream output(&logfile);
            output  << QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss") + ": "<< "Can`t create table hotelRoom " << "\n";
            logfile.close();
        }
        }
        else {
        return true;
        }
} catch (QSqlError error) {
        qDebug() << error.text();
        return false;
}
}

bool SqliteDBManager::createTables()
{
    bool create = true;
    QSqlQuery queryApartment;
    queryApartment.exec();

    if (!queryApartment.next()) {
        create = createTables_a();
    }

    QSqlQuery queryHotelRoom;
    queryHotelRoom.exec();

    if (!queryHotelRoom.next()) {
        create = createTables_h();
    }
    return create;
}

bool SqliteDBManager::inserIntoTable(const Apartment& apartment) {
    try{
    QSqlQuery query;
        query.prepare("INSERT INTO " + APARTMENT_NAME + " (" +
                      TABLE_ID + ", " +
                      TABLE_NUMBER + ", " +
                      TABLE_FLOOR + ", " +
                      TABLE_NUM_OF_ROOM + ", " +
                      TABLE_AREA + ", " +
                      TABLE_STREET + ", " +
                      TABLE_SUN_SIDE + ", " +
                      TABLE_CORNER_APAR + ") "
               "VALUES (:id, :number, :floor, :numOfRoom, :area, :street, :sunSide, :cornerApar)");

        query.bindValue(":id", QString::fromStdString(apartment.getId()));
        query.bindValue(":number", QString::number(apartment.getNumber()));
        query.bindValue(":floor", QString::number(apartment.getFloor()));
        query.bindValue(":numOfRoom", QString::number(apartment.getNumOfRoom()));
        query.bindValue(":area", QString::number(apartment.getArea()));
        query.bindValue(":street", QString::fromStdString(apartment.getStreet()));
        query.bindValue(":sunSide", QString::fromStdString(apartment.getSunSide()));
        query.bindValue(":cornerApar", QString::fromStdString(apartment.getCornerApar()));
        if (!query.exec()) {
        QFile logfile("logfile.txt");
        if (logfile.open(QIODevice::WriteOnly | QIODevice::Append)) {
        QTextStream output(&logfile);
        output  << QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss") + ": " << "Can`t insert in " + APARTMENT_NAME << "\n";
        output << query.lastError().text() << "\n";
        logfile.close();
        }
        }
        return true;
    } catch (QSqlError error) {
        qDebug() << error.text();
        return false;
}
}


bool SqliteDBManager::inserIntoTable(const HotelRoom& hotelRoom) {
try{
    QSqlQuery query;
        query.prepare("INSERT INTO " + HOTELROOM_NAME_TABLE + " (" +
                      TABLE_ID + ", " +
                      TABLE_NUMBER + ", " +
                      TABLE_FLOOR + ", " +
                      TABLE_NUM_OF_ROOM + ", " +
                      TABLE_PRICE + ", " +
                      TABLE_STREET + ", " +
                      TABLE_LIST_OF_ADD + ") "
                                          "VALUES (:id, :number, :floor, :numOfRoom, :price, :street, :listOfAdd)");
        query.bindValue(":id", QString::fromStdString(hotelRoom.getId()));
        query.bindValue(":number", QString::number(hotelRoom.getNumber()));
        query.bindValue(":floor", QString::number(hotelRoom.getFloor()));
        query.bindValue(":numOfRoom", QString::number(hotelRoom.getNumOfRoom()));
        query.bindValue(":price", QString::number(hotelRoom.getPrice()));
        query.bindValue(":street", QString::fromStdString(hotelRoom.getStreet()));
        query.bindValue(":listOfAdd", QString::fromStdString(hotelRoom.getAdd()));

        if (!query.exec()) {
        QFile logfile("logfile.txt");
        if (logfile.open(QIODevice::WriteOnly | QIODevice::Append)) {
        QTextStream output(&logfile);
        output  << QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss") + ": " << "Can`t insert in " + HOTELROOM_NAME_TABLE << "\n";
        output << query.lastError().text() << "\n";
        logfile.close();
        }
        }
        return true;
} catch (QSqlError error) {
        qDebug() << error.text();
        return false;
}
}

