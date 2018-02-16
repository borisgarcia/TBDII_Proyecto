#include "listar.h"
#include "ui_listar.h"

#include <QSqlQuery>
#include <qsqlerror.h>

Listar::Listar(QWidget *parent,QString cs) :
    QMainWindow(parent),
    ui(new Ui::Listar)
{
    ui->setupUi(this);
    f = new Funciones();
    /*QStringList list=(QStringList()<<"Tablas"<<"Views"<<"Triggers"<<"Procedimientos"<<"Funciones");
    ui->comboBox->addItems(list);*/
    this->cs = cs;
}

Listar::~Listar()
{
    delete ui;
}

void Listar::on_btnBuscar_clicked()
{



}
