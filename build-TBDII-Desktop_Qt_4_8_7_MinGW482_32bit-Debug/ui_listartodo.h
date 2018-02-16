/********************************************************************************
** Form generated from reading UI file 'listartodo.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTARTODO_H
#define UI_LISTARTODO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListarTodo
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QTableWidget *tableWidget;
    QComboBox *comboBox;
    QLabel *label;
    QPushButton *btnBuscar;
    QLabel *label_2;
    QWidget *tab;
    QLabel *label_3;
    QPushButton *btnBuscar_2;
    QLabel *label_4;
    QLineEdit *txtBuscar;
    QTableWidget *tableWidget_2;
    QPushButton *btnBuscar_3;
    QLabel *label_5;
    QLineEdit *txtBuscar_2;
    QWidget *tab_3;
    QLabel *label_6;
    QLabel *label_7;
    QComboBox *comboBox_2;
    QPushButton *btnBuscar_4;
    QLabel *label_8;
    QLineEdit *txtBuscar_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ListarTodo)
    {
        if (ListarTodo->objectName().isEmpty())
            ListarTodo->setObjectName(QString::fromUtf8("ListarTodo"));
        ListarTodo->resize(612, 423);
        centralwidget = new QWidget(ListarTodo);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 591, 391));
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tableWidget = new QTableWidget(tab_2);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 120, 561, 231));
        comboBox = new QComboBox(tab_2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(100, 60, 131, 31));
        label = new QLabel(tab_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 60, 41, 31));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setTextFormat(Qt::PlainText);
        btnBuscar = new QPushButton(tab_2);
        btnBuscar->setObjectName(QString::fromUtf8("btnBuscar"));
        btnBuscar->setGeometry(QRect(260, 60, 81, 31));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(220, 10, 101, 31));
        label_2->setFont(font);
        label_2->setTextFormat(Qt::PlainText);
        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 50, 71, 31));
        label_3->setFont(font);
        label_3->setTextFormat(Qt::PlainText);
        btnBuscar_2 = new QPushButton(tab);
        btnBuscar_2->setObjectName(QString::fromUtf8("btnBuscar_2"));
        btnBuscar_2->setGeometry(QRect(470, 50, 81, 31));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(240, 10, 111, 31));
        label_4->setFont(font);
        label_4->setTextFormat(Qt::PlainText);
        txtBuscar = new QLineEdit(tab);
        txtBuscar->setObjectName(QString::fromUtf8("txtBuscar"));
        txtBuscar->setGeometry(QRect(100, 50, 261, 31));
        QFont font1;
        font1.setPointSize(11);
        txtBuscar->setFont(font1);
        tableWidget_2 = new QTableWidget(tab);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(10, 100, 561, 201));
        btnBuscar_3 = new QPushButton(tab);
        btnBuscar_3->setObjectName(QString::fromUtf8("btnBuscar_3"));
        btnBuscar_3->setGeometry(QRect(160, 320, 81, 31));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 320, 71, 31));
        label_5->setFont(font);
        label_5->setTextFormat(Qt::PlainText);
        txtBuscar_2 = new QLineEdit(tab);
        txtBuscar_2->setObjectName(QString::fromUtf8("txtBuscar_2"));
        txtBuscar_2->setGeometry(QRect(50, 320, 91, 31));
        txtBuscar_2->setFont(font1);
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 70, 41, 31));
        label_6->setFont(font);
        label_6->setTextFormat(Qt::PlainText);
        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(250, 10, 71, 31));
        label_7->setFont(font);
        label_7->setTextFormat(Qt::PlainText);
        comboBox_2 = new QComboBox(tab_3);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(100, 70, 131, 31));
        btnBuscar_4 = new QPushButton(tab_3);
        btnBuscar_4->setObjectName(QString::fromUtf8("btnBuscar_4"));
        btnBuscar_4->setGeometry(QRect(250, 110, 81, 31));
        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 110, 71, 31));
        label_8->setFont(font);
        label_8->setTextFormat(Qt::PlainText);
        txtBuscar_3 = new QLineEdit(tab_3);
        txtBuscar_3->setObjectName(QString::fromUtf8("txtBuscar_3"));
        txtBuscar_3->setGeometry(QRect(100, 110, 131, 31));
        txtBuscar_3->setFont(font1);
        tabWidget->addTab(tab_3, QString());
        ListarTodo->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(ListarTodo);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ListarTodo->setStatusBar(statusbar);

        retranslateUi(ListarTodo);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(ListarTodo);
    } // setupUi

    void retranslateUi(QMainWindow *ListarTodo)
    {
        ListarTodo->setWindowTitle(QApplication::translate("ListarTodo", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ListarTodo", "Elija", 0, QApplication::UnicodeUTF8));
        btnBuscar->setText(QApplication::translate("ListarTodo", "Buscar", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ListarTodo", "Listar Todo", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ListarTodo", "Listar Todo", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ListarTodo", "Nombre", 0, QApplication::UnicodeUTF8));
        btnBuscar_2->setText(QApplication::translate("ListarTodo", "Buscar", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ListarTodo", "Listar Tabla", 0, QApplication::UnicodeUTF8));
        btnBuscar_3->setText(QApplication::translate("ListarTodo", "Eliminar", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ListarTodo", "Id", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ListarTodo", "Ver Datos Tabla", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ListarTodo", "Elija", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ListarTodo", "Eliminar", 0, QApplication::UnicodeUTF8));
        btnBuscar_4->setText(QApplication::translate("ListarTodo", "Eliminar", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("ListarTodo", "Nombre", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("ListarTodo", "Eliminar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ListarTodo: public Ui_ListarTodo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTARTODO_H
