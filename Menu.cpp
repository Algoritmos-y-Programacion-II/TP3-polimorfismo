//
// Created by valentina on 29/5/20.
//

#include "Menu.h"
#include "Lista.h"
#include <iostream>

using namespace std;

const int OBTENER_FIGURA = 1;
const int BAJA = 2;
const int ALTA = 3;
const int MOSTRAR = 4;
const int SUP_MAX = 5;
const int SUP_MIN = 6;

int Menu:: obtenerOpcion() {
    return opcion;
}

Lista Menu:: obtenerLista() {
    return listaFiguras;
}

void Menu:: mostrarBienvenida() {
    cout << "Bienvenid@!\n";
}

void Menu:: mostrarDespedida() {
    cout << "Hasta la proxima\n";
}

void Menu:: cargarDatos(string archFiguras) {
    listaFiguras.cargarArchivoEnLista(archFiguras);
}

void Menu::mostrarMenu() {
    cout << "\n   1. Obtener una figura de determinada posicion\n"
            "   2. Dar de baja una figura\n"
            "   3. Agregar manualmente una figura\n"
            "   4. Mostrar figuras\n"
            "   5. Mostrar superficie maxima\n"
            "   6. Mostrar superficie minima\n"
            "   0. Salir\n";
}

void Menu:: elegirOpcion() {
    cout << "\n   Ingrese la opcion que desea: ";
    cin >> opcion;
    cout << "\n";
    validarRango(opcion);
}

void Menu:: validarRango(int &num, int min, int max) {
    while (num < min || num > max) {
        cout << "El numero que ingreso esta fuera de rango, por favor reingrese: ";
        cin >> num;
    }
}

void Menu:: abrirSubmenu() {

    switch(opcion) {

        case OBTENER_FIGURA: obtenerFigura(); break;

        case BAJA: bajaFigura(); break;

        case ALTA: agregarFigura(); break;

        case MOSTRAR: mostrarFiguras(); break;

        case SUP_MAX: mostrarSupMax(); break;

        case SUP_MIN: mostrarSupMin(); break;
    }
}

void Menu:: obtenerFigura() {

    if (listaFiguras.obtenerCantidadElementos() > 0) {
        string nombreFigura;

        int posicion, min = 1, max = listaFiguras.obtenerCantidadElementos();
        cout << "Ingrese una posicion entre " << min << " y " << max << ": ";
        cin >> posicion;
        cout << "\n";
        validarRango(posicion, min, max);
        listaFiguras.obtenerDato(posicion - 1)->mostrar();
    }
}

void Menu:: bajaFigura() {
    if (listaFiguras.obtenerCantidadElementos() > 0) {
        int posicion;
        mostrarFiguras();
        cout << "Ingrese el numero del elemento que desea dar de baja: ";
        cin >> posicion;
        validarRango(posicion, 0, listaFiguras.obtenerCantidadElementos());
        listaFiguras.sacar(posicion - 1);
    }
}

void Menu:: agregarFigura() {
    char tipoFigura;
    cout << "Ingrese el tipo de figura que desea\n"
            "   - (R)ectangulo\n"
            "   - (T)riangulo\n"
            "   - (C)irculo\n";
    cin >> tipoFigura;

    switch(toupper(tipoFigura)) {
        case RECTANGULO:
            agregarRectangulo();
            break;

        case TRIANGULO:
            agregarTriangulo();
            break;

        case CIRCULO:
            agregarCirculo();
            break;
        default:
            cout << "La letra que ingreso no es valida.\n";
    }
}

void Menu:: mostrarFiguras() {
    for (int i = 0; i < listaFiguras.obtenerCantidadElementos(); i ++) {
        cout << i+1 << ". ";
        listaFiguras.obtenerDato(i)->mostrar();
    }
}

void Menu:: mostrarSupMax() {
    cout << "- - - - Mayor superficie - - - -\n";
    listaFiguras.obtenerMax()->mostrar();;
}

void Menu:: mostrarSupMin() {
    cout << "- - - - Menor superficie: - - - -\n";
    listaFiguras.obtenerMin()->mostrar();
}


void Menu:: agregarRectangulo() {
    double base, altura;
    Figura* figura;
    cout << "   Ingrese base: ";
    cin >> base;
    cout << "\n";
    cout << "   Ingrese altura: ";
    cin >> altura;
    cout << "\n";
    figura = new Rectangulo(base, altura);
    figura->calcularArea();
    listaFiguras.agregarAlPrincipio(figura);
}

void Menu:: agregarTriangulo() {
    double base, altura;
    Figura* figura;
    cout << "   Ingrese base: ";
    cin >> base;
    cout << "\n";
    cout << "   Ingrese altura: ";
    cin >> altura;
    cout << "\n";
    figura = new Triangulo(base, altura);
    figura->calcularArea();
    listaFiguras.agregarAlPrincipio(figura);
}

void Menu:: agregarCirculo() {
    double radio;
    Figura* figura;
    cout << "   Ingrese radio: ";
    cin >> radio;
    cout << "\n";
    figura = new Circulo(radio);
    figura->calcularArea();
    listaFiguras.agregarAlPrincipio(figura);
}
