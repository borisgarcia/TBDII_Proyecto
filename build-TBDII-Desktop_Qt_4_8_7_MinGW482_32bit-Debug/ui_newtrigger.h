/********************************************************************************
** Form generated from reading UI file 'newtrigger.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWTRIGGER_H
#define UI_NEWTRIGGER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewTrigger
{
public:
    QWidget *centralwidget;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox_2;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *NewTrigger)
    {
        if (NewTrigger->objectName().isEmpty())
            NewTrigger->setObjectName(QString::fromUtf8("NewTrigger"));
        NewTrigger->resize(341, 432);
        centralwidget = new QWidget(NewTrigger);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 5, 181, 31));
        QFont font;
        font.setPointSize(11);
        label_8->setFont(font);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 30, 71, 31));
        label_9->setFont(font);
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(200, 10, 113, 20));
        comboBox_2 = new QComboBox(centralwidget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(200, 40, 111, 22));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(20, 80, 291, 291));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(284, 390, 31, 23));
        NewTrigger->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(NewTrigger);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        NewTrigger->setStatusBar(statusbar);

        retranslateUi(NewTrigger);

        QMetaObject::connectSlotsByName(NewTrigger);
    } // setupUi

    void retranslateUi(QMainWindow *NewTrigger)
    {
        NewTrigger->setWindowTitle(QApplication::translate("NewTrigger", "MainWindow", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("NewTrigger", "Nombre del Trigger", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("NewTrigger", "Esquema", 0, QApplication::UnicodeUTF8));
        lineEdit_2->setText(QString());
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class NewTrigger: public Ui_NewTrigger {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWTRIGGER_H
