#include "drop.h"
#include "ui_drop.h"

Drop::Drop(QWidget *parent,QString cs) :
    QWidget(parent),
    ui(new Ui::Drop)
{
    ui->setupUi(this);
    f = new Funciones();
    QStringList list=(QStringList()<<"Tablas"<<"Views"<<"Triggers"<<"Procedimientos"<<"Funciones");
    ui->comboBox->addItems(list);
    this->cs = cs;
}

Drop::~Drop()
{
    delete ui;
}

void del::on_btnBuscar_clicked()
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
