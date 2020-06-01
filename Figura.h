//
// Created by valentina on 26/5/20.
//

#ifndef TRABAJOPRACTICO3FIGURAS_FIGURA_H
#define TRABAJOPRACTICO3FIGURAS_FIGURA_H

#include <iostream>
using namespace std;

const char RECTANGULO = 'R';
const char TRIANGULO = 'T';
const char CIRCULO = 'C';

class Figura {

    // Metodos
    public:
        virtual void calcularArea() = 0;
        virtual void mostrar() = 0;
        virtual double obtenerArea() = 0;
};

#endif //TRABAJOPRACTICO3FIGURAS_FIGURA_H
