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

        // TODO agregar comentarios

        // PRE: -
        // POST: Crea una lista con 0 elementos
        Lista();

        // PRE: -
        // POST: Libera la memoria que ocupaba la lista
        ~Lista();

        // PRE: -
        // POST:
        Dato obtenerDato(int posicion);

        // PRE: -
        // POST:
        int obtenerCantidadElementos();

        // PRE: -
        // POST:
        Dato obtenerMax();

        // PRE: -
        // POST:
        Dato obtenerMin();

        // PRE: -
        // POST:
        void agregarEnPosicion(Dato datoOut, int posicion);

        // PRE: -
        // POST:
        void agregarAlPrincipio(Dato datoOut);

        // PRE: -
        // POST:
        void sacar(int posicion);

        // PRE: -
        // POST:
        bool vacia();

        // PRE: -
        // POST:
        void mostrarNodos();

    private:
        Nodo* obtenerNodo(int posicion);
};




#endif //TRABAJOPRACTICO3FIGURAS_LISTA_H
