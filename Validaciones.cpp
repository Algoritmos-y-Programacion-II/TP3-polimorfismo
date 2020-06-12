#include "Validaciones.h"

#include <regex>    // Se utiliza en validarEntero() y validarDouble()
#include <iostream>

int Validaciones:: validarEntero(string num) {

    regex entero("^(\\+|-)?[[:digit:]]+");

    while (!regex_match(num, entero)) {
        cout << "\tError, el tipo de dato que ingreso no es valido.\n\tPor favor reingrese (solo numeros enteros): ";
        cin >> num;
    }
    return atoi(num.c_str());
}

void Validaciones:: validarRango(int &num, int min, int max) {
    string strPos;
    while (num < min || num > max) {
        cout << "\tEl numero que ingreso esta fuera de rango, por favor reingrese: ";
        cin >> strPos;
        num = validarEntero(strPos);
    }
}

void Validaciones:: validarChar(char &c) {
    while (!isalpha(c)) {
        cout << "\tError, lo que ingreso no es una letra.\n\tPor favor reingrese: ";
        cin >> c;
    }
}

double Validaciones:: validarDouble(string num) {

    regex real("^(-?)(0|([1-9][0-9]*))(\\.[0-9]+)?$");

    while (!regex_match(num, real)) {
        cout << "\tError, el tipo de dato que ingreso no es valido.\n\tPor favor reingrese (numeros enteros o reales): ";
        cin >> num;
    }

    return atof(num.c_str());
}