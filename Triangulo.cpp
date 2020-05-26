//
// Created by valentina on 26/5/20.
//

#include "Triangulo.h"

Triangulo:: Triangulo(int baseOut, int alturaOut, int ladoIzqOut, int ladoDerOut) {
    base = baseOut;
    altura = alturaOut;
    ladoIzq = ladoIzqOut;
    ladoDer  = ladoDerOut;
}

int Triangulo:: obtenerBase() {
    return base;
}

int Triangulo:: obtenerAltura() {
    return altura;
}

void Triangulo:: asignarBase(int baseOut) {
    base = baseOut;
}

void Triangulo:: asignarAltura(int alturaOut) {
    altura = alturaOut;
}

void Triangulo:: dibujar() {
    //TODO
}

float Triangulo:: obtenerArea() {
    return (base * altura) / 2;
}

float Triangulo:: obtenerPerimetro() {
    return base + ladoIzq + ladoDer;
}