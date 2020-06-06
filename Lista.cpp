#include <iostream>
#include "Lista.h"

Lista:: Lista () {
    primero = 0;
    elementos = 0;
}

Lista:: ~Lista() {
    while (!vacia())
        sacar(0);
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
    int i = 0;
    while (i < posicion) {
        aux = aux->obtenerSiguiente();
        i++;
    }
    return aux;
}

Dato Lista:: obtenerMax() {
    Dato max = obtenerDato(0);
    for (int i = 0; i < elementos; i++) {
        if (max->obtenerArea() < obtenerDato(i)->obtenerArea())
            max = obtenerDato(i);
    }
    return max;
}

Dato Lista:: obtenerMin() {
    Dato min = obtenerDato(0);
    for (int i = 0; i < elementos; i++) {
        if (min->obtenerArea() > obtenerDato(i)->obtenerArea())
            min = obtenerDato(i);
    }
    return min;
}
// -------------------->

bool Lista:: vacia() {
    return primero == 0;
}

void Lista:: agregarAlFinal(Dato datoExterno) {
    Nodo* nuevoNodo = new Nodo(datoExterno);
    Nodo* pAux = primero;
    if (this->vacia())
        primero = nuevoNodo;
    else {
        while (pAux->obtenerSiguiente() != 0)
            pAux = pAux->obtenerSiguiente();
        pAux->asignarSiguiente(nuevoNodo);
    }
    elementos++;
}

void Lista:: agregarEnPosicion(Dato datoExterno, int posicion) {
    Nodo* nuevoNodo = new Nodo(datoExterno);

    if (posicion == 0) {
        nuevoNodo->asignarSiguiente(primero);
        primero = nuevoNodo;
    }
    else {
        Nodo* anterior = obtenerNodo(posicion - 1);
        nuevoNodo->asignarSiguiente(anterior->obtenerSiguiente());
        anterior->asignarSiguiente(nuevoNodo);
    }
    elementos++;
}

void Lista:: sacar(int posicion) {
    Nodo* borrar = primero;

    if (posicion == 0) {
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

void Lista:: mostrarNodos() {
    if (!vacia()) {
        for (int i = 0; i < elementos; i++) {
            obtenerNodo(i)->mostrarNodo();
        }
    }
}