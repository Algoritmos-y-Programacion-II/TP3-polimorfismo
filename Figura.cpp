//
// Created by valentina on 26/5/20.
//

#include "Figura.h"

double Figura:: obtenerArea() {
    return area;
}

bool Figura:: operator < (Figura &figura) {
    return this->obtenerArea() < figura.obtenerArea();
}

bool Figura:: operator > (Figura &figura) {
    return this->obtenerArea() > figura.obtenerArea();
}