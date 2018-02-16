#ifndef LISTARTODO_H
#define LISTARTODO_H

#include "funciones.h"

#include <QMainWindow>

namespace Ui {
class ListarTodo;
}

class ListarTodo : public QMainWindow
{
    Q_OBJECT

public:
    explicit ListarTodo(QWidget *parent = 0,QString cs = 0,QString dbn = 0);
    ~ListarTodo();
     Funciones * f;
     QString cs;
     QString dbn;

private slots:
    void on_btnBuscar_clicked();
    void on_btnBuscar_2_clicked();

    void on_btnBuscar_3_clicked();

    void on_btnBuscar_4_clicked();

private:
    Ui::ListarTodo *ui;
};

#endif // LISTARTODO_H
