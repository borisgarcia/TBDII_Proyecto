/********************************************************************************
** Form generated from reading UI file 'newprocedure.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWPROCEDURE_H
#define UI_NEWPROCEDURE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewProcedure
{
public:
    QWidget *centralwidget;
    QLabel *label_8;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QLineEdit *lineEdit_2;
    QGroupBox *groupBox;
    QTextEdit *textEdit;
    QPushButton *pushButton_7;
    QLabel *label_9;
    QComboBox *comboBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *NewProcedure)
    {
        if (NewProcedure->objectName().isEmpty())
            NewProcedure->setObjectName(QString::fromUtf8("NewProcedure"));
        NewProcedure->resize(433, 482);
        centralwidget = new QWidget(NewProcedure);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 10, 181, 31));
        QFont font;
        font.setPointSize(11);
        label_8->setFont(font);
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(230, 410, 81, 23));
        QFont font1;
        font1.setPointSize(10);
        pushButton_6->setFont(font1);
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(330, 410, 81, 23));
        pushButton_5->setFont(font1);
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(180, 20, 113, 20));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 90, 391, 281));
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 20, 371, 251));
        QFont font2;
        font2.setPointSize(12);
        textEdit->setFont(font2);
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(320, 50, 81, 23));
        pushButton_7->setFont(font1);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 40, 181, 31));
        label_9->setFont(font);
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(180, 50, 111, 22));
        NewProcedure->setCentralWidget(centralwidget);
        menubar = new QMenuBar(NewProcedure);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 433, 21));
        NewProcedure->setMenuBar(menubar);
        statusbar = new QStatusBar(NewProcedure);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        NewProcedure->setStatusBar(statusbar);

        retranslateUi(NewProcedure);

        QMetaObject::connectSlotsByName(NewProcedure);
    } // setupUi

    void retranslateUi(QMainWindow *NewProcedure)
    {
        NewProcedure->setWindowTitle(QApplication::translate("NewProcedure", "Nuevo Procedimiento", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("NewProcedure", "Nombre", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("NewProcedure", "Cancelar", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("NewProcedure", "Crear", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("NewProcedure", "DDL", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("NewProcedure", "Generar", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("NewProcedure", "Tipo", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NewProcedure: public Ui_NewProcedure {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWPROCEDURE_H
