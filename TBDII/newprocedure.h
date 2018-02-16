#ifndef NEWPROCEDURE_H
#define NEWPROCEDURE_H

#include "funciones.h"

#include <QMainWindow>

namespace Ui {
class NewProcedure;
}

class NewProcedure : public QMainWindow
{
    Q_OBJECT

public:
    explicit NewProcedure(QWidget *parent = 0,QString cs = 0,QString dbn = 0);
    ~NewProcedure();
    QString cs;
    Funciones * f;
    QString dbn;

private slots:
    void on_pushButton_7_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::NewProcedure *ui;
};

#endif // NEWPROCEDURE_H
