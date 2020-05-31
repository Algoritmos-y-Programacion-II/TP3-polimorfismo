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

    // Atributos
    protected:
        char letraInicial;
        double area;

    // Metodos
    public:
        Figura(double areaOut = 0);
        void asignarLetraInicial(char letraInicialOut);
        char obtenerLetraInicial();
        virtual double calcularArea();
        virtual void mostrar();
};

#endif //TRABAJOPRACTICO3FIGURAS_FIGURA_H
