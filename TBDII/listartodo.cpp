#include "funciones.h"
#include "listartodo.h"
#include "ui_listartodo.h"

#include <qsqlquery.h>

ListarTodo::ListarTodo(QWidget *parent,QString cs,QString dbn) :
    QMainWindow(parent),
    ui(new Ui::ListarTodo)
{
    ui->setupUi(this);
    QStringList list=(QStringList()<<"Tablas"<<"Views"<<"Triggers"<<"Procedimientos"<<"Funciones");
    ui->comboBox->addItems(list);
    ui->comboBox_2->addItems(list);
    f = new Funciones();
    this->cs = cs;
    this->dbn = dbn;

}

ListarTodo::~ListarTodo()
{
    delete ui;
}

void ListarTodo::on_btnBuscar_clicked()
{
    f->Conexion2(cs);
    QString c;
    if(ui->comboBox->currentText()=="Tablas")
        c = "U";
    else if(ui->comboBox->currentText()=="Views")
        c = "V";
    else if(ui->comboBox->currentText()=="Fuciones")
        c = "XP";
    else if(ui->comboBox->currentText()=="Procedimientos")
        c = "P";
    else if(ui->comboBox->currentText()=="Triggers")
        c = "TR";

    int cont = 0;

    QSqlQuery query;
    QString data;

    query.exec("SELECT * FROM sysobjects so WHERE type = '"+c+"'");

    query.next();
    while(query.value(cont).toString()!=NULL)
    {
         ui->tableWidget->insertColumn(ui->tableWidget->columnCount());
         cont++;
    }

    query.exec("SELECT * FROM sysobjects so WHERE type = '"+c+"'");

    while (query.next()) {
        cont = 0;
        ui->tableWidget->insertRow(ui->tableWidget->rowCount());
        while(query.value(cont).toString()!=NULL)
        {
            QTableWidgetItem *q = new QTableWidgetItem();
            data = query.value(cont).toString();
            q->setText(data);
            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,cont,q);
            cont++;
        }
    }
}

void ListarTodo::on_btnBuscar_2_clicked()
{
    f->Conexion2(cs);
    int cont = 0;
    QSqlQuery query;
    QString data;

    query.exec("SELECT * FROM "+ui->txtBuscar->text());
    query.next();
    while(query.value(cont).toString()!=NULL)
    {
         ui->tableWidget_2->insertColumn(ui->tableWidget_2->columnCount());
         cont++;
    }

    query.exec("SELECT * FROM "+ui->txtBuscar->text());

    while (query.next()) {
        cont = 0;
        ui->tableWidget_2->insertRow(ui->tableWidget_2->rowCount());
        while(query.value(cont).toString()!=NULL)
        {
            QTableWidgetItem *q = new QTableWidgetItem();
            data = query.value(cont).toString();
            q->setText(data);
            ui->tableWidget_2->setItem(ui->tableWidget_2->rowCount()-1,cont,q);
            cont++;
        }
    }
    f->CerrarConexion();
}

void ListarTodo::on_btnBuscar_3_clicked()
{
    f->Conexion2(cs);

    QSqlQuery query;
    QString data;


    f->CerrarConexion();
}

void ListarTodo::on_btnBuscar_4_clicked()
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

    QString qry = "drop " + c + " " + ui->txtBuscar_3->text();
    QSqlQuery query;
    query.exec("use " + dbn);
    query.exec(qry);
}
