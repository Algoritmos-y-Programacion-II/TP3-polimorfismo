#include "Triangulo.h"

#include <iostream>

using namespace std;

Triangulo:: Triangulo(double baseOut, double alturaOut) {
    base = baseOut;
    altura = alturaOut;
    area = calcularArea();
}

double Triangulo:: calcularArea() {
    return (base * altura) / 2;
}

void Triangulo:: mostrar() {
    cout << "\tTriangulo"
            "\n\t\t\tAltura: " << altura <<
            "\n\t\t\tBase: " << base <<
            "\n\t\t\tArea: " << area << "\n";
}