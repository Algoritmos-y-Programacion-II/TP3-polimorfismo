//
// Created by valentina on 8/6/20.
//

#ifndef TRABAJOPRACTICO3FIGURAS_VALIDACIONES_H
#define TRABAJOPRACTICO3FIGURAS_VALIDACIONES_H

#include <string>

using namespace std;

class Validaciones {

    public:

        // PRE: -
        // POST: Si num no es un entero, pide el reingreso hasta que lo sea y luego lo devuelve
        int validarEntero(string num);

        // PRE: Todos los enteros deben ser validos
        // POST: Si no se cumple que min <= num <= max le pide al usuario que reingrese el valor
        void validarRango(int &num, int min, int max);

        void validarChar(char &c);

        double validarDouble(string num);
};


#endif //TRABAJOPRACTICO3FIGURAS_VALIDACIONES_H
