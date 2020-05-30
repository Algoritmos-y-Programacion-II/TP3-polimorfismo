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
        double area, base, altura, radio;

    // Metodos
    public:
        Figura(double areaOut = 0, double baseOut = 0, double alturaOut = 0, double radioOut = 0);
        void asignarLetraInicial(char letraInicialOut);
        void asignarBase(double baseOut);
        void asignarAltura(double alturaOut);
        void asignarRadio(double radioOut);
        void asignarArea(double areaOut);
        char obtenerLetraInicial() const;
        double obtenerBase() const;
        double obtenerAltura() const;
        double obtenerRadio() const;
        virtual double obtenerArea();
};

ostream& operator << (ostream& out, Figura const &figura);

#endif //TRABAJOPRACTICO3FIGURAS_FIGURA_H
