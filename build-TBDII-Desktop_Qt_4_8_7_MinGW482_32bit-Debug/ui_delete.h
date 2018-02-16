/********************************************************************************
** Form generated from reading UI file 'delete.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETE_H
#define UI_DELETE_H

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

class Ui_Delete
{
public:
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox;
    QPushButton *btnBuscar;
    QLabel *label_3;
    QLineEdit *txtBuscar;

    void setupUi(QWidget *Delete)
    {
        if (Delete->objectName().isEmpty())
            Delete->setObjectName(QString::fromUtf8("Delete"));
        Delete->resize(339, 180);
        label = new QLabel(Delete);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 70, 41, 31));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setTextFormat(Qt::PlainText);
        label_2 = new QLabel(Delete);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 10, 101, 31));
        label_2->setFont(font);
        label_2->setTextFormat(Qt::PlainText);
        comboBox = new QComboBox(Delete);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(90, 60, 131, 31));
        btnBuscar = new QPushButton(Delete);
        btnBuscar->setObjectName(QString::fromUtf8("btnBuscar"));
        btnBuscar->setGeometry(QRect(240, 110, 81, 31));
        label_3 = new QLabel(Delete);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 110, 71, 31));
        label_3->setFont(font);
        label_3->setTextFormat(Qt::PlainText);
        txtBuscar = new QLineEdit(Delete);
        txtBuscar->setObjectName(QString::fromUtf8("txtBuscar"));
        txtBuscar->setGeometry(QRect(90, 110, 131, 31));
        QFont font1;
        font1.setPointSize(11);
        txtBuscar->setFont(font1);

        retranslateUi(Delete);

        QMetaObject::connectSlotsByName(Delete);
    } // setupUi

    void retranslateUi(QWidget *Delete)
    {
        Delete->setWindowTitle(QApplication::translate("Delete", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Delete", "Elija", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Delete", "Listar Todo", 0, QApplication::UnicodeUTF8));
        btnBuscar->setText(QApplication::translate("Delete", "Eliminar", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Delete", "Nombre", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Delete: public Ui_Delete {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETE_H
