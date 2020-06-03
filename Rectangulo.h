//
// Created by valentina on 26/5/20.
//

#ifndef TRABAJOPRACTICO3FIGURAS_RECTANGULO_H
#define TRABAJOPRACTICO3FIGURAS_RECTANGULO_H

#include "Figura.h"

class Rectangulo : public Figura {
    // Atributos
    private:
        double altura, base;

    // Metodos
    public:

        // PRE: baseOut y alturaOut deben ser numeros de tipo double validos mayores a cero
        // POST: Crea un rectangulo
        Rectangulo(double baseOut = 0, double alturaOut = 0);

        // PRE: -
        // POST: Calcula el area, y se la asigna al atributo area
        virtual void calcularArea();

        // PRE: -
        // POST: Muestra la figura y sus atributos
        virtual void mostrar();
};


#endif //TRABAJOPRACTICO3FIGURAS_RECTANGULO_H
