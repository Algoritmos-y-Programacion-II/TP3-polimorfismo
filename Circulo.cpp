#include "Circulo.h"
#include <iostream>

using namespace std;

Circulo:: Circulo(double radioOut) {
    radio = radioOut;
    area = calcularArea();
}

double Circulo:: calcularArea() {
    return 3.14 * radio * radio;
}

void Circulo:: mostrar() {
    cout << "\tCirculo"
            "\n\t\t\tRadio: " << radio <<
            "\n\t\t\tArea: " << area << "\n";

}