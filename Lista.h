//
// Created by valentina on 26/5/20.
//

#ifndef TRABAJOPRACTICO3FIGURAS_LISTA_H
#define TRABAJOPRACTICO3FIGURAS_LISTA_H

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

        // Otros metodos
        void agregarEnPosicion(Dato datoOut, int posicion);
        void agregarAlPrincipio(Dato datoOut);
        void sacar(int posicion);
        bool vacia();
        void mostrarDatos();
        void ordenar();

    private:
        Nodo* obtenerNodo(int posicion);
};


#endif //TRABAJOPRACTICO3FIGURAS_LISTA_H
