#include "crearconexion.h"
#include "menuprincipal.h"
#include "newtable.h"
#include "ui_crearconexion.h"

#include <QMessageBox>
#include <ui_newtable.h>

CrearConexion::CrearConexion(QWidget * parent) :
    QMainWindow(parent),
    ui(new Ui::CrearConexion)
{
    ui->setupUi(this);
    f = new Funciones();
}

CrearConexion::~CrearConexion()
{
    delete ui;

}

void CrearConexion::on_btnCrear_clicked()
{
    if(f->Conexion(ui->txtNombreCon->text(),ui->txtUsuario->text(),ui->txtContra->text(),ui->txtHostname->text(),ui->txtPuerto->text()))
    {
        MenuPrincipal * mp = new MenuPrincipal(this,f->connectString,ui->txtNombreCon->text());
        mp->show();
        this->hide();
    }
}

void CrearConexion::on_btnCancelar_clicked()
{
    this->close();

}

void CrearConexion::on_btnProbar_clicked()
{
    if(f->Conexion(ui->txtNombreCon->text(),ui->txtUsuario->text(),ui->txtContra->text(),ui->txtHostname->text(),ui->txtPuerto->text()))
    {
        f->msgBoxF.setText("Conectado Correctamente");
        f->msgBoxF.exec();
        f->CerrarConexion();
    }
}


