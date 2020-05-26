//
// Created by valentina on 26/5/20.
//

#include "Circulo.h"

Circulo:: Circulo(int radioOut) {
    radio = radioOut;
}

int Circulo:: obtenerRadio() {
    return radio;
}

void Circulo:: asignarRadio(int radioOut) {
    radio = radioOut;
}

void Circulo:: dibujar() {
    //TODO
}

float Circulo:: obtenerArea() {
    return 3.14 * radio * radio;
}

float Circulo:: obtenerPerimetro() {
    return 2* 3.14 * radio;
}