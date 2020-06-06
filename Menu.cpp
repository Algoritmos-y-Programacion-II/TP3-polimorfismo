#include <regex>    // Se utiliza en validarEntero()
#include <cstdlib>  // Se utiliza en validarEntero()
#include <fstream>  // Se utiliza en cargarDatos()

#include "Menu.h"
#include "Lista.h"
#include "Rectangulo.h"
#include "Triangulo.h"
#include "Circulo.h"

const int OBTENER_FIGURA = 1;
const int BAJA = 2;
const int ALTA = 3;
const int MOSTRAR = 4;
const int SUP_MAX = 5;
const int SUP_MIN = 6;

const char RECTANGULO = 'R';
const char TRIANGULO = 'T';
const char CIRCULO = 'C';

int Menu:: obtenerOpcion() {
    return opcion;
}

Lista<Figura*> Menu:: obtenerLista() {
    return listaFiguras;
}

void Menu:: cargarDatos(ifstream& archivo) {

    char figura;
    double primerNro, segundoNro;
    Figura* dato;

    while (archivo >> figura) {

        switch (toupper(figura)) {

            case RECTANGULO:
                archivo >> primerNro;
                archivo >> segundoNro;
                dato = new Rectangulo(primerNro, segundoNro);
                break;

            case TRIANGULO:
                archivo >> primerNro;
                archivo >> segundoNro;
                dato = new Triangulo(primerNro, segundoNro);
                break;

            case CIRCULO:
                archivo >> primerNro;
                dato = new Circulo(primerNro);
                break;
        }
        listaFiguras.agregarAlFinal(dato);
    }
}

void Menu:: mostrarOpciones() {
    cout << "\n\t1. Mostrar una figura de determinada posicion\n"
            "\t2. Dar de baja una figura\n"
            "\t3. Agregar manualmente una figura\n"
            "\t4. Mostrar todas las figuras\n"
            "\t5. Mostrar superficie maxima\n"
            "\t6. Mostrar superficie minima\n"
            "\t0. Salir\n";
}

void Menu:: elegirOpcion() {
    string strPos;
    cout << "\n\tIngrese la opcion que desea: ";
    cin >> strPos;
    cout << "\n";
    opcion = validarEntero(strPos);
    validarRango(opcion, MIN, MAX);
}

void Menu:: abrirSubmenu() {

    switch(opcion) {

        case OBTENER_FIGURA:
            mostrarFigura();
            break;

        case BAJA:
            bajaFigura();
            break;

        case ALTA:
            agregarFigura();
            break;

        case MOSTRAR:
            mostrarFiguras();
            break;

        case SUP_MAX:
            mostrarSupMax();
            break;

        case SUP_MIN:
            mostrarSupMin(); break;
    }
}

void Menu:: mostrarFigura() {

    cout << "\t- - - - - - - - - Mostrar - - - - - - - -\n";

    if (!listaFiguras.vacia()) {

        string nombreFigura, strPos;
        int posicion, min = 1, max = listaFiguras.obtenerCantidadElementos();

        cout << "\tIngrese una posicion entre " << min << " y " << max << ": ";
        cin >> strPos;
        cout << "\n";
        posicion = validarEntero(strPos);

        validarRango(posicion, min, max);
        listaFiguras.obtenerDato(posicion - 1)->mostrar();
    }
    cout << "\t- - - - - - - - - - - - - - - - - - - - -\n";
}

void Menu:: bajaFigura() {

    cout << "\t- - - - - - - - -  Baja - - - - - - - - -\n";
    if (!listaFiguras.vacia()) {

        string strPos;
        mostrarFiguras();

        cout << "\tIngrese el numero del elemento que desea dar de baja [1 - " << listaFiguras.obtenerCantidadElementos() << "]: ";
        cin >> strPos;

        int posicion = validarEntero(strPos);
        validarRango(posicion, 1, listaFiguras.obtenerCantidadElementos());

        listaFiguras.sacar(posicion - 1);

        cout << "\tSe saco el elemento de la posicion " << posicion << " con exito.\n";

    }
    else cout << "\tNo se pueden sacar elementos porque la lista esta vacia\n";
    cout << "\t- - - - - - - - - - - - - - - - - - - - -\n";
}

