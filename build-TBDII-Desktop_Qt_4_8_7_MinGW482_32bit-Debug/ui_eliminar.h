/********************************************************************************
** Form generated from reading UI file 'eliminar.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELIMINAR_H
#define UI_ELIMINAR_H

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

class Ui_eliminar
{
public:
    QLabel *label_2;
    QPushButton *btnBuscar;
    QLabel *label;
    QComboBox *comboBox;
    QLineEdit *txtBuscar;
    QLabel *label_3;

    void setupUi(QWidget *eliminar)
    {
        if (eliminar->objectName().isEmpty())
            eliminar->setObjectName(QString::fromUtf8("eliminar"));
        eliminar->resize(326, 165);
        label_2 = new QLabel(eliminar);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 10, 71, 31));
        QFont font;
        font.setPointSize(14);
        label_2->setFont(font);
        label_2->setTextFormat(Qt::PlainText);
        btnBuscar = new QPushButton(eliminar);
        btnBuscar->setObjectName(QString::fromUtf8("btnBuscar"));
        btnBuscar->setGeometry(QRect(230, 110, 81, 31));
        label = new QLabel(eliminar);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 70, 41, 31));
        label->setFont(font);
        label->setTextFormat(Qt::PlainText);
        comboBox = new QComboBox(eliminar);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(80, 60, 131, 31));
        txtBuscar = new QLineEdit(eliminar);
        txtBuscar->setObjectName(QString::fromUtf8("txtBuscar"));
        txtBuscar->setGeometry(QRect(80, 110, 131, 31));
        QFont font1;
        font1.setPointSize(11);
        txtBuscar->setFont(font1);
        label_3 = new QLabel(eliminar);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 110, 71, 31));
        label_3->setFont(font);
        label_3->setTextFormat(Qt::PlainText);

        retranslateUi(eliminar);

        QMetaObject::connectSlotsByName(eliminar);
    } // setupUi

    void retranslateUi(QWidget *eliminar)
    {
        eliminar->setWindowTitle(QApplication::translate("eliminar", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("eliminar", "Eliminar", 0, QApplication::UnicodeUTF8));
        btnBuscar->setText(QApplication::translate("eliminar", "Eliminar", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("eliminar", "Elija", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("eliminar", "Nombre", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class eliminar: public Ui_eliminar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELIMINAR_H
