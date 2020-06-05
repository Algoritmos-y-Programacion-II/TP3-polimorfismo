#ifndef TRABAJOPRACTICO3FIGURAS_TRIANGULO_H
#define TRABAJOPRACTICO3FIGURAS_TRIANGULO_H

#include "Figura.h"

class Triangulo : public Figura {
    // Atributos
    private:
        double altura, base;

    // Metodos
    public:

        // PRE: baseOut y alturaOut deben ser numeros de tipo double validos mayores a cero
        // POST: Crea un triangulo
        Triangulo(double baseOut = 0, double alturaOut = 0);

        // PRE: -
        // POST: Calcula el area, y se la asigna al atributo area
        virtual double calcularArea();

        // PRE: -
        // POST: Muestra la figura y sus atributos
        virtual void mostrar();
};


#endif //TRABAJOPRACTICO3FIGURAS_TRIANGULO_H
