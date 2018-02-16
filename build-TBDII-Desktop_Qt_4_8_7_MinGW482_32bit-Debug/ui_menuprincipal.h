/********************************************************************************
** Form generated from reading UI file 'menuprincipal.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUPRINCIPAL_H
#define UI_MENUPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuPrincipal
{
public:
    QWidget *centralwidget;
    QPushButton *btnCrear;
    QPushButton *btnListar;
    QLabel *label;
    QTreeWidget *treeWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTextEdit *textEdit;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QTableWidget *tableWidget;
    QPushButton *btnCrear_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MenuPrincipal)
    {
        if (MenuPrincipal->objectName().isEmpty())
            MenuPrincipal->setObjectName(QString::fromUtf8("MenuPrincipal"));
        MenuPrincipal->resize(666, 539);
        MenuPrincipal->setCursor(QCursor(Qt::ArrowCursor));
        MenuPrincipal->setWindowOpacity(1);
        MenuPrincipal->setAutoFillBackground(false);
        centralwidget = new QWidget(MenuPrincipal);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btnCrear = new QPushButton(centralwidget);
        btnCrear->setObjectName(QString::fromUtf8("btnCrear"));
        btnCrear->setGeometry(QRect(300, 50, 128, 31));
        btnCrear->setAutoFillBackground(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8("new.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCrear->setIcon(icon);
        btnCrear->setFlat(false);
        btnListar = new QPushButton(centralwidget);
        btnListar->setObjectName(QString::fromUtf8("btnListar"));
        btnListar->setGeometry(QRect(300, 90, 128, 31));
        btnListar->setAutoFillBackground(true);
        btnListar->setFlat(false);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(400, 10, 141, 31));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        treeWidget = new QTreeWidget(centralwidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(10, 20, 261, 461));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(190, 490, 75, 23));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 490, 75, 23));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(290, 190, 361, 141));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(290, 150, 141, 31));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(570, 150, 75, 23));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(290, 350, 361, 131));
        btnCrear_2 = new QPushButton(centralwidget);
        btnCrear_2->setObjectName(QString::fromUtf8("btnCrear_2"));
        btnCrear_2->setGeometry(QRect(460, 50, 128, 31));
        btnCrear_2->setAutoFillBackground(true);
        btnCrear_2->setIcon(icon);
        btnCrear_2->setFlat(false);
        MenuPrincipal->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MenuPrincipal);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MenuPrincipal->setStatusBar(statusbar);

        retranslateUi(MenuPrincipal);

        QMetaObject::connectSlotsByName(MenuPrincipal);
    } // setupUi

    void retranslateUi(QMainWindow *MenuPrincipal)
    {
        MenuPrincipal->setWindowTitle(QApplication::translate("MenuPrincipal", "Menu Principal", 0, QApplication::UnicodeUTF8));
        btnCrear->setText(QApplication::translate("MenuPrincipal", "Crear Tabla", 0, QApplication::UnicodeUTF8));
        btnListar->setText(QApplication::translate("MenuPrincipal", "Listar / Eliminar", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MenuPrincipal", "Menu Principal", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MenuPrincipal", "Salir", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MenuPrincipal", "Refrescar", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MenuPrincipal", "Sql Editor", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MenuPrincipal", "Correr", 0, QApplication::UnicodeUTF8));
        btnCrear_2->setText(QApplication::translate("MenuPrincipal", "Crear", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MenuPrincipal: public Ui_MenuPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUPRINCIPAL_H
