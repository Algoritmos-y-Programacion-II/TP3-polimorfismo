//
// Created by valentina on 26/5/20.
//

#include "Rectangulo.h"

Rectangulo:: Rectangulo(double baseOut, double alturaOut) {
    base = baseOut;
    altura = alturaOut;
}

void Rectangulo:: calcularArea() {
    area = base * altura;
}

double Rectangulo:: obtenerArea() {
    return area;
}

void Rectangulo:: mostrar() {
    cout << "Tipo de figura:    rectangulo"
            "\n       Altura: " << altura <<
            "\n       Base: " << base <<
            "\n       Area: " << area << "\n\n";
}