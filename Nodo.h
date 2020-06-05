#ifndef TRABAJOPRACTICO3FIGURAS_NODO_H
#define TRABAJOPRACTICO3FIGURAS_NODO_H

#include "Figura.h"

typedef Figura* Dato;

class Nodo {

    // Atributos
    private:
        Dato dato;
        Nodo* pSig;

    // Metodos
    public:

        // PRE: datoOut debe ser valido
        // POST: Construye un nodo con el dato recibido
        Nodo(Dato datoOut);

        ~Nodo();

        // PRE: pSigOut debe ser valido
        // POST: Le asigna pSigOut a pSig
        void asignarSiguiente(Nodo* pSigOut);

        // PRE: datoOut debe ser valido
        // POST: Le asigna datoOut a dato
        void asignarDato(Dato datoOut);

        // PRE: -
        // POST: Devuelve dato
        Dato obtenerDato();

        // PRE: -
        // POST: Devuelve pSig
        Nodo* obtenerSiguiente();

        // PRE: -
        // POST: Muestra los datos del nodo
        void mostrarNodo();
};

#endif //TRABAJOPRACTICO3FIGURAS_NODO_H