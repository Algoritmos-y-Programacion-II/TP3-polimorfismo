//
// Created by valentina on 26/5/20.
//

#ifndef TRABAJOPRACTICO3FIGURAS_NODO_H
#define TRABAJOPRACTICO3FIGURAS_NODO_H

#include "Figura.h"
#include "Rectangulo.h"
#include "Triangulo.h"
#include "Circulo.h"

using namespace std;
typedef Figura Dato;

class Nodo {

    // Atributos
    private:
        Dato dato;
        Nodo* pSig;

    // Metodos
    public:

        // Constructores
        Nodo(Dato datoOut);

        // Setters
        void asignarSiguiente(Nodo* psigOut);
        void asignarDato(Dato datoOut);

        // Getters
        Dato obtenerDato();
        Nodo* obtenerSiguiente();

        // Otros metodos
        void mostrarDato();
};


#endif //TRABAJOPRACTICO3FIGURAS_NODO_H
