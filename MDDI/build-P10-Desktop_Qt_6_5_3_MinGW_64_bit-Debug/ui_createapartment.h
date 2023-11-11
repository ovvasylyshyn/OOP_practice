/********************************************************************************
** Form generated from reading UI file 'createapartment.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEAPARTMENT_H
#define UI_CREATEAPARTMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CreateApartment
{
public:
    QFormLayout *formLayout_2;
    QFormLayout *formLayout;
    QLabel *IdL;
    QLineEdit *IdLE;
    QLabel *NumberL;
    QLineEdit *NumberLE;
    QLabel *NumOofRoomL;
    QLineEdit *NumOfRoomLE;
    QLabel *AreaL;
    QLineEdit *AreaLE;
    QLabel *StreetL;
    QLineEdit *StreetLE;
    QLabel *FloorL;
    QLineEdit *FloorLE;
    QLabel *CornerL;
    QLineEdit *CornerLE;
    QLabel *SunL;
    QLineEdit *SunLE;
    QPushButton *pushButton;

    void setupUi(QDialog *CreateApartment)
    {
        if (CreateApartment->objectName().isEmpty())
            CreateApartment->setObjectName("CreateApartment");
        CreateApartment->resize(370, 337);
        CreateApartment->setModal(false);
        formLayout_2 = new QFormLayout(CreateApartment);
        formLayout_2->setObjectName("formLayout_2");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        IdL = new QLabel(CreateApartment);
        IdL->setObjectName("IdL");
        QFont font;
        font.setFamilies({QString::fromUtf8("Goudy Old Style")});
        font.setPointSize(12);
        IdL->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, IdL);

        IdLE = new QLineEdit(CreateApartment);
        IdLE->setObjectName("IdLE");

        formLayout->setWidget(0, QFormLayout::FieldRole, IdLE);

        NumberL = new QLabel(CreateApartment);
        NumberL->setObjectName("NumberL");
        NumberL->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, NumberL);

        NumberLE = new QLineEdit(CreateApartment);
        NumberLE->setObjectName("NumberLE");

        formLayout->setWidget(1, QFormLayout::FieldRole, NumberLE);

        NumOofRoomL = new QLabel(CreateApartment);
        NumOofRoomL->setObjectName("NumOofRoomL");
        NumOofRoomL->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, NumOofRoomL);

        NumOfRoomLE = new QLineEdit(CreateApartment);
        NumOfRoomLE->setObjectName("NumOfRoomLE");

        formLayout->setWidget(2, QFormLayout::FieldRole, NumOfRoomLE);

        AreaL = new QLabel(CreateApartment);
        AreaL->setObjectName("AreaL");
        AreaL->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, AreaL);

        AreaLE = new QLineEdit(CreateApartment);
        AreaLE->setObjectName("AreaLE");

        formLayout->setWidget(3, QFormLayout::FieldRole, AreaLE);

        StreetL = new QLabel(CreateApartment);
        StreetL->setObjectName("StreetL");
        StreetL->setFont(font);

        formLayout->setWidget(4, QFormLayout::LabelRole, StreetL);

        StreetLE = new QLineEdit(CreateApartment);
        StreetLE->setObjectName("StreetLE");

        formLayout->setWidget(4, QFormLayout::FieldRole, StreetLE);

        FloorL = new QLabel(CreateApartment);
        FloorL->setObjectName("FloorL");
        FloorL->setFont(font);

        formLayout->setWidget(5, QFormLayout::LabelRole, FloorL);

        FloorLE = new QLineEdit(CreateApartment);
        FloorLE->setObjectName("FloorLE");

        formLayout->setWidget(5, QFormLayout::FieldRole, FloorLE);

        CornerL = new QLabel(CreateApartment);
        CornerL->setObjectName("CornerL");
        CornerL->setFont(font);

        formLayout->setWidget(6, QFormLayout::LabelRole, CornerL);

        CornerLE = new QLineEdit(CreateApartment);
        CornerLE->setObjectName("CornerLE");

        formLayout->setWidget(6, QFormLayout::FieldRole, CornerLE);

        SunL = new QLabel(CreateApartment);
        SunL->setObjectName("SunL");
        SunL->setFont(font);

        formLayout->setWidget(7, QFormLayout::LabelRole, SunL);

        SunLE = new QLineEdit(CreateApartment);
        SunLE->setObjectName("SunLE");

        formLayout->setWidget(7, QFormLayout::FieldRole, SunLE);


        formLayout_2->setLayout(0, QFormLayout::LabelRole, formLayout);

        pushButton = new QPushButton(CreateApartment);
        pushButton->setObjectName("pushButton");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("High Tower Text")});
        font1.setPointSize(14);
        pushButton->setFont(font1);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, pushButton);


        retranslateUi(CreateApartment);

        QMetaObject::connectSlotsByName(CreateApartment);
    } // setupUi

    void retranslateUi(QDialog *CreateApartment)
    {
        CreateApartment->setWindowTitle(QCoreApplication::translate("CreateApartment", "Dialog", nullptr));
        IdL->setText(QCoreApplication::translate("CreateApartment", "Enter id", nullptr));
        NumberL->setText(QCoreApplication::translate("CreateApartment", "Enter number", nullptr));
        NumOofRoomL->setText(QCoreApplication::translate("CreateApartment", "Enter number of rooms", nullptr));
        AreaL->setText(QCoreApplication::translate("CreateApartment", "Enter area", nullptr));
        StreetL->setText(QCoreApplication::translate("CreateApartment", "Enter street", nullptr));
        FloorL->setText(QCoreApplication::translate("CreateApartment", "Enter floor", nullptr));
        CornerL->setText(QCoreApplication::translate("CreateApartment", "Enter corner apartment (Yes/No) ", nullptr));
        SunL->setText(QCoreApplication::translate("CreateApartment", "Enter sun side (Yes/No)", nullptr));
        pushButton->setText(QCoreApplication::translate("CreateApartment", "Create", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateApartment: public Ui_CreateApartment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEAPARTMENT_H
