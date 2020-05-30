//
// Created by valentina on 26/5/20.
//

#include "Triangulo.h"

Triangulo:: Triangulo(double baseOut, double alturaOut) {
    letraInicial = 'T';
    base = baseOut;
    altura = alturaOut;
}

double Triangulo:: obtenerArea() {
    return (base * altura) / 2;
}