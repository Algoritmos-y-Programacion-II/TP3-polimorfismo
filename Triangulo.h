//
// Created by valentina on 26/5/20.
//

#ifndef TRABAJOPRACTICO3FIGURAS_TRIANGULO_H
#define TRABAJOPRACTICO3FIGURAS_TRIANGULO_H

#include "Figura.h"

class Triangulo : public Figura {
    // Atributos
    private:
        double altura, base;

    // Metodos
    public:

        // Descrpcion:
        // PRE:
        // POST:
        Triangulo(double baseOut = 0, double alturaOut = 0);

        // Descrpcion:
        // PRE:
        // POST:
        virtual double calcularArea();
        virtual void mostrar();
};


#endif //TRABAJOPRACTICO3FIGURAS_TRIANGULO_H
