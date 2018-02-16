#include "funciones.h"
#include "newprocedure.h"
#include "ui_newprocedure.h"

#include <qsqlquery.h>

NewProcedure::NewProcedure(QWidget *parent,QString cs, QString dbn) :
    QMainWindow(parent),
    ui(new Ui::NewProcedure)
{
    ui->setupUi(this);
    this->cs = cs;
    f = new Funciones();
    this->dbn = dbn;
    QStringList list=(QStringList()<<"Funcion"<<"Procedimiento"<<"Trigger"<<"View");
    ui->comboBox->addItems(list);
}

NewProcedure::~NewProcedure()
{
    delete ui;
}

void NewProcedure::on_pushButton_7_clicked()
{
    if(ui->lineEdit_2->text()!="")
    {
        if(ui->comboBox->currentText()=="Funcion")
        {
            ui->textEdit->setText("CREATE FUNCTION " + ui->lineEdit_2->text() +
            "( [ sql_parameter_name sql_datatype [( length)| (precision[, scale ]) ]"
            "[ [, sql_parameter_name sql_datatype [( length )| ( precision[, scale ]) ]]"
            "... ] ] )"
            "returns sql_datatype [ ( length)| (precision[, scale ]) ]"
            "[modifies sql data]"
            "[returns null on null input | called on null input])");
        }
        else if(ui->comboBox->currentText()=="Procedimiento")
        {
            ui->textEdit->setText("CREATE PROCEDURE " + ui->lineEdit_2->text() +
                            "[[(]@ parameter_name "
                            "datatype [( length) | ( precision [, scale])] "
                            "[= default][output] "
                            "[, @ parameter_name "
                            "datatype [( length) | ( precision [, scale])] "
                            "[= default][output]]...[)]] "
                            "[with {recompile | execute as {owner | caller}}] "
                            "as {SQL_statements | external name dll_name}");
        }
        else if(ui->comboBox->currentText()=="Trigger")
        {
            ui->textEdit->setText("CREATE TRIGGER " + ui->lineEdit_2->text() +
                                  "ON [owner.]table_name"
                                  "{FOR {INSERT , UPDATE} | INSTEAD OF {INSERT, UPDATE, DELETE}}"
                                    "[order integer]"
                                    "[AS"
                                      "[IF UPDATE (column_name)"
                                        "[{AND | OR} UPDATE (column_name)]...]"
                                          "SQL_statements"
                                      "[IF UPDATE (column_name)"
                                        "[{AND | OR} UPDATE (column_name)]..."
                                          "SQL_statements]...]");
        }
        if(ui->comboBox->currentText()=="View")
        {
            ui->textEdit->setText("CREATE VIEW " + ui->lineEdit_2->text() + " AS SELECT * FROM");
        }
    }

}


void NewProcedure::on_pushButton_5_clicked()
{
    f->Conexion2(cs);
    QSqlQuery query;
    query.exec("use " + this->dbn);
    query.exec(ui->textEdit->toPlainText());
    ui->textEdit->setText("");
    ui->lineEdit_2->setText("");

}

void NewProcedure::on_pushButton_6_clicked()
{
    this->hide();
}
