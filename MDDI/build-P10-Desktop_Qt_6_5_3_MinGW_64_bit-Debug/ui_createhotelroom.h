/********************************************************************************
** Form generated from reading UI file 'createhotelroom.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEHOTELROOM_H
#define UI_CREATEHOTELROOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CreateHotelRoom
{
public:
    QFormLayout *formLayout;
    QFormLayout *formLayout_2;
    QLabel *IdL;
    QLabel *NumberL;
    QLabel *NumOofRoomL;
    QLabel *StreetL;
    QLabel *FloorL;
    QLabel *AddL;
    QLineEdit *IdLE;
    QLineEdit *NumberLE;
    QLineEdit *NumOfRoomLE;
    QLineEdit *StreetLE;
    QLineEdit *FloorLE;
    QLineEdit *AddLE;
    QLabel *PriceL;
    QLineEdit *PriceLE;
    QPushButton *CreateHotelRoomPB;

    void setupUi(QDialog *CreateHotelRoom)
    {
        if (CreateHotelRoom->objectName().isEmpty())
            CreateHotelRoom->setObjectName("CreateHotelRoom");
        CreateHotelRoom->resize(310, 283);
        formLayout = new QFormLayout(CreateHotelRoom);
        formLayout->setObjectName("formLayout");
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        IdL = new QLabel(CreateHotelRoom);
        IdL->setObjectName("IdL");
        QFont font;
        font.setFamilies({QString::fromUtf8("Goudy Old Style")});
        font.setPointSize(12);
        IdL->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, IdL);

        NumberL = new QLabel(CreateHotelRoom);
        NumberL->setObjectName("NumberL");
        NumberL->setFont(font);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, NumberL);

        NumOofRoomL = new QLabel(CreateHotelRoom);
        NumOofRoomL->setObjectName("NumOofRoomL");
        NumOofRoomL->setFont(font);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, NumOofRoomL);

        StreetL = new QLabel(CreateHotelRoom);
        StreetL->setObjectName("StreetL");
        StreetL->setFont(font);

        formLayout_2->setWidget(3, QFormLayout::LabelRole, StreetL);

        FloorL = new QLabel(CreateHotelRoom);
        FloorL->setObjectName("FloorL");
        FloorL->setFont(font);

        formLayout_2->setWidget(4, QFormLayout::LabelRole, FloorL);

        AddL = new QLabel(CreateHotelRoom);
        AddL->setObjectName("AddL");
        AddL->setFont(font);

        formLayout_2->setWidget(6, QFormLayout::LabelRole, AddL);

        IdLE = new QLineEdit(CreateHotelRoom);
        IdLE->setObjectName("IdLE");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, IdLE);

        NumberLE = new QLineEdit(CreateHotelRoom);
        NumberLE->setObjectName("NumberLE");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, NumberLE);

        NumOfRoomLE = new QLineEdit(CreateHotelRoom);
        NumOfRoomLE->setObjectName("NumOfRoomLE");

        formLayout_2->setWidget(2, QFormLayout::FieldRole, NumOfRoomLE);

        StreetLE = new QLineEdit(CreateHotelRoom);
        StreetLE->setObjectName("StreetLE");

        formLayout_2->setWidget(3, QFormLayout::FieldRole, StreetLE);

        FloorLE = new QLineEdit(CreateHotelRoom);
        FloorLE->setObjectName("FloorLE");

        formLayout_2->setWidget(4, QFormLayout::FieldRole, FloorLE);

        AddLE = new QLineEdit(CreateHotelRoom);
        AddLE->setObjectName("AddLE");

        formLayout_2->setWidget(6, QFormLayout::FieldRole, AddLE);

        PriceL = new QLabel(CreateHotelRoom);
        PriceL->setObjectName("PriceL");
        PriceL->setFont(font);

        formLayout_2->setWidget(5, QFormLayout::LabelRole, PriceL);

        PriceLE = new QLineEdit(CreateHotelRoom);
        PriceLE->setObjectName("PriceLE");

        formLayout_2->setWidget(5, QFormLayout::FieldRole, PriceLE);


        formLayout->setLayout(0, QFormLayout::LabelRole, formLayout_2);

        CreateHotelRoomPB = new QPushButton(CreateHotelRoom);
        CreateHotelRoomPB->setObjectName("CreateHotelRoomPB");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("High Tower Text")});
        font1.setPointSize(14);
        CreateHotelRoomPB->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, CreateHotelRoomPB);


        retranslateUi(CreateHotelRoom);

        QMetaObject::connectSlotsByName(CreateHotelRoom);
    } // setupUi

    void retranslateUi(QDialog *CreateHotelRoom)
    {
        CreateHotelRoom->setWindowTitle(QCoreApplication::translate("CreateHotelRoom", "Dialog", nullptr));
        IdL->setText(QCoreApplication::translate("CreateHotelRoom", "Enter id", nullptr));
        NumberL->setText(QCoreApplication::translate("CreateHotelRoom", "Enter number", nullptr));
        NumOofRoomL->setText(QCoreApplication::translate("CreateHotelRoom", "Enter number of rooms", nullptr));
        StreetL->setText(QCoreApplication::translate("CreateHotelRoom", "Enter street", nullptr));
        FloorL->setText(QCoreApplication::translate("CreateHotelRoom", "Enter floor", nullptr));
        AddL->setText(QCoreApplication::translate("CreateHotelRoom", "Enter additional service", nullptr));
        PriceL->setText(QCoreApplication::translate("CreateHotelRoom", "Enter Price", nullptr));
        CreateHotelRoomPB->setText(QCoreApplication::translate("CreateHotelRoom", "Create", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateHotelRoom: public Ui_CreateHotelRoom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEHOTELROOM_H
