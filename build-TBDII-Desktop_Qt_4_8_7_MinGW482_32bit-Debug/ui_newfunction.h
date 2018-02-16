/********************************************************************************
** Form generated from reading UI file 'newfunction.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWFUNCTION_H
#define UI_NEWFUNCTION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewFunction
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *NewFunction)
    {
        if (NewFunction->objectName().isEmpty())
            NewFunction->setObjectName(QString::fromUtf8("NewFunction"));
        NewFunction->resize(590, 511);
        centralwidget = new QWidget(NewFunction);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        NewFunction->setCentralWidget(centralwidget);
        menubar = new QMenuBar(NewFunction);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 590, 21));
        NewFunction->setMenuBar(menubar);
        statusbar = new QStatusBar(NewFunction);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        NewFunction->setStatusBar(statusbar);

        retranslateUi(NewFunction);

        QMetaObject::connectSlotsByName(NewFunction);
    } // setupUi

    void retranslateUi(QMainWindow *NewFunction)
    {
        NewFunction->setWindowTitle(QApplication::translate("NewFunction", "Nueva Funcion", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NewFunction: public Ui_NewFunction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWFUNCTION_H
