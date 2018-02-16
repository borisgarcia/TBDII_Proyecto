#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <qmessagebox.h>
#include <qsqldatabase.h>


class Funciones
{
public:
    Funciones();
    bool Conexion(QString esquema, QString user, QString pass, QString hostname, QString puerto);
    void CerrarConexion();
    QSqlDatabase db;
    QMessageBox msgBoxF;
    QString connectString;
    void Conexion2(QString cs);
};

#endif // FUNCIONES_H
