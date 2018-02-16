#ifndef ELIMINAR_H
#define ELIMINAR_H

#include "funciones.h"

#include <QWidget>

namespace Ui {
class eliminar;
}

class eliminar : public QWidget
{
    Q_OBJECT

public:
    explicit eliminar(QWidget *parent = 0,QString cs=0);
    ~eliminar();
    Funciones * f;
    QString cs;
private slots:
    void on_btnBuscar_clicked();

private:
    Ui::eliminar *ui;
};

#endif // ELIMINAR_H
