/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QLineEdit *InsertL;
    QPushButton *SendInsertL;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *PosToEditL;
    QLabel *label_2;
    QLineEdit *NewDataL;
    QPushButton *SendEditL;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *PosToGetL;
    QPushButton *SendGetFromL;
    QPushButton *SendDeleteFirstL;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *InsertABB;
    QPushButton *SendInsertABB;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *DeleteABB;
    QPushButton *SendDeleteABB;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(625, 313);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 0, 571, 247));
        horizontalLayout_7 = new QHBoxLayout(widget);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(16777215, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("Norasi"));
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Norasi"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        InsertL = new QLineEdit(widget);
        InsertL->setObjectName(QString::fromUtf8("InsertL"));

        horizontalLayout->addWidget(InsertL);

        SendInsertL = new QPushButton(widget);
        SendInsertL->setObjectName(QString::fromUtf8("SendInsertL"));

        horizontalLayout->addWidget(SendInsertL);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Norasi"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setUnderline(false);
        font2.setWeight(75);
        font2.setStrikeOut(false);
        font2.setKerning(true);
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        label->setFont(font3);

        horizontalLayout_2->addWidget(label);

        PosToEditL = new QLineEdit(widget);
        PosToEditL->setObjectName(QString::fromUtf8("PosToEditL"));

        horizontalLayout_2->addWidget(PosToEditL);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font3);

        horizontalLayout_2->addWidget(label_2);

        NewDataL = new QLineEdit(widget);
        NewDataL->setObjectName(QString::fromUtf8("NewDataL"));

        horizontalLayout_2->addWidget(NewDataL);

        SendEditL = new QPushButton(widget);
        SendEditL->setObjectName(QString::fromUtf8("SendEditL"));

        horizontalLayout_2->addWidget(SendEditL);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout);


        verticalLayout_5->addLayout(verticalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        PosToGetL = new QLineEdit(widget);
        PosToGetL->setObjectName(QString::fromUtf8("PosToGetL"));

        horizontalLayout_3->addWidget(PosToGetL);

        SendGetFromL = new QPushButton(widget);
        SendGetFromL->setObjectName(QString::fromUtf8("SendGetFromL"));

        horizontalLayout_3->addWidget(SendGetFromL);


        verticalLayout_4->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout_4);

        SendDeleteFirstL = new QPushButton(widget);
        SendDeleteFirstL->setObjectName(QString::fromUtf8("SendDeleteFirstL"));
        SendDeleteFirstL->setMinimumSize(QSize(60, 60));
        SendDeleteFirstL->setLayoutDirection(Qt::LeftToRight);
        SendDeleteFirstL->setAutoFillBackground(false);

        horizontalLayout_4->addWidget(SendDeleteFirstL);


        verticalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_6->addLayout(verticalLayout_5);


        horizontalLayout_7->addLayout(verticalLayout_6);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_7);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        InsertABB = new QLineEdit(widget);
        InsertABB->setObjectName(QString::fromUtf8("InsertABB"));

        horizontalLayout_5->addWidget(InsertABB);

        SendInsertABB = new QPushButton(widget);
        SendInsertABB->setObjectName(QString::fromUtf8("SendInsertABB"));

        horizontalLayout_5->addWidget(SendInsertABB);


        verticalLayout_7->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        DeleteABB = new QLineEdit(widget);
        DeleteABB->setObjectName(QString::fromUtf8("DeleteABB"));

        horizontalLayout_6->addWidget(DeleteABB);

        SendDeleteABB = new QPushButton(widget);
        SendDeleteABB->setObjectName(QString::fromUtf8("SendDeleteABB"));

        horizontalLayout_6->addWidget(SendDeleteABB);


        verticalLayout_7->addLayout(horizontalLayout_6);


        verticalLayout_8->addLayout(verticalLayout_7);


        horizontalLayout_7->addLayout(verticalLayout_8);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 625, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Lista", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Insertar al principio de la lista", nullptr));
        SendInsertL->setText(QApplication::translate("MainWindow", "Insertar", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Modificar en la lista", nullptr));
        label->setText(QApplication::translate("MainWindow", "Posici\303\263n:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Nuevo Dato:", nullptr));
        SendEditL->setText(QApplication::translate("MainWindow", "Modificar", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Obtener por posici\303\263n", nullptr));
        SendGetFromL->setText(QApplication::translate("MainWindow", "Obtener", nullptr));
        SendDeleteFirstL->setText(QApplication::translate("MainWindow", "Eliminar el Primero", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Arbol Binario de B\303\272squeda", nullptr));
        SendInsertABB->setText(QApplication::translate("MainWindow", "Insertar Dato", nullptr));
        SendDeleteABB->setText(QApplication::translate("MainWindow", "Eliminar Dato", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
