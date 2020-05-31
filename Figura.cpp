//
// Created by valentina on 26/5/20.
//

#include "Figura.h"

Figura:: Figura(double areaOut) {
    area = areaOut;
}

void Figura:: asignarLetraInicial(char letraInicialOut) {
    letraInicial = letraInicialOut;
}

char Figura:: obtenerLetraInicial() {
    return letraInicial;
}