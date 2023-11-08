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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCreate;
    QAction *actionShow;
    QAction *actionExit;
    QWidget *centralwidget;
    QWidget *verticalWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *createPushButton_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QLabel *floorLabel_2;
    QLineEdit *idLine_2;
    QLineEdit *cornerAparLine_2;
    QLabel *numberLabel_2;
    QLabel *areaLabel_2;
    QLineEdit *sunSideLine_2;
    QLabel *streetLabel_2;
    QLineEdit *streetLine_2;
    QLabel *idLabel_2;
    QLabel *cornerAparLabel_2;
    QLabel *numOfRoomsLabel_2;
    QLineEdit *numberLine_2;
    QLineEdit *floorLine_2;
    QLineEdit *numOfRoomsLine_2;
    QLabel *sunSideLabel_2;
    QLineEdit *areaLine_2;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionCreate = new QAction(MainWindow);
        actionCreate->setObjectName("actionCreate");
        actionShow = new QAction(MainWindow);
        actionShow->setObjectName("actionShow");
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalWidget_2 = new QWidget(centralwidget);
        verticalWidget_2->setObjectName("verticalWidget_2");
        verticalWidget_2->setGeometry(QRect(410, 130, 171, 111));
        verticalLayout_2 = new QVBoxLayout(verticalWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        createPushButton_2 = new QPushButton(verticalWidget_2);
        createPushButton_2->setObjectName("createPushButton_2");
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        createPushButton_2->setFont(font);
        createPushButton_2->setIconSize(QSize(20, 20));

        verticalLayout_2->addWidget(createPushButton_2);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(20, 10, 231, 412));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        floorLabel_2 = new QLabel(gridLayoutWidget);
        floorLabel_2->setObjectName("floorLabel_2");

        gridLayout_2->addWidget(floorLabel_2, 3, 0, 1, 1);

        idLine_2 = new QLineEdit(gridLayoutWidget);
        idLine_2->setObjectName("idLine_2");

        gridLayout_2->addWidget(idLine_2, 10, 0, 1, 1);

        cornerAparLine_2 = new QLineEdit(gridLayoutWidget);
        cornerAparLine_2->setObjectName("cornerAparLine_2");

        gridLayout_2->addWidget(cornerAparLine_2, 14, 0, 1, 1);

        numberLabel_2 = new QLabel(gridLayoutWidget);
        numberLabel_2->setObjectName("numberLabel_2");

        gridLayout_2->addWidget(numberLabel_2, 1, 0, 1, 1);

        areaLabel_2 = new QLabel(gridLayoutWidget);
        areaLabel_2->setObjectName("areaLabel_2");

        gridLayout_2->addWidget(areaLabel_2, 15, 0, 1, 1);

        sunSideLine_2 = new QLineEdit(gridLayoutWidget);
        sunSideLine_2->setObjectName("sunSideLine_2");

        gridLayout_2->addWidget(sunSideLine_2, 12, 0, 1, 1);

        streetLabel_2 = new QLabel(gridLayoutWidget);
        streetLabel_2->setObjectName("streetLabel_2");

        gridLayout_2->addWidget(streetLabel_2, 5, 0, 1, 1);

        streetLine_2 = new QLineEdit(gridLayoutWidget);
        streetLine_2->setObjectName("streetLine_2");

        gridLayout_2->addWidget(streetLine_2, 6, 0, 1, 1);

        idLabel_2 = new QLabel(gridLayoutWidget);
        idLabel_2->setObjectName("idLabel_2");

        gridLayout_2->addWidget(idLabel_2, 9, 0, 1, 1);

        cornerAparLabel_2 = new QLabel(gridLayoutWidget);
        cornerAparLabel_2->setObjectName("cornerAparLabel_2");

        gridLayout_2->addWidget(cornerAparLabel_2, 13, 0, 1, 1);

        numOfRoomsLabel_2 = new QLabel(gridLayoutWidget);
        numOfRoomsLabel_2->setObjectName("numOfRoomsLabel_2");

        gridLayout_2->addWidget(numOfRoomsLabel_2, 7, 0, 1, 1);

        numberLine_2 = new QLineEdit(gridLayoutWidget);
        numberLine_2->setObjectName("numberLine_2");

        gridLayout_2->addWidget(numberLine_2, 2, 0, 1, 1);

        floorLine_2 = new QLineEdit(gridLayoutWidget);
        floorLine_2->setObjectName("floorLine_2");

        gridLayout_2->addWidget(floorLine_2, 4, 0, 1, 1);

        numOfRoomsLine_2 = new QLineEdit(gridLayoutWidget);
        numOfRoomsLine_2->setObjectName("numOfRoomsLine_2");

        gridLayout_2->addWidget(numOfRoomsLine_2, 8, 0, 1, 1);

        sunSideLabel_2 = new QLabel(gridLayoutWidget);
        sunSideLabel_2->setObjectName("sunSideLabel_2");

        gridLayout_2->addWidget(sunSideLabel_2, 11, 0, 1, 1);

        areaLine_2 = new QLineEdit(gridLayoutWidget);
        areaLine_2->setObjectName("areaLine_2");

        gridLayout_2->addWidget(areaLine_2, 16, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName("menuMenu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionCreate);
        menuMenu->addAction(actionShow);
        menuMenu->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionCreate->setText(QCoreApplication::translate("MainWindow", "Create", nullptr));
        actionShow->setText(QCoreApplication::translate("MainWindow", "Show", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        createPushButton_2->setText(QCoreApplication::translate("MainWindow", "Create objects", nullptr));
        floorLabel_2->setText(QCoreApplication::translate("MainWindow", "Enter floor", nullptr));
        numberLabel_2->setText(QCoreApplication::translate("MainWindow", "Enter number", nullptr));
        areaLabel_2->setText(QCoreApplication::translate("MainWindow", "Enter area", nullptr));
        streetLabel_2->setText(QCoreApplication::translate("MainWindow", "Enter street", nullptr));
        idLabel_2->setText(QCoreApplication::translate("MainWindow", "Enter ID", nullptr));
        cornerAparLabel_2->setText(QCoreApplication::translate("MainWindow", "Enter corner apartment (Yes/No)", nullptr));
        numOfRoomsLabel_2->setText(QCoreApplication::translate("MainWindow", "Enter number of rooms", nullptr));
        sunSideLabel_2->setText(QCoreApplication::translate("MainWindow", "Enter sun side apartment (Yes/No)", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("MainWindow", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
