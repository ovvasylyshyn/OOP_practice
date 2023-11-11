/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *PWL;
    QGridLayout *gridLayout;
    QPushButton *CreateHPb;
    QPushButton *OutputHPb;
    QPushButton *ExitPb;
    QPushButton *CreateAPb;
    QPushButton *OutputAPb;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(468, 362);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        PWL = new QLabel(centralwidget);
        PWL->setObjectName("PWL");
        QFont font;
        font.setFamilies({QString::fromUtf8("MS UI Gothic")});
        font.setPointSize(28);
        PWL->setFont(font);
        PWL->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(PWL);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        CreateHPb = new QPushButton(centralwidget);
        CreateHPb->setObjectName("CreateHPb");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Goudy Old Style")});
        font1.setPointSize(14);
        CreateHPb->setFont(font1);

        gridLayout->addWidget(CreateHPb, 1, 0, 1, 1);

        OutputHPb = new QPushButton(centralwidget);
        OutputHPb->setObjectName("OutputHPb");
        OutputHPb->setFont(font1);

        gridLayout->addWidget(OutputHPb, 3, 0, 1, 1);

        ExitPb = new QPushButton(centralwidget);
        ExitPb->setObjectName("ExitPb");
        ExitPb->setFont(font1);

        gridLayout->addWidget(ExitPb, 4, 0, 1, 1);

        CreateAPb = new QPushButton(centralwidget);
        CreateAPb->setObjectName("CreateAPb");
        CreateAPb->setFont(font1);

        gridLayout->addWidget(CreateAPb, 0, 0, 1, 1);

        OutputAPb = new QPushButton(centralwidget);
        OutputAPb->setObjectName("OutputAPb");
        OutputAPb->setFont(font1);

        gridLayout->addWidget(OutputAPb, 2, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 468, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        PWL->setText(QCoreApplication::translate("MainWindow", "Practical Work 10", nullptr));
        CreateHPb->setText(QCoreApplication::translate("MainWindow", "Create hotel room", nullptr));
        OutputHPb->setText(QCoreApplication::translate("MainWindow", "Output hotel room", nullptr));
        ExitPb->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        CreateAPb->setText(QCoreApplication::translate("MainWindow", "Create apartment", nullptr));
        OutputAPb->setText(QCoreApplication::translate("MainWindow", "Output apartment", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
