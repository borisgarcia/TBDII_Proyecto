#include "crearconexion.h"
#include "listar.h"
#include "listartodo.h"
#include "menuprincipal.h"
#include "newprocedure.h"
#include "newtable.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CrearConexion nt;
    nt.show();
    return a.exec();
}
