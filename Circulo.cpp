//
// Created by valentina on 26/5/20.
//

#include "Circulo.h"

Circulo:: Circulo(double radioOut) {
    letraInicial = 'C';
    radio = radioOut;
}

double Circulo:: calcularArea() {
    return 3.14 * radio * radio;
}

void Circulo:: mostrar() {
    cout << "Tipo de figura:    triangulo"
            "\n       Radio: " << radio <<
            "\n       Area: " << calcularArea() << "\n\n";

}