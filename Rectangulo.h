//
// Created by valentina on 26/5/20.
//

#ifndef TRABAJOPRACTICO3FIGURAS_RECTANGULO_H
#define TRABAJOPRACTICO3FIGURAS_RECTANGULO_H

#include "Figura.h"

class Rectangulo : public Figura {
    // Atributos
    private:
        double altura, base, area;

    // Metodos
    public:
        // Descrpcion:
        // PRE:
        // POST:
        Rectangulo(double baseOut = 0, double alturaOut = 0);

        // Descrpcion:
        // PRE:
        // POST:
        virtual void calcularArea();
        virtual void mostrar();
        virtual double obtenerArea();
};


#endif //TRABAJOPRACTICO3FIGURAS_RECTANGULO_H
