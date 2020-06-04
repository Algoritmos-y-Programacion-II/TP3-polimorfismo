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

        // PRE: -
        // POST: Crea una lista con 0 elementos
        Lista();

        // PRE: La lista debe estar creada
        // POST: Libera la memoria que ocupaba la lista
        ~Lista();

        // PRE: La lista debe estar creada y ser distinta de vacia, 0 < posicion <= elementos
        // POST: Devuelve el dato de la posicion recibida por parametro
        Dato obtenerDato(int posicion);

        // PRE: -
        // POST: Devuelve la cantidad de elementos
        int obtenerCantidadElementos();

        // PRE: La lista debe estar creada y ser distinta de vacia
        // POST: Devuelve el dato maximo
        Dato obtenerMax();

        // PRE: La lista debe estar creada y ser distinta de vacia
        // POST: Devuelve el dato minimo
        Dato obtenerMin();

        // PRE: datoOut debe ser valido, y 0 < posicion <= elementos
        // POST: Agrega el dato recibido como parametro en la posicion recibida como parametro
        void agregarEnPosicion(Dato datoOut, int posicionOut);

        // PRE: datoOut debe ser valido
        // POST: Agrega el dato recibido como parametro al principio de la lista
        void agregarAlPrincipio(Dato datoOut);

        // PRE: La lista debe estar creada y ser distinta de vacía
        // POST: Saca el elemento de la posicion recibida como parametro de la lista
        void sacar(int posicion);

        // PRE: -
        // POST: Devuelve true si la lista esta vacia, de lo contrario false
        bool vacia();

        // PRE: -
        // POST: Muestra por pantalla los datos de todos los nodos
        void mostrarNodos();

    private:
        // PRE: 0 < posicion <= elementos
        // POST: Devuelve un puntero de tipo nodo correspondiente con la posicion
        Nodo* obtenerNodo(int posicion);
};

#endif //TRABAJOPRACTICO3FIGURAS_LISTA_H