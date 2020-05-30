//
// Created by valentina on 26/5/20.
//

#include "Rectangulo.h"

Rectangulo:: Rectangulo(double baseOut, double alturaOut) {
    letraInicial = 'R';
    base = baseOut;
    altura = alturaOut;
}

double Rectangulo:: obtenerArea() {
    return base * altura;
}