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
        // POST: Devuelve el dato de la posicion recibida por parametro
        Dato obtenerDato(int posicion);

        // PRE: -
        // POST: Devuelve la cantidad de elementos
        int obtenerCantidadElementos();

        // PRE: -
        // POST: Devuelve el dato maximo
        Dato obtenerMax();

        // PRE: -
        // POST: Devuelve el dato minimo
        Dato obtenerMin();

        // PRE: datoOut debe ser valido, y posicionOut debe ser mayor a cero y menor a la cantidad total de elementos
        // POST: Agrega el dato recibido como parametro en la posicion recibida como parametro
        void agregarEnPosicion(Dato datoOut, int posicionOut);

        // PRE: datoOut debe ser valido
        // POST: Agrega el dato recibido como parametro al principio de la lista
        void agregarAlPrincipio(Dato datoOut);

        // PRE: -
        // POST: Saca el elemento de la posicion recibida como parametro de la lista
        void sacar(int posicion);

        // PRE: -
        // POST: Devuelve true si la lista esta vacia, de lo contrario false
        bool vacia();

        // PRE: -
        // POST: Muestra por pantalla los datos de todos los nodos
        void mostrarNodos();

    private:
        Nodo* obtenerNodo(int posicion);
};

#endif //TRABAJOPRACTICO3FIGURAS_LISTA_H