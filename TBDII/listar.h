#ifndef LISTAR_H
#define LISTAR_H

#include <QMainWindow>
#include "funciones.h"

namespace Ui {
class Listar;
}

class Listar : public QMainWindow
{
    Q_OBJECT

public:
    explicit Listar(QWidget *parent = 0,QString cs = 0);
    ~Listar();
     Funciones * f;
     QString cs;
private slots:
    void on_btnBuscar_clicked();

private:
    Ui::Listar *ui;
};

#endif // LISTAR_H
