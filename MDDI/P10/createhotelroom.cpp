#include "createhotelroom.h"
#include "ui_createhotelroom.h"
#include <QMessageBox>

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
        QMessageBox::critical(this, "Warning!", "You have a free fields");
    }else{
        HotelRoom *hotelRoom=new HotelRoom(ui->IdLE->text().toStdString(),ui->NumberLE->text().toInt(),
                                             ui->FloorLE->text().toInt(),ui->NumOfRoomLE->text().toInt(),
                                             ui->StreetLE->text().toStdString(),ui->PriceLE->text().toInt(),ui->AddLE->text().toStdString());
        emit created (hotelRoom);
        this->hide();
        QMessageBox::about(this, "created", "created");
    }
}

