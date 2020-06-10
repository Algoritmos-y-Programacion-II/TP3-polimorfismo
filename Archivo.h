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

        // PRE: ruta es un string valido
        // POST:
        ArchivoLectura(string ruta);

        // PRE: El archivo fue abierto
        // POST: Cierra el archivo
        ~ArchivoLectura();

        // PRE: El archivo fue abierto
        // POST: Cierra el archivo
        void cerrarArchivo();

        // PRE: El archivo fue abierto, el dato a leer debe ser un caracter
        // POST: Lee un dato del archivo como caracter y lo devuelve
        char leerCaracter();

        // PRE: El archivo fue abierto, el dato a leer debe ser un numero
        // POST: Lee un dato del archivo como double y lo devuelve
        double leerReal();

        // PRE: -
        // POST: Devuelve true si el archivo esta abierto correctamente
        bool abierto();

        // PRE: El archivo fue abierto
        // POST: Devuelve true si se llego al final del archivo
        bool finalArchivo();

        // PRE: ruta es un string valido
        // POST: Devuelve true si el archivo existe
        bool existe(string ruta);

        // PRE: La lista es válida
        // POST: Carga los datos del archivo en la lista
        void cargarDatos(Lista<Dato> &lista);
};


#endif //TRABAJOPRACTICO3FIGURAS_ARCHIVO_H
