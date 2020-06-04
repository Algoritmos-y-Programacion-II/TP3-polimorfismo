//
// Created by valentina on 26/5/20.
//

#include "Nodo.h"
#include <iostream>

using namespace std;

// Constructor con parametros
Nodo:: Nodo(Dato datoOut) {
    dato = datoOut;
    pSig = 0;
}

Nodo:: ~Nodo() {
    delete dato;
}

// <-------------------- Setters
void Nodo:: asignarSiguiente(Nodo* pSigOut) {
    pSig = pSigOut;
}

Nodo* Nodo:: obtenerSiguiente() {
    return pSig;
}
// -------------------->

// <-------------------- Getters
void Nodo:: asignarDato(Dato datoOut) {
    dato = datoOut;
}

Dato Nodo:: obtenerDato() {
    return dato;
}
// -------------------->

void Nodo:: mostrarNodo() {
    cout << "----------------------------------------------------------------\n";
    cout << "Nodo ->   Dato: " << dato << "   Dirección: " << this << "   Siguiente: " << pSig << "\n";
    cout << "----------------------------------------------------------------\n\n";
}