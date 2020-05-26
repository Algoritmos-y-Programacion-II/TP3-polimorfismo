//
// Created by valentina on 26/5/20.
//

#ifndef TRABAJOPRACTICO3FIGURAS_TRIANGULO_H
#define TRABAJOPRACTICO3FIGURAS_TRIANGULO_H

#include "Figura.h"

class Triangulo : public Figura {

    // Atributos
    private:
        int base, altura, ladoIzq, ladoDer;

    // Metodos
    public:

        // Descrpcion:
        // PRE:
        // POST:
        Triangulo(int baseOut, int alturaOut, int ladoIzqOut, int ladoDerOut);

        // Descrpcion:
        // PRE:
        // POST:
        int obtenerBase();

        // Descrpcion:
        // PRE:
        // POST:
        int obtenerAltura();


        // Descrpcion:
        // PRE:
        // POST:
        void asignarBase(int baseOut);

        // Descrpcion:
        // PRE:
        // POST:
        void asignarAltura(int alturaOut);

        // Descrpcion:
        // PRE:
        // POST:
        void dibujar();

        // Descrpcion:
        // PRE:
        // POST:
        virtual float obtenerArea();

        // Descrpcion:
        // PRE:
        // POST:
        virtual float obtenerPerimetro();
};


#endif //TRABAJOPRACTICO3FIGURAS_TRIANGULO_H
