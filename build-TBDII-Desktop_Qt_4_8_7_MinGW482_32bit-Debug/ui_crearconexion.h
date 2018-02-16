/********************************************************************************
** Form generated from reading UI file 'crearconexion.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREARCONEXION_H
#define UI_CREARCONEXION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CrearConexion
{
public:
    QWidget *centralWidget;
    QLineEdit *txtContra;
    QPushButton *btnCrear;
    QLineEdit *txtNombreCon;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *label_4;
    QPushButton *btnCancelar;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *txtUsuario;
    QLineEdit *txtHostname;
    QLineEdit *txtPuerto;
    QPushButton *btnProbar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CrearConexion)
    {
        if (CrearConexion->objectName().isEmpty())
            CrearConexion->setObjectName(QString::fromUtf8("CrearConexion"));
        CrearConexion->resize(328, 317);
        centralWidget = new QWidget(CrearConexion);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        txtContra = new QLineEdit(centralWidget);
        txtContra->setObjectName(QString::fromUtf8("txtContra"));
        txtContra->setEnabled(true);
        txtContra->setGeometry(QRect(200, 130, 111, 20));
        txtContra->setEchoMode(QLineEdit::Password);
        btnCrear = new QPushButton(centralWidget);
        btnCrear->setObjectName(QString::fromUtf8("btnCrear"));
        btnCrear->setGeometry(QRect(210, 250, 75, 23));
        QFont font;
        font.setPointSize(10);
        btnCrear->setFont(font);
        txtNombreCon = new QLineEdit(centralWidget);
        txtNombreCon->setObjectName(QString::fromUtf8("txtNombreCon"));
        txtNombreCon->setGeometry(QRect(200, 60, 111, 20));
        txtNombreCon->setEchoMode(QLineEdit::Normal);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 200, 171, 31));
        QFont font1;
        font1.setPointSize(12);
        label_5->setFont(font1);
        label_5->setLayoutDirection(Qt::LeftToRight);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 10, 341, 31));
        label_6->setFont(font1);
        label_6->setLayoutDirection(Qt::LeftToRight);
        label_6->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 90, 171, 31));
        label_2->setFont(font1);
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 160, 171, 31));
        label_4->setFont(font1);
        label_4->setLayoutDirection(Qt::LeftToRight);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        btnCancelar = new QPushButton(centralWidget);
        btnCancelar->setObjectName(QString::fromUtf8("btnCancelar"));
        btnCancelar->setGeometry(QRect(50, 250, 71, 23));
        btnCancelar->setFont(font);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 55, 171, 31));
        label->setFont(font1);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 125, 171, 31));
        label_3->setFont(font1);
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        txtUsuario = new QLineEdit(centralWidget);
        txtUsuario->setObjectName(QString::fromUtf8("txtUsuario"));
        txtUsuario->setGeometry(QRect(200, 95, 111, 20));
        txtHostname = new QLineEdit(centralWidget);
        txtHostname->setObjectName(QString::fromUtf8("txtHostname"));
        txtHostname->setEnabled(true);
        txtHostname->setGeometry(QRect(200, 165, 111, 20));
        txtPuerto = new QLineEdit(centralWidget);
        txtPuerto->setObjectName(QString::fromUtf8("txtPuerto"));
        txtPuerto->setEnabled(true);
        txtPuerto->setGeometry(QRect(200, 200, 111, 20));
        btnProbar = new QPushButton(centralWidget);
        btnProbar->setObjectName(QString::fromUtf8("btnProbar"));
        btnProbar->setGeometry(QRect(130, 250, 71, 23));
        btnProbar->setFont(font);
        CrearConexion->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(CrearConexion);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        CrearConexion->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CrearConexion);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        CrearConexion->setStatusBar(statusBar);

        retranslateUi(CrearConexion);

        QMetaObject::connectSlotsByName(CrearConexion);
    } // setupUi

    void retranslateUi(QMainWindow *CrearConexion)
    {
        CrearConexion->setWindowTitle(QApplication::translate("CrearConexion", "CrearConexion", 0, QApplication::UnicodeUTF8));
        txtContra->setText(QApplication::translate("CrearConexion", "Hola123", 0, QApplication::UnicodeUTF8));
        txtContra->setPlaceholderText(QString());
        btnCrear->setText(QApplication::translate("CrearConexion", "Conectar", 0, QApplication::UnicodeUTF8));
        txtNombreCon->setText(QApplication::translate("CrearConexion", "master", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CrearConexion", "Puerto", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CrearConexion", "Crear una nueva conexion", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CrearConexion", "Usuario", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CrearConexion", "Hostname", 0, QApplication::UnicodeUTF8));
        btnCancelar->setText(QApplication::translate("CrearConexion", "Cancelar", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CrearConexion", "Base de Datos", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CrearConexion", "Contrase\303\261a", 0, QApplication::UnicodeUTF8));
        txtUsuario->setText(QApplication::translate("CrearConexion", "sa", 0, QApplication::UnicodeUTF8));
        txtHostname->setInputMask(QString());
        txtHostname->setText(QApplication::translate("CrearConexion", "DESKTOP-1FBKKMK", 0, QApplication::UnicodeUTF8));
        txtPuerto->setText(QApplication::translate("CrearConexion", "5000", 0, QApplication::UnicodeUTF8));
        btnProbar->setText(QApplication::translate("CrearConexion", "Probar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CrearConexion: public Ui_CrearConexion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREARCONEXION_H
