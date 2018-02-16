#include "newtable.h"
#include "ui_newtable.h"

#include <QtSql/qsqldatabase.h>
#include <QtSql/qsqlquery.h>

#include <QSqlError>

NewTable::NewTable(QWidget *parent,QString cs,QString dbn) :
    QMainWindow(parent),
    ui(new Ui::NewTable)
{
    ui->setupUi(this);

    ui->tableWidget->setHorizontalHeaderLabels(QString("PK;Nombre;Tipo de Dato;Tamano;No Nulo;Default").split(";"));
    QStringList list=(QStringList()<<"varchar"<<"number"<<"date"<<"int"<<"float");
    ui->cbTipoDato->addItems(list);
    flag = false;
    rowc = 0;
    this->cs = cs;
    f = new Funciones();
    this->dbn = dbn;

}

NewTable::~NewTable()
{
    delete ui;
}

void NewTable::on_pushButton_6_clicked()
{
    this->close();
}


void NewTable::Create()
{

}

void NewTable::on_pushButton_5_clicked()
{
   f->Conexion2(cs);
   QSqlQuery query;
   if(ui->lineEdit_2->text()!="")
   {
       QString qry = "CREATE TABLE "+ui->lineEdit_2->text()+" (";
       QString pk;
       QString des;
       QString tipo;
       QString tam;
       QString def;
       QString noNulo;

       int row = ui->tableWidget->rowCount();

       for(int x = 0;x<row;x++)
       {
           pk = ui->tableWidget->item(x,0)->text();
           des = ui->tableWidget->item(x,1)->text();
           tipo = ui->tableWidget->item(x,2)->text();
           tam = ui->tableWidget->item(x,3)->text();
           noNulo = ui->tableWidget->item(x,4)->text();
           def = ui->tableWidget->item(x,5)->text();
           if(def != "")
           {
                def = "Default "+ def;
           }
           qry = qry + des + " " + tipo + "(" + tam + ")" + " "+def+ " " + noNulo + ",";

       }
       qry = qry + "CONSTRAINT " + pk +" PRIMARY KEY("+des+"))";
       QString qryB = "use " + dbn;
       query.exec(qry);
       for(int x = 0;x<row;x++)
       {
           ui->tableWidget->removeRow(x);
       }
   }
   else
   {
       msgBox.setText("Ingrese un nombre para la Tabla");
       msgBox.exec();
   }
}

void NewTable::on_pushButton_4_clicked()
{

        if(ui->txtNombre->text() != NULL)
        {
            ui->tableWidget->insertRow( ui->tableWidget->rowCount());
            QTableWidgetItem *q0 = new QTableWidgetItem();
            QTableWidgetItem *q1 = new QTableWidgetItem();
            QTableWidgetItem *q2 = new QTableWidgetItem();
            QTableWidgetItem *q3 = new QTableWidgetItem();
            QTableWidgetItem *q4 = new QTableWidgetItem();
            QTableWidgetItem *q5 = new QTableWidgetItem();

            QString text;
            QString text2;
            if(ui->ckbPK->isChecked())
            {
                if(!flag)
                {
                    text = ui->txtNombre->text();
                    flag = true;
                }
                else
                {
                    msgBox.setText("Solo puede tener una Primary Key");
                    msgBox.exec();
                }
            }
            q0->setText(text);
            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,0,q0);
            ui->ckbPK->setChecked(false);

            q1->setText(ui->txtNombre->text());
            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,1,q1);
            ui->txtNombre->setText("");

            q2->setText(ui->cbTipoDato->currentText());
            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,2,q2);

            q3->setText(QString::number(ui->spTamano->value()));
            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,3,q3);
            ui->spTamano->setValue(1);
            if(ui->ckbNulo->isChecked())
            {
                text2 = "NULL";
            }
            else
            {
                text2 = "NOT NULL";
            }
            ui->ckbNulo->setChecked(false);
            q4->setText(text2);
            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,4,q4);

            q5->setText(ui->txtDefault->text());
            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,5,q5);
            ui->txtDefault->setText("");
        }
        else
        {
            msgBox.setText("Ingrese un nombre para el campo");
            msgBox.exec();
        }
}

