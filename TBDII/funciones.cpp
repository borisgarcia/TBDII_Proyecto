#include "funciones.h"

#include <QSqlDatabase>
#include <QSqlError>

Funciones::Funciones()
{
    db = QSqlDatabase::addDatabase("QODBC3");
}

bool Funciones::Conexion(QString e, QString u, QString p, QString hn, QString port)
{
    connectString = "Driver={Adaptive Server Enterprise};";
        connectString.append("Server="+hn+";");
        connectString.append("Port="+port+";");
        connectString.append("Database="+e+";");
        connectString.append("Uid="+u+";");
        connectString.append("Pwd="+p+";");
    db.setDatabaseName(connectString);

    bool ok = db.open();

    QSqlError a = db.lastError();
    QString x = a.text();
    if(!ok)
    {
         msgBoxF.setText(x);
         msgBoxF.exec();
         return false;
    }
    return true;
}

void Funciones::Conexion2(QString cs)
{
    db.setDatabaseName(cs);
    bool ok = db.open();
}
void Funciones::CerrarConexion()
{
    db.close();
}

