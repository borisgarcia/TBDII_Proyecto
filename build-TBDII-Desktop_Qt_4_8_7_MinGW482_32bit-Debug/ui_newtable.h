/********************************************************************************
** Form generated from reading UI file 'newtable.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWTABLE_H
#define UI_NEWTABLE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewTable
{
public:
    QWidget *centralwidget;
    QLabel *label_8;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox_2;
    QLabel *label_9;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_10;
    QCheckBox *ckbPK;
    QLabel *label_2;
    QLineEdit *txtNombre;
    QLabel *label_3;
    QComboBox *cbTipoDato;
    QLabel *label_4;
    QSpinBox *spTamano;
    QLabel *label_5;
    QCheckBox *ckbNulo;
    QLabel *label_6;
    QLineEdit *txtDefault;
    QPushButton *pushButton_4;
    QTableWidget *tableWidget;
    QWidget *tab_2;
    QTextEdit *textEdit;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *NewTable)
    {
        if (NewTable->objectName().isEmpty())
            NewTable->setObjectName(QString::fromUtf8("NewTable"));
        NewTable->resize(683, 436);
        centralwidget = new QWidget(NewTable);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 15, 141, 31));
        QFont font;
        font.setPointSize(11);
        label_8->setFont(font);
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(190, 20, 113, 20));
        comboBox_2 = new QComboBox(centralwidget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(550, 20, 111, 22));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(480, 15, 71, 31));
        label_9->setFont(font);
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(20, 60, 641, 311));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label_10 = new QLabel(tab);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 0, 21, 31));
        label_10->setFont(font);
        ckbPK = new QCheckBox(tab);
        ckbPK->setObjectName(QString::fromUtf8("ckbPK"));
        ckbPK->setGeometry(QRect(20, 30, 16, 20));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 0, 61, 31));
        label_2->setFont(font);
        txtNombre = new QLineEdit(tab);
        txtNombre->setObjectName(QString::fromUtf8("txtNombre"));
        txtNombre->setGeometry(QRect(50, 30, 161, 20));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(240, 0, 91, 31));
        label_3->setFont(font);
        cbTipoDato = new QComboBox(tab);
        cbTipoDato->setObjectName(QString::fromUtf8("cbTipoDato"));
        cbTipoDato->setGeometry(QRect(240, 30, 91, 22));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(360, 0, 61, 31));
        label_4->setFont(font);
        spTamano = new QSpinBox(tab);
        spTamano->setObjectName(QString::fromUtf8("spTamano"));
        spTamano->setGeometry(QRect(370, 30, 31, 22));
        spTamano->setMinimum(1);
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(440, 0, 51, 31));
        label_5->setFont(font);
        ckbNulo = new QCheckBox(tab);
        ckbNulo->setObjectName(QString::fromUtf8("ckbNulo"));
        ckbNulo->setGeometry(QRect(460, 30, 16, 20));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(540, 0, 51, 31));
        label_6->setFont(font);
        txtDefault = new QLineEdit(tab);
        txtDefault->setObjectName(QString::fromUtf8("txtDefault"));
        txtDefault->setGeometry(QRect(520, 30, 91, 20));
        pushButton_4 = new QPushButton(tab);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(600, 70, 21, 23));
        QFont font1;
        font1.setPointSize(10);
        pushButton_4->setFont(font1);
        QIcon icon;
        icon.addFile(QString::fromUtf8("246221.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon);
        tableWidget = new QTableWidget(tab);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 101, 601, 171));
        tableWidget->setRowCount(0);
        tableWidget->setColumnCount(6);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        textEdit = new QTextEdit(tab_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 611, 261));
        tabWidget->addTab(tab_2, QString());
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(570, 380, 81, 23));
        pushButton_5->setFont(font1);
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(470, 380, 81, 23));
        pushButton_6->setFont(font1);
        NewTable->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(NewTable);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        NewTable->setStatusBar(statusbar);

        retranslateUi(NewTable);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(NewTable);
    } // setupUi

    void retranslateUi(QMainWindow *NewTable)
    {
        NewTable->setWindowTitle(QApplication::translate("NewTable", "Nueva Tabla", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("NewTable", "Nombre de la Tabla", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("NewTable", "Esquema", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("NewTable", "PK", 0, QApplication::UnicodeUTF8));
        ckbPK->setText(QString());
        label_2->setText(QApplication::translate("NewTable", "Nombre", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("NewTable", "Tipo de Dato", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("NewTable", "Tama\303\261o", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("NewTable", "No Nulo", 0, QApplication::UnicodeUTF8));
        ckbNulo->setText(QString());
        label_6->setText(QApplication::translate("NewTable", "Default", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("NewTable", "Campos", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("NewTable", "DDL", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("NewTable", "Crear", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("NewTable", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NewTable: public Ui_NewTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWTABLE_H
