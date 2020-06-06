#ifndef TRABAJOPRACTICO3FIGURAS_NODO_H
#define TRABAJOPRACTICO3FIGURAS_NODO_H

#include "Figura.h"
#include <iostream>

//typedef Figura* Dato;
template <typename Tipo>
class Nodo {

    // Atributos
    private:
        Tipo dato;
        Nodo* pSig;

    // Metodos
    public:

        // PRE: datoExterno debe ser valido
        // POST: Construye un nodo con el dato recibido
        Nodo(Tipo datoExterno);

        ~Nodo();

        // PRE: pSigExterno debe ser valido
        // POST: Le asigna pSigExterno a pSig
        void asignarSiguiente(Nodo* pSigExterno);

        // PRE: datoExterno debe ser valido
        // POST: Le asigna datoExterno a dato
        void asignarDato(Tipo datoExterno);

        // PRE: -
        // POST: Devuelve dato
        Tipo obtenerDato();

        // PRE: -
        // POST: Devuelve pSig
        Nodo* obtenerSiguiente();

        // PRE: -
        // POST: Muestra los datos del nodo
        void mostrarNodo();
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Constructor con parametros
template <typename Tipo>
Nodo<Tipo>:: Nodo(Tipo datoExterno) {
    dato = datoExterno;
    pSig = 0;
}

template <typename Tipo>
Nodo<Tipo>:: ~Nodo() {
    delete dato;
}

// <-------------------- Setters
template <typename Tipo>
void Nodo<Tipo>:: asignarSiguiente(Nodo<Tipo>* pSigExterno) {
    pSig = pSigExterno;
}

template <typename Tipo>
Nodo<Tipo>* Nodo<Tipo>:: obtenerSiguiente() {
    return pSig;
}
// -------------------->

// <-------------------- Getters
template <typename Tipo>
void Nodo<Tipo>:: asignarDato(Tipo datoExterno) {
    dato = datoExterno;
}

template <typename Tipo>
Tipo Nodo<Tipo>:: obtenerDato() {
    return dato;
}
// -------------------->

template <typename Tipo>
void Nodo<Tipo>:: mostrarNodo() {
    std::cout << "----------------------------------------------------------------\n";
    std::cout << "Nodo ->   Dato: " << dato << "   Dirección: " << this << "   Siguiente: " << pSig << "\n";
    std::cout << "----------------------------------------------------------------\n\n";
}

#endif //TRABAJOPRACTICO3FIGURAS_NODO_H