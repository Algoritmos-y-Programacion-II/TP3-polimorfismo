//
// Created by valentina on 26/5/20.
//

#ifndef TRABAJOPRACTICO3FIGURAS_CIRCULO_H
#define TRABAJOPRACTICO3FIGURAS_CIRCULO_H

#include "Figura.h"

class Circulo : public Figura {
    //Atributos
    private:
        double radio, area;

    // Metodos
    public:


        // PRE: radioOut debe ser un numero de tipo double valido mayor a cero
        // POST: Crea un circulo
        Circulo(double radioOut = 0);

        // PRE: -
        // POST: Calcula el area, y se la asigna al atributo area
        virtual void calcularArea();

        // PRE: -
        // POST: Muestra la figura y sus atributos
        virtual void mostrar();

        // PRE: -
        // POST: Devuelve el area
        virtual double obtenerArea();
};


#endif //TRABAJOPRACTICO3FIGURAS_CIRCULO_H
