//
// Created by valentina on 26/5/20.
//

#include "Triangulo.h"

Triangulo:: Triangulo(double baseOut, double alturaOut) {
    base = baseOut;
    altura = alturaOut;
}

void Triangulo:: calcularArea() {
    area = (base * altura) / 2;
}

double Triangulo:: obtenerArea() {
    return area;
}

void Triangulo:: mostrar() {
    cout << "Tipo de figura:    triangulo"
            "\n       Altura: " << altura <<
            "\n       Base: " << base <<
            "\n       Area: " << area << "\n\n";
}