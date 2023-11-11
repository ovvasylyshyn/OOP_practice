#include "createapartment.h"
#include "ui_createapartment.h"
#include <QMessageBox>

CreateApartment::CreateApartment(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateApartment)
{
    ui->setupUi(this);
}

CreateApartment::~CreateApartment()
{
    delete ui;
}

void CreateApartment::on_pushButton_clicked()
{
    if(ui->IdLE->text().isEmpty()||ui->NumberLE->text().isEmpty()
        ||ui->NumOfRoomLE->text().isEmpty()||ui->AreaLE->text().isEmpty()
        ||ui->StreetLE->text().isEmpty()||ui->FloorLE->text().isEmpty()
        ||ui->CornerLE->text().isEmpty()||ui->SunLE->text().isEmpty())
    {
         QMessageBox::critical(this, "Warning!", "You have a free fields");
    }else{
         Apartment *apartment=new Apartment(ui->IdLE->text().toStdString(),ui->NumberLE->text().toInt(),
        ui->FloorLE->text().toInt(),ui->NumOfRoomLE->text().toInt(),
        ui->AreaLE->text().toInt(),ui->StreetLE->text().toStdString(),
        ui->SunLE->text().toStdString(),ui->CornerLE->text().toStdString());
         emit created (apartment);
         this->hide();
         QMessageBox::about(this, "created", "created");
    }
}



