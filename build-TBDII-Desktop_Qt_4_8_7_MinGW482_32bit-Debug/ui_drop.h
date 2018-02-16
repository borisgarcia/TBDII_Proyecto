/********************************************************************************
** Form generated from reading UI file 'drop.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DROP_H
#define UI_DROP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Drop
{
public:
    QLabel *label_2;
    QPushButton *btnBuscar;
    QLabel *label;
    QComboBox *comboBox;
    QLineEdit *txtBuscar;
    QLabel *label_3;

    void setupUi(QWidget *Drop)
    {
        if (Drop->objectName().isEmpty())
            Drop->setObjectName(QString::fromUtf8("Drop"));
        Drop->resize(322, 159);
        label_2 = new QLabel(Drop);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 10, 71, 31));
        QFont font;
        font.setPointSize(14);
        label_2->setFont(font);
        label_2->setTextFormat(Qt::PlainText);
        btnBuscar = new QPushButton(Drop);
        btnBuscar->setObjectName(QString::fromUtf8("btnBuscar"));
        btnBuscar->setGeometry(QRect(230, 110, 81, 31));
        label = new QLabel(Drop);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 60, 41, 31));
        label->setFont(font);
        label->setTextFormat(Qt::PlainText);
        comboBox = new QComboBox(Drop);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(80, 60, 131, 31));
        txtBuscar = new QLineEdit(Drop);
        txtBuscar->setObjectName(QString::fromUtf8("txtBuscar"));
        txtBuscar->setGeometry(QRect(80, 110, 131, 31));
        QFont font1;
        font1.setPointSize(11);
        txtBuscar->setFont(font1);
        label_3 = new QLabel(Drop);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 110, 71, 31));
        label_3->setFont(font);
        label_3->setTextFormat(Qt::PlainText);

        retranslateUi(Drop);

        QMetaObject::connectSlotsByName(Drop);
    } // setupUi

    void retranslateUi(QWidget *Drop)
    {
        Drop->setWindowTitle(QApplication::translate("Drop", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Drop", "Eliminar", 0, QApplication::UnicodeUTF8));
        btnBuscar->setText(QApplication::translate("Drop", "Eliminar", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Drop", "Elija", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Drop", "Nombre", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Drop: public Ui_Drop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DROP_H
