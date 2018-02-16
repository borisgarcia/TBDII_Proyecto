#ifndef CREARCONEXION_H
#define CREARCONEXION_H

#include <QMainWindow>
#include <qtextedit.h>
#include "funciones.h"
namespace Ui {
class CrearConexion;
}

class CrearConexion : public QMainWindow
{
    Q_OBJECT

public:
    explicit CrearConexion(QWidget *parent = 0);
    ~CrearConexion();
    Funciones * f;

    public:

private slots:
    void on_btnCrear_clicked();

    void on_btnCancelar_clicked();

    void on_btnProbar_clicked();

private:
    Ui::CrearConexion *ui;
};

#endif // CREARCONEXION_H
