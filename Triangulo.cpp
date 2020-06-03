//
// Created by valentina on 26/5/20.
//

#include "Triangulo.h"
#include <iostream>

using namespace std;

Triangulo:: Triangulo(double baseOut, double alturaOut) {
    base = baseOut;
    altura = alturaOut;
}

void Triangulo:: calcularArea() {
    area = (base * altura) / 2;
}

void Triangulo:: mostrar() {
    cout << "   Triangulo"
            "\n           Altura: " << altura <<
            "\n           Base: " << base <<
            "\n           Area: " << area << "\n";
}