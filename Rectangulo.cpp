//
// Created by valentina on 26/5/20.
//

#include "Rectangulo.h"

Rectangulo:: Rectangulo(double baseOut, double alturaOut) {
    letraInicial = 'R';
    base = baseOut;
    altura = alturaOut;
}

double Rectangulo:: calcularArea() {
    return base * altura;
}

void Rectangulo:: mostrar() {
    cout << "Tipo de figura:    rectangulo"
            "\n       Altura: " << altura <<
            "\n       Base: " << base <<
            "\n       Area: " << calcularArea() << "\n\n";
}