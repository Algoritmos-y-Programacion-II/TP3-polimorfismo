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
            "\n\t\tAltura: " << altura <<
            "\n\t\tBase: " << base <<
            "\n\t\tArea: " << area << "\n";
}