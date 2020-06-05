//
// Created by valentina on 26/5/20.
//

#include "Rectangulo.h"
#include <iostream>

using namespace std;

Rectangulo:: Rectangulo(double baseOut, double alturaOut) {
    base = baseOut;
    altura = alturaOut;
    area = calcularArea();
}

int Rectangulo:: calcularArea() {
    return base * altura;
}

void Rectangulo:: mostrar() {
    cout << "   Rectangulo"
            "\n           Altura: " << altura <<
            "\n           Base: " << base <<
            "\n           Area: " << area << "\n";
}