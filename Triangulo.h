//
// Created by valentina on 26/5/20.
//

#ifndef TRABAJOPRACTICO3FIGURAS_TRIANGULO_H
#define TRABAJOPRACTICO3FIGURAS_TRIANGULO_H

#include "Figura.h"

class Triangulo : public Figura {

    // Metodos
    public:

        // Descrpcion:
        // PRE:
        // POST:
        Triangulo(double baseOut = 0, double alturaOut = 0);

        // Descrpcion:
        // PRE:
        // POST:
        double obtenerBase();

        // Descrpcion:
        // PRE:
        // POST:
        double obtenerAltura();

        // Descrpcion:
        // PRE:
        // POST:
        void asignarBase(double baseOut);

        // Descrpcion:
        // PRE:
        // POST:
        void asignarAltura(double alturaOut);

        // Descrpcion:
        // PRE:
        // POST:
        virtual double obtenerArea();
};


#endif //TRABAJOPRACTICO3FIGURAS_TRIANGULO_H
