//
// Created by valentina on 26/5/20.
//

#include "Lista.h"

Lista:: Lista () {
    primero = 0;
    elementos = 0;
}

Lista:: ~Lista() {
    while (!vacia())
        // Mientras queden elementos, voy siempre sacando el que este en la posicion 1
        sacar(1);
}

// <-------------------- Getters
Dato Lista:: obtenerDato(int posicion) {
    return obtenerNodo(posicion)->obtenerDato();
}

int Lista:: obtenerCantidadElementos() {
    return elementos;
}

Nodo* Lista:: obtenerNodo(int posicion) {
    Nodo *aux = primero;
    int i = 1;
    while (i < posicion) {
        aux = aux->obtenerSiguiente();
        i++;
    }
    return aux;
}
// -------------------->

bool Lista:: vacia() {
    return primero == 0;
}

void Lista:: agregarAlPrincipio(Dato datoOut) {
    Nodo* nuevoNodo = new Nodo(datoOut);
    Nodo* pAux = primero;
    if (this->vacia())
        primero = nuevoNodo;
    else
    {

        while (pAux->obtenerSiguiente() != 0)
            pAux = pAux->obtenerSiguiente();
        pAux->asignarSiguiente(nuevoNodo);
    }
    elementos++;
}

void Lista:: agregarEnPosicion(Dato datoOut, int posicion) {
    Nodo* nuevoPrimero = new Nodo(datoOut);

    if (posicion == 1) {
        nuevoPrimero->asignarSiguiente(primero);
        primero = nuevoPrimero;
    }
    else {
        Nodo* anterior = obtenerNodo(posicion - 1);
        nuevoPrimero->asignarSiguiente(anterior->obtenerSiguiente());
        anterior->asignarSiguiente(nuevoPrimero);
    }
    elementos++;
}

void Lista:: sacar(int posicion) {
    Nodo* borrar = primero;

    if (posicion == 1) {
        primero = borrar->obtenerSiguiente();
    }

    else {
        Nodo* anterior = obtenerNodo(posicion - 1);
        borrar = anterior->obtenerSiguiente();
        anterior->asignarSiguiente(borrar->obtenerSiguiente());
    }
    delete borrar;
    elementos--;
}

void Lista:: mostrarDatos() {
    if (!vacia()) {
        for (int i = 1; i < elementos; i++) {
            obtenerNodo(i)->mostrarDato();
        }
    }
}

void Lista:: ordenar() {
    Nodo* pAux = 0;
    Nodo* nuevoPrimero = primero;
    Dato dato;

    while (!vacia()) {

        pAux = pAux->obtenerSiguiente();

        while (pAux != 0) {

            if (nuevoPrimero->obtenerDato() < pAux->obtenerDato()) {
                dato = pAux->obtenerDato();
                pAux->asignarDato(nuevoPrimero->obtenerDato());
                nuevoPrimero->asignarDato(dato);
            }
            pAux = pAux->obtenerSiguiente();
        }
        nuevoPrimero = nuevoPrimero->obtenerSiguiente();
    }
}