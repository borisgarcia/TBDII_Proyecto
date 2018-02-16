#ifndef NEWTABLE_H
#define NEWTABLE_H

#include <QMainWindow>
#include <funciones.h>


namespace Ui {
class NewTable;
}

class NewTable : public QMainWindow
{
    Q_OBJECT

public:
    explicit NewTable(QWidget *parent = 0,QString cs = 0,QString dbn=0);
    ~NewTable();
    int rowc;
    QMessageBox msgBox;
    void Create();
    bool flag;
    QString cs;
    Funciones * f;
    QString dbn;

private slots:
    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();
private:
    Ui::NewTable *ui;
};

#endif // NEWTABLE_H
