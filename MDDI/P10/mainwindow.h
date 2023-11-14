#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include"Apartment.h"
#include "House.h"
#include "HotelRoom.h"
#include "outputapartment.h"
#include "outputhotelroom.h"
#include "sqlitedbmanager.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class QSqlTableModel;

class DBManager;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

signals:
   void addedApartment(SqliteDBManager *sqliteDBManager);
   void addedHotelRoom(SqliteDBManager *sqliteDBManager);
public:
  //  explicit MainWindow(DBManager* dbManager, QWidget* parent = nullptr);
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_CreateAPb_clicked();

    void addApartment(Apartment *apartment);

    void addHotelRoom(HotelRoom *hotelRoom);

    void on_OutputAPb_clicked();

    void on_ExitPb_clicked();

    void on_CreateHPb_clicked();

    void on_OutputHPb_clicked();

private:
    Ui::MainWindow *ui;
//    QList<HotelRoom*> hotelRooms;
//    QList<Apartment*> apartments;
    OutputHotelRoom * outputHotelRoom;
    OutputApartment *outputApartment;
    SqliteDBManager *sqliteDBManager;
    };
#endif // MAINWINDOW_H
