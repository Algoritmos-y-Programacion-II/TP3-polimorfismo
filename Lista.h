//
// Created by valentina on 26/5/20.
//

#ifndef TRABAJOPRACTICO3FIGURAS_LISTA_H
#define TRABAJOPRACTICO3FIGURAS_LISTA_H

#include <fstream>
#include "Nodo.h"

class Lista {

    // Atributos
    private:
        Nodo* primero;
        int elementos;

    // Metodos

    public:
        // Constructor
        Lista();

        // Destructor
        ~Lista();

        // Getters
        Dato obtenerDato(int posicion);
        int obtenerCantidadElementos();
        Dato obtenerMax();
        Dato obtenerMin();

        // Otros metodos
        void agregarEnPosicion(Dato datoOut, int posicion);
        void agregarAlPrincipio(Dato datoOut);
        void sacar(int posicion);
        bool vacia();
        void mostrarNodos();
        void cargarArchivoEnLista(string nombreArchivo);

    private:
        Nodo* obtenerNodo(int posicion);
};


#endif //TRABAJOPRACTICO3FIGURAS_LISTA_H
