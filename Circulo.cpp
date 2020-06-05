//
// Created by valentina on 26/5/20.
//

#include "Circulo.h"
#include <iostream>

using namespace std;

Circulo:: Circulo(double radioOut) {
    radio = radioOut;
    area = calcularArea();
}

int Circulo:: calcularArea() {
    return 3.14 * radio * radio;
}

void Circulo:: mostrar() {
    cout << "  Circulo"
            "\n           Radio: " << radio <<
            "\n           Area: " << area << "\n";

}