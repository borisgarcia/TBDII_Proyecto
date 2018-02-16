#ifndef MENUPRINCIPAL_H
#define MENUPRINCIPAL_H

#include "funciones.h"

#include <QMainWindow>
#include <qlabel.h>
#include <qtreewidget.h>

namespace Ui {
class MenuPrincipal;
}

class MenuPrincipal : public QMainWindow
{
    Q_OBJECT

public:
    explicit MenuPrincipal(QWidget *parent = 0,QString cs = 0,QString dbn = 0);
    ~MenuPrincipal();
    Funciones * f;
    QString s;
    void AddRoot();
    Ui::MenuPrincipal *ui;
    QString cs;
    QString dbn;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_btnCrear_clicked();

    void on_btnListar_clicked();


    void on_pushButton_3_clicked();

    void on_btnCrear_2_clicked();

private:

};

#endif // MENUPRINCIPAL_H
