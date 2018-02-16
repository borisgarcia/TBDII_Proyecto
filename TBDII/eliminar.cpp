#include "eliminar.h"
#include "funciones.h"
#include "ui_eliminar.h"

eliminar::eliminar(QWidget *parent,QString cs) :
    QWidget(parent),
    ui(new Ui::eliminar)
{
    ui->setupUi(this);
    f = new Funciones();
    QStringList list=(QStringList()<<"Tablas"<<"Views"<<"Triggers"<<"Procedimientos"<<"Funciones");
    ui->comboBox->addItems(list);
    this->cs = cs;
}

eliminar::~eliminar()
{
    delete ui;
}

void eliminar::on_btnBuscar_clicked()
{
    f->Conexion2(cs);
    QString c;
    if(ui->comboBox->currentText()=="Tablas")
        c = "table";
    else if(ui->comboBox->currentText()=="Views")
        c = "view";
    else if(ui->comboBox->currentText()=="Funciones")
        c = "function";
    else if(ui->comboBox->currentText()=="Procedimientos")
        c = "procedure";
    else if(ui->comboBox->currentText()=="Triggers")
        c = "trigger";
}