void Menu:: agregarFigura() {

    cout << "\t- - - - - - - - -  Alta - - - - - - - - -\n";

    char tipoFigura;
    string strPos;

    cout << "\tIngrese el tipo de figura que desea\n"
            "\t\t- [R]ectangulo\n"
            "\t\t- [T]riangulo\n"
            "\t\t- [C]irculo\n";
    cin >> tipoFigura;

    cout << "\tIngrese la posicion en la que desea insertar la nueva figura [1 - " << listaFiguras.obtenerCantidadElementos() << "]: ";
    cin >> strPos;

    int posicion = validarEntero(strPos);
    validarRango(posicion, 1, listaFiguras.obtenerCantidadElementos());

    switch(toupper(tipoFigura)) {

        case RECTANGULO:
            agregarRectangulo(posicion - 1);
            break;

        case TRIANGULO:
            agregarTriangulo(posicion - 1);
            break;

        case CIRCULO:
            agregarCirculo(posicion - 1);
            break;

        default:
            cout << "\tLa letra que ingreso no es valida.\n";
    }
    cout << "\t- - - - - - - - - - - - - - - - - - - - -\n";
}

void Menu:: mostrarFiguras() {
    cout << "\t- - - - - - - - Figuras - - - - - - - - -\n";

    if (!listaFiguras.vacia()) {

        for (int i = 0; i < listaFiguras.obtenerCantidadElementos(); i++) {
            cout << "\t" << i + 1 << ". ";
            listaFiguras.obtenerDato(i)->mostrar();
            cout << "\n";
        }
    }
    else cout << "\tNo hay figuras para mostrar porque la lista esta vacia\n";
    cout << "\t- - - - - - - - - - - - - - - - - - - - -\n";
}

void Menu:: mostrarSupMax() {
    cout << "\t- - - - - - Mayor  superficie - - - - - -\n";

    if (!listaFiguras.vacia()) {

        Figura* max = listaFiguras.obtenerDato(0);

        for (int i = 0; i < listaFiguras.obtenerCantidadElementos(); i++) {

            if (max->obtenerArea() < listaFiguras.obtenerDato(i)->obtenerArea())
                max = listaFiguras.obtenerDato(i);
        }
        max->mostrar();
    }
    else cout << "\tNo hay figuras para mostrar porque la lista esta vacia\n";

    cout << "\t- - - - - - - - - - - - - - - - - - - - -\n";
}

void Menu:: mostrarSupMin() {
    cout << "\t- - - - - - Menor  superficie - - - - - -\n";

    if (!listaFiguras.vacia()) {

        Figura* min = listaFiguras.obtenerDato(0);

        for (int i = 0; i < listaFiguras.obtenerCantidadElementos(); i++) {

            if (min->obtenerArea() > listaFiguras.obtenerDato(i)->obtenerArea())
                min = listaFiguras.obtenerDato(i);
        }
        min->mostrar();
    }
    else cout << "\tNo hay figuras para mostrar porque la lista esta vacia\n";

    cout << "\t- - - - - - - - - - - - - - - - - - - - -\n";
}

void Menu:: agregarRectangulo(int posicion) {

    double base, altura;

    cout << "\tIngrese base: ";
    cin >> base;
    cout << "\n\tIngrese altura: ";
    cin >> altura;
    cout << "\t\n";

    Figura* figura = new Rectangulo(base, altura);
    listaFiguras.agregarEnPosicion(figura, posicion);
}

void Menu:: agregarTriangulo(int posicion) {

    double base, altura;

    cout << "\tIngrese base: ";
    cin >> base;
    cout << "\n\tIngrese altura: ";
    cin >> altura;
    cout << "\n";

    Figura* figura = new Triangulo(base, altura);
    listaFiguras.agregarEnPosicion(figura, posicion);
}

void Menu:: agregarCirculo(int posicion) {

    double radio;

    cout << "\tIngrese radio: ";
    cin >> radio;
    cout << "\n";

    Figura* figura = new Circulo(radio);
    listaFiguras.agregarEnPosicion(figura, posicion);
}

int Menu:: validarEntero(string &num) {

    regex entero("^(\\+|-)?[[:digit:]]+");

    while (!regex_match(num, entero)) {
        cout << "\tError, el tipo de dato que ingreso no es valido.\n\tPor favor reingrese (solo numeros enteros): ";
        cin >> num;
    }
    return atoi(num.c_str());;
}

void Menu:: validarRango(int &num, int min, int max) {
    string strPos;
    while (num < min || num > max) {
        cout << "\tEl numero que ingreso esta fuera de rango, por favor reingrese: ";
        cin >> strPos;
        num = validarEntero(strPos);
    }
}
