
#include "crearconexion.h"
#include "eliminar.h"
#include "listartodo.h"
#include "menuprincipal.h"
#include "newprocedure.h"
#include "newtable.h"
#include "ui_menuprincipal.h"

#include <qsqlquery.h>

MenuPrincipal::MenuPrincipal(QWidget *parent, QString cs, QString dbn) :
    QMainWindow(parent),
    ui(new Ui::MenuPrincipal)
{
    ui->setupUi(this);
    f = new Funciones();
    /*ui->btnCrear->setStyleSheet("QPushButton{ background-image: url(:/new-file.png); }");
    ui->btnEliminar->setStyleSheet("QPushButton{ background-image: url(:/clipboards (1).png); }");
    ui->btnListar->setStyleSheet("QPushButton{ background-image: url(:/clipboards.png); }");
    ui->btnMod->setStyleSheet("QPushButton{ background-image: url(:/edit.png); }");*/
    this->cs = cs;
    this->dbn = dbn;
    AddRoot();
}

MenuPrincipal::~MenuPrincipal()
{
    delete ui;
}

void MenuPrincipal::AddRoot()
{
   f->Conexion2(cs);
   QTreeWidgetItem * tablas = new QTreeWidgetItem((ui->treeWidget));
   QTreeWidgetItem * funciones = new QTreeWidgetItem((ui->treeWidget));
   QTreeWidgetItem * vistas = new QTreeWidgetItem((ui->treeWidget));
   QTreeWidgetItem * triggers = new QTreeWidgetItem((ui->treeWidget));
   QTreeWidgetItem * procedimientos = new QTreeWidgetItem((ui->treeWidget));
   QTreeWidgetItem * indices = new QTreeWidgetItem((ui->treeWidget));
   QTreeWidgetItem * constraints = new QTreeWidgetItem((ui->treeWidget));

   tablas->setText(0,"Tablas");
   funciones->setText(0,"Funcione");
   vistas->setText(0,"Vistas");
   triggers->setText(0,"Triggers");
   procedimientos->setText(0,"Procedimientos");
   indices->setText(0,"Indices");
   constraints->setText(0,"Constraints");
   ui->treeWidget->addTopLevelItem(tablas);
   ui->treeWidget->addTopLevelItem(funciones);
   ui->treeWidget->addTopLevelItem(triggers);
   ui->treeWidget->addTopLevelItem(procedimientos);
   ui->treeWidget->addTopLevelItem(vistas);
   ui->treeWidget->addTopLevelItem(indices);
   ui->treeWidget->addTopLevelItem(constraints);

   QSqlQuery query;
   QSqlQuery query2;
   query.exec("SELECT name FROM sysobjects so WHERE type = 'U'");
   while (query.next())
   {
       QTreeWidgetItem * itm = new QTreeWidgetItem();
       itm->setText(0,query.value(0).toString());
       tablas->addChild(itm);
       query2.exec("SELECT syscolumns.name,syscolumns.length, systypes.name FROM sysobjects JOIN syscolumns ON sysobjects.id = syscolumns.id JOIN systypes ON systypes.usertype = syscolumns.usertype WHERE sysobjects.name LIKE '"+ query.value(0).toString()+"'");
       while (query2.next())
       {
            QTreeWidgetItem * itm2 = new QTreeWidgetItem();
            itm2->setText(0,query2.value(0).toString()+ " - "+query2.value(2).toString()+"("+query2.value(1).toString()+")");
            itm->addChild(itm2);
       }
   }
   query.exec("SELECT name FROM sysobjects so WHERE type = 'V'");
   while (query.next())
   {
       QTreeWidgetItem * itm = new QTreeWidgetItem();
       itm->setText(0,query.value(0).toString());
       vistas->addChild(itm);
   }
   query.exec("SELECT name FROM sysobjects so WHERE type = 'TR'");
   while (query.next())
   {
       QTreeWidgetItem * itm = new QTreeWidgetItem();
       itm->setText(0,query.value(0).toString());
       triggers->addChild(itm);
   }
   query.exec("SELECT name FROM sysobjects so WHERE type = 'P'");
   while (query.next())
   {
       QTreeWidgetItem * itm = new QTreeWidgetItem();
       itm->setText(0,query.value(0).toString());
       procedimientos->addChild(itm);
   }

   query.exec("select sysindexes.name as INDEX_NAME from sysobjects,sysindexes where sysobjects.type = 'U' and sysobjects.id = sysindexes.id and sysindexes.indid between 1 and 254");
   while (query.next())
   {
       QTreeWidgetItem * itm = new QTreeWidgetItem();
       itm->setText(0,query.value(0).toString());
       indices->addChild(itm);
   }
}

void MenuPrincipal::on_pushButton_clicked()
{
    CrearConexion * mp = new CrearConexion();
    mp->show();
    this->hide();
}

void MenuPrincipal::on_pushButton_2_clicked()
{
    ui->treeWidget->clear();
    AddRoot();
}

void MenuPrincipal::on_btnCrear_clicked()
{
    NewTable * mp = new NewTable(this,cs,this->dbn);
    mp->show();
    this->hide();
}

void MenuPrincipal::on_btnListar_clicked()
{
    ListarTodo * mp = new ListarTodo(this,cs);
    mp->show();
    this->hide();
}



void MenuPrincipal::on_pushButton_3_clicked()
{

    f->Conexion2(cs);
    int cont = 0;
    QSqlQuery query;
    QString data;

    query.exec(ui->textEdit->toPlainText());
    query.next();
    while(query.value(cont).toString()!=NULL)
    {
         ui->tableWidget->insertColumn(ui->tableWidget->columnCount());
         cont++;
    }

    query.exec(ui->textEdit->toPlainText());

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
    f->CerrarConexion();

}

void MenuPrincipal::on_btnCrear_2_clicked()
{
    NewProcedure * mp = new NewProcedure(this,cs);
    mp->show();
    this->hide();
}
