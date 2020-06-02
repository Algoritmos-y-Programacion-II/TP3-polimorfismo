//
// Created by valentina on 26/5/20.
//

#include "Circulo.h"

Circulo:: Circulo(double radioOut) {
    radio = radioOut;
}

void Circulo:: calcularArea() {
    area = 3.14 * radio * radio;
}

double Circulo:: obtenerArea() {
    return area;
}

void Circulo:: mostrar() {
    cout << "  Circulo"
            "\n           Radio: " << radio <<
            "\n           Area: " << area << "\n";

}