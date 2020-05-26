//
// Created by valentina on 26/5/20.
//

#include "Rectangulo.h"

Rectangulo:: Rectangulo(int baseOut, int alturaOut) {
    base = baseOut;
    altura = alturaOut;
}

int Rectangulo:: obtenerBase() {
    return base;
}

int Rectangulo:: obtenerAltura() {
    return altura;
}

void Rectangulo:: asignarBase(int baseOut) {
    base = baseOut;
}

void Rectangulo:: asignarAltura(int alturaOut) {
    altura = alturaOut;
}

void Rectangulo:: dibujar() {
    //TODO
}

float Rectangulo:: obtenerArea() {
    return base * altura;
}

float Rectangulo:: obtenerPerimetro() {
    return 2 * (base + altura);
}