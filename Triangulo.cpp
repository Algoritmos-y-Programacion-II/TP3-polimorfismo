//
// Created by valentina on 26/5/20.
//

#include "Triangulo.h"

Triangulo:: Triangulo(double baseOut, double alturaOut) {
    letraInicial = 'T';
    base = baseOut;
    altura = alturaOut;
}

double Triangulo:: calcularArea() {
    return (base * altura) / 2;
}

void Triangulo:: mostrar() {
    cout << "Tipo de figura:    triangulo"
            "\n       Altura: " << altura <<
            "\n       Base: " << base <<
            "\n       Area: " << calcularArea() << "\n\n";
}