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

double Rectangulo:: calcularArea() {
    return base * altura;
}

void Rectangulo:: mostrar() {
    cout << "\tRectangulo"
            "\n\t\t\tAltura: " << altura <<
            "\n\t\t\tBase: " << base <<
            "\n\t\t\tArea: " << area << "\n";
}