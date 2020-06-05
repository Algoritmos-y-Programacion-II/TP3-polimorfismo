//
// Created by valentina on 26/5/20.
//

#include "Figura.h"
#include <iostream>

using namespace std;

bool Figura:: operator < (Figura* figura) {
    return this->area < figura->area;
}

bool Figura:: operator > (Figura* figura) {
    return this->area > figura->area;
}