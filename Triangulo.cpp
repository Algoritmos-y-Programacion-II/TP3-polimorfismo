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
    cout << "\tTriangulo\n"
            "\t\t\t\t\t    *\n"
            "\t\t\t\t\t   * *\n"
            "\t\t\t\t\t  * * *\n"
            "\t\t\t\t\t * * * *\n"
            "\t\t\t\t\t* * * * *"
            "\n\t\tAltura: " << altura <<
            "\n\t\tBase: " << base <<
            "\n\t\tArea: " << area << "\n";
}