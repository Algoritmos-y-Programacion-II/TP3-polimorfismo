#ifndef TRABAJOPRACTICO3FIGURAS_VALIDACIONES_H
#define TRABAJOPRACTICO3FIGURAS_VALIDACIONES_H

#include <string>

using namespace std;

class Validaciones {

    public:

        // PRE: num es un string valido
        // POST: Si num no es un entero, pide el reingreso hasta que lo sea y luego lo devuelve
        int validarEntero(string num);

        // PRE: num es un string valido
        // POST: Si num no es double, pide el reingreso hasta que lo sea y luego lo devuelve
        double validarDouble(string num);

        // PRE: Todos los enteros deben ser validos
        // POST: Si no se cumple que min <= num <= max le pide al usuario que reingrese el valor
        void validarRango(int &num, int min, int max);

        // PRE: num es un double valido
        // POST: Si num es menor o igual a cero, pide el reingreso hasta que lo sea y luego lo devuelve
        void validarDoublePositivo(double &num);

        // PRE: c es un char valido
        // POST: Si c no es char, pide el reingreso hasta que lo sea
        void validarChar(char &c);
};


#endif //TRABAJOPRACTICO3FIGURAS_VALIDACIONES_H
