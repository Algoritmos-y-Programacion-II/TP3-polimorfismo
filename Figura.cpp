//
// Created by valentina on 26/5/20.
//

#include "Figura.h"

Figura:: Figura(double areaOut, double baseOut, double alturaOut, double radioOut) {
    area = areaOut;
    base = baseOut;
    altura = alturaOut;
    radio = radioOut;
}

void Figura:: asignarLetraInicial(char letraInicialOut) {
    letraInicial = letraInicialOut;
}

void Figura:: asignarAltura(double alturaOut) {
    altura = alturaOut;
}

void Figura:: asignarBase(double baseOut) {
    base = baseOut;
}

void Figura:: asignarArea(double areaOut) {
    area = areaOut;
}

void Figura:: asignarRadio(double radioOut) {
    radio = radioOut;
}

char Figura:: obtenerLetraInicial() const {
    return letraInicial;
}

double Figura:: obtenerBase() const {
    return base;
}

double Figura:: obtenerAltura() const {
    return altura;
}

double Figura:: obtenerRadio() const {
    return radio;
}

double Figura:: obtenerArea() {
    return area;
}

ostream& operator << (ostream &out, Figura const &figura) {

    switch(figura.obtenerLetraInicial()) {

        case RECTANGULO:
            out << "    La figura es: rectangulo\n";
            out << "         Altura: " << figura.obtenerAltura() << "\n";
            out << "           Base: " << figura.obtenerBase() << "\n";;
            break;

        case TRIANGULO:
            out << "    La figura es: triangulo\n";
            out << "         Altura: " << figura.obtenerAltura() << "\n";;
            out << "           Base: " << figura.obtenerBase() << "\n";;
            break;

        case CIRCULO:
            out << "    La figura es: circulo\n";
            out << "          Radio: " << figura.obtenerRadio() << "\n";;
            break;
    }
    return out;
}