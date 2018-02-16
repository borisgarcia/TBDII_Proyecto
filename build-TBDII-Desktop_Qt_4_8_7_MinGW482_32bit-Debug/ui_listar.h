/********************************************************************************
** Form generated from reading UI file 'listar.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTAR_H
#define UI_LISTAR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Listar
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Listar)
    {
        if (Listar->objectName().isEmpty())
            Listar->setObjectName(QString::fromUtf8("Listar"));
        Listar->resize(599, 385);
        centralwidget = new QWidget(Listar);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 120, 581, 241));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        Listar->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Listar);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Listar->setStatusBar(statusbar);

        retranslateUi(Listar);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Listar);
    } // setupUi

    void retranslateUi(QMainWindow *Listar)
    {
        Listar->setWindowTitle(QApplication::translate("Listar", "MainWindow", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Listar", "Registros", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Listar", "DDL", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Listar: public Ui_Listar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTAR_H
