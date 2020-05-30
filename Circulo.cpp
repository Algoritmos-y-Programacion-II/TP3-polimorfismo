//
// Created by valentina on 26/5/20.
//

#include "Circulo.h"

Circulo:: Circulo(double radioOut) {
    letraInicial = 'C';
    radio = radioOut;
}

double Circulo:: obtenerArea() {
    return 3.14 * radio * radio;
}