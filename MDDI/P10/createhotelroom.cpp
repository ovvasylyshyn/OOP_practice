#include "createhotelroom.h"
#include "ui_createhotelroom.h"
#include <QMessageBox>
#include <QDebug>
#include <QFile>
#include <QDateTime>

CreateHotelRoom::CreateHotelRoom(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateHotelRoom)
{
    ui->setupUi(this);
}

CreateHotelRoom::~CreateHotelRoom()
{
    delete ui;
}

void CreateHotelRoom::on_CreateHotelRoomPB_clicked()
{
    if(ui->IdLE->text().isEmpty()||ui->NumberLE->text().isEmpty()
        ||ui->NumOfRoomLE->text().isEmpty()||ui->PriceLE->text().isEmpty()
        ||ui->StreetLE->text().isEmpty()||ui->FloorLE->text().isEmpty()
        ||ui->AddLE->text().isEmpty())
    {
        QFile file("logfile.txt");
        if (file.open(QIODevice::Append)) {
            QTextStream stream(&file);
            stream << "\n\n\n" + QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss") + ": " + "Can`t write data.";
        }
        file.close();qWarning() << "You`ve not fill all fiels";
        QMessageBox::critical(this, "Warning!", "You have a free fields!");

    }else{
        HotelRoom *hotelRoom=new HotelRoom(ui->IdLE->text().toStdString(),ui->NumberLE->text().toInt(),
                                             ui->FloorLE->text().toInt(),ui->NumOfRoomLE->text().toInt(),
                                             ui->StreetLE->text().toStdString(),ui->PriceLE->text().toInt(),
                                             ui->AddLE->text().toStdString());
        emit created (hotelRoom);
        this->hide();
        QMessageBox::about(this, "created", "created");
    }
}

