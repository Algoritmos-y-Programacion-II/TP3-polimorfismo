//
// Created by valentina on 26/5/20.
//

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

        // TODO agregar comentarios
        
        // PRE: -
        // POST:
        Nodo(Dato datoOut);

        // PRE: -
        // POST:
        void asignarSiguiente(Nodo* psigOut);

        // PRE: -
        // POST:
        void asignarDato(Dato datoOut);

        // PRE: -
        // POST:
        Dato obtenerDato();

        // PRE: -
        // POST:
        Nodo* obtenerSiguiente();

        // PRE: -
        // POST:
        void mostrarNodo();
};


#endif //TRABAJOPRACTICO3FIGURAS_NODO_H
