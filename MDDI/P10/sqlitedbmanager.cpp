#include "sqlitedbmanager.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QFile>
#include <QDateTime>

void logError(QString errorText) {
    QFile file("logfile.txt");
    if (file.open(QIODevice::Append)) {
        QTextStream stream(&file);
        stream << "\n\n\n" + QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss") + ": " + errorText;
    }
    file.close();
}

SqliteDBManager::SqliteDBManager()
{   this-> db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName("ExampleDataBase");
    this-> db.setDatabaseName("DataBase.db");
    if (!this->connectToDataBase()) {
        logError("Error. Error description: " + db.lastError().text());
        qFatal() << "Error. Error description: " + db.lastError().text();
    }
}

bool SqliteDBManager::connectToDataBase() {
    if(db.open()){
        return true;
    } else
        return false;
}


QSqlDatabase SqliteDBManager::getDB() {
    return db;
}


void SqliteDBManager::closeDataBase() {
    db.close();
    if (this->db.lastError().text() != "") {
        logError("Unable to close database. Error description: " + this->db.lastError().text());
        qWarning() << "Unable to close database. Error description: " + this->db.lastError().text();
    }
}

bool SqliteDBManager::createTables_a() {
    QSqlQuery query;
    if (!query.exec("CREATE TABLE " + APARTMENT_NAME + " ("
                                                       "id VARCHAR(255) PRIMARY KEY,"
                                                       "number INTEGER NOT NULL,"
                                                       "floor INTEGER NOT NULL,"
                                                       "numOfRoom INTEGER NOT NULL,"
                                                       "area INTEGER NOT NULL,"
                                                       "street VARCHAR(255) NOT NULL,"
                                                       "sunSide VARCHAR(255) NOT NULL,"
                                                       "cornerApar VARCHAR(255) NOT NULL"
                                                       ")")) {
        logError("Unable to create table: " + this->APARTMENT_NAME + ". Error description: " + query.lastError().text());
        qWarning() << "Unable to create table: " + this->APARTMENT_NAME + ". Error description: " + query.lastError().text();
        return false;
    }
    qDebug() << "DataBase: Table " << HOTELROOM_NAME_TABLE << " created successfully at "
             << QDateTime::currentDateTime().toString();
    return true;
}

bool SqliteDBManager::createTables_h() {
    QSqlQuery query;
    if (!query.exec("CREATE TABLE " + HOTELROOM_NAME_TABLE + " ("
                                                             "id VARCHAR(255) PRIMARY KEY,"
                                                             "number INTEGER NOT NULL,"
                                                             "floor INTEGER NOT NULL,"
                                                             "numOfRoom INTEGER NOT NULL,"
                                                             "price INTEGER NOT NULL,"
                                                             "street VARCHAR(255) NOT NULL,"
                                                             "listOfAdd VARCHAR(255)"
                                                             ")")) {
        logError("Unable to create table " + this->HOTELROOM_NAME_TABLE + ". Error description: " + query.lastError().text());
        qWarning() << "Unable to create table " + this->HOTELROOM_NAME_TABLE + ". Error description: " + query.lastError().text();
        return false;
    }
    qDebug() << "DataBase: Table " << HOTELROOM_NAME_TABLE << " created successfully at "
             << QDateTime::currentDateTime().toString();
    return true;
}

bool SqliteDBManager::createTables()
{
    bool success = true;
    QSqlQuery queryApartment;
    queryApartment.exec();

    if (!queryApartment.next()) {
        success = createTables_a();
    }

    QSqlQuery queryHotelRoom;
    queryHotelRoom.exec();

    if (!queryHotelRoom.next()) {
        success = createTables_h();
    }
    return success;
}

bool SqliteDBManager::inserIntoTable(const Apartment& apartment) {
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
        try {
        if (!query.exec()) {
            logError("Unable to insert into table " + this->APARTMENT_NAME + ". Error description: " + query.lastError().text());
            qWarning() << "Unable to insert into table " + this->APARTMENT_NAME + ". Error description: " + query.lastError().text();
            return false;
        } else {
            return true;
        }
        } catch (const exception& e) {
        qDebug() << "Exception caught: " << e.what();
        return false;
        }
}


bool SqliteDBManager::inserIntoTable(const HotelRoom& hotelRoom) {
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

        try {
        if (!query.exec()) {
            logError("Unable to insert into table " + this->HOTELROOM_NAME_TABLE + ". Error description: " + query.lastError().text());
            qWarning() << "Unable to insert into table " + this->HOTELROOM_NAME_TABLE + ". Error description: " + query.lastError().text();
            return false;
        } else {
            return true;
        }
        } catch (const exception& e) {
        qDebug() << "Exception caught: " << e.what();
        return false;
        }
}

