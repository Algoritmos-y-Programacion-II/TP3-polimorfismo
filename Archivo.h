//
// Created by valentina on 9/6/20.
//

#ifndef TRABAJOPRACTICO3FIGURAS_ARCHIVO_H
#define TRABAJOPRACTICO3FIGURAS_ARCHIVO_H

#include <fstream>
#include "Lista.h"

using namespace std;

typedef Figura* Dato;

class ArchivoLectura {

    private:
        ifstream archivo;

    public:
        ArchivoLectura(string ruta);
        ~ArchivoLectura();
        void cerrarArchivo();
        char leerCaracter();
        double leerReal();
        bool abierto();
        bool finalArchivo();
        bool existe(string ruta);
        void cargarDatos(Lista<Dato> &lista);

};


#endif //TRABAJOPRACTICO3FIGURAS_ARCHIVO_H
