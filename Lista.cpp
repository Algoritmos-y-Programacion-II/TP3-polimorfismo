//
// Created by valentina on 26/5/20.
//

#include "Lista.h"
#include "Figura.h"
#include "Rectangulo.h"
#include "Triangulo.h"
#include "Circulo.h"

Lista:: Lista () {
    primero = 0;
    elementos = 0;
}

Lista:: ~Lista() {
    while (!vacia())
        // Mientras queden elementos, voy siempre sacando el que este en la posicion 1
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
        if (max > obtenerDato(i))
            max = obtenerDato(i);
    }
    return max;
}

Dato Lista:: obtenerMin() {
    Dato min = obtenerDato(0);
    for (int i = 0; i < elementos; i++) {
        if (min < obtenerDato(i))
            min = obtenerDato(i);
    }
    return min;
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

    if (posicion == 0) {
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

void Lista:: cargarArchivoEnLista(string nombreArchivo) {

    ifstream archivoFiguras(nombreArchivo);

    char figura;
    double base, altura, radio;

    Dato dato;

    if (!archivoFiguras.fail()) {

        while (archivoFiguras >> figura) {

            switch (figura) {

                case RECTANGULO:
                    archivoFiguras >> base;
                    archivoFiguras >> altura;
                    dato = new Rectangulo(base, altura);
                    break;

                case TRIANGULO:
                    archivoFiguras >> base;
                    archivoFiguras >> altura;
                    dato = new Triangulo(base, altura);
                    break;

                case CIRCULO:
                    archivoFiguras >> radio;
                    dato = new Circulo(radio);

                    break;
            }
            dato->calcularArea();
            agregarAlPrincipio(dato);
        }
    } else cout << "No se pudo abrir el archivo\n";
}