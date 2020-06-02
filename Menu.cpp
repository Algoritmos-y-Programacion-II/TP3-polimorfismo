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

    ifstream archivoFiguras(archFiguras);

    char figura;
    double base, altura, radio;
    Dato dato;

    if (!archivoFiguras.fail()) {

        while (archivoFiguras >> figura) {

            switch (figura) {

                case RECTANGULO:
                    archivoFiguras >> base;
                    archivoFiguras >> altura;
                    dato = new Rectangulo(base, altura); // Leak definetly lost
                    cout << "Dato perdido: " << dato << endl;
                    break;

                case TRIANGULO:
                    archivoFiguras >> base;
                    archivoFiguras >> altura;
                    dato = new Triangulo(base, altura); // Leak definetly lost
                    cout << "Dato perdido: " << dato << endl;
                    break;

                case CIRCULO:
                    archivoFiguras >> radio;
                    dato = new Circulo(radio); // Leak definetly lost
                    cout << "Dato perdido: " << dato << endl;
                    break;
            }
            dato->calcularArea();
            listaFiguras.agregarAlPrincipio(dato);
        }
        listaFiguras.mostrarNodos();
    } else cout << "No se pudo abrir el archivo\n";
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

    cout << "- - - - - - - - - Obtener - - - - - - - -\n";

    if (listaFiguras.obtenerCantidadElementos() > 0) {

        string nombreFigura;
        int posicion, min = 1, max = listaFiguras.obtenerCantidadElementos();

        cout << "Ingrese una posicion entre " << min << " y " << max << ": ";
        cin >> posicion;
        cout << "\n";

        validarRango(posicion, min, max);
        listaFiguras.obtenerDato(posicion - 1)->mostrar();
    }
    cout << "- - - - - - - - - - - - - - - - - - - - -\n";
}

void Menu:: bajaFigura() {

    cout << "- - - - - - - - -  Baja - - - - - - - - -\n";
    if (listaFiguras.obtenerCantidadElementos() > 0) {

        int posicion;

        mostrarFiguras();

        cout << "Ingrese el numero del elemento que desea dar de baja [1 - " << listaFiguras.obtenerCantidadElementos() << "]: ";
        cin >> posicion;

        validarRango(posicion, 1, listaFiguras.obtenerCantidadElementos());
        listaFiguras.sacar(posicion - 1);

        cout << "Se sacó el elemento de la posicion " << posicion << " con exito.\n";
    } else cout << "No se pueden sacar elementos porque la lista esta vacia\n";
    cout << "- - - - - - - - - - - - - - - - - - - - -\n";
}

void Menu:: agregarFigura() {

    cout << "- - - - - - - - -  Alta - - - - - - - - -\n";

    char tipoFigura;
    int posicion;

    cout << "Ingrese el tipo de figura que desea\n"
            "   - [R]ectangulo\n"
            "   - [T]riangulo\n"
            "   - [C]irculo\n";

    cin >> tipoFigura;

    cout << "Ingrese la posicion en la que desea insertar la nueva figura [1 - " << listaFiguras.obtenerCantidadElementos() << "]: ";
    cin >> posicion;
    validarRango(posicion, 1, listaFiguras.obtenerCantidadElementos());

    switch(toupper(tipoFigura)) {

        case RECTANGULO:
            agregarRectangulo(posicion);
            break;

        case TRIANGULO:
            agregarTriangulo(posicion);
            break;

        case CIRCULO:
            agregarCirculo(posicion);
            break;

        default:
            cout << "La letra que ingreso no es valida.\n";
    }
    cout << "- - - - - - - - - - - - - - - - - - - - -\n";
}

void Menu:: mostrarFiguras() {
    cout << "- - - - - - - - Figuras - - - - - - - - -\n";
    for (int i = 0; i < listaFiguras.obtenerCantidadElementos(); i ++) {
        cout << i+1 << ". ";
        listaFiguras.obtenerDato(i)->mostrar();
        cout << "\n";
    }
    cout << "- - - - - - - - - - - - - - - - - - - - -\n";
}

void Menu:: mostrarSupMax() {
    cout << "- - - - - - Mayor  superficie - - - - - -\n";
    listaFiguras.obtenerMax()->mostrar();;
    cout << "- - - - - - - - - - - - - - - - - - - - -\n";
}

void Menu:: mostrarSupMin() {
    cout << "- - - - - - Menor  superficie - - - - - -\n";
    listaFiguras.obtenerMin()->mostrar();
    cout << "- - - - - - - - - - - - - - - - - - - - -\n";
}


void Menu:: agregarRectangulo(int posicion) {

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
    listaFiguras.agregarEnPosicion(figura, posicion);
}

void Menu:: agregarTriangulo(int posicion) {

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
    listaFiguras.agregarEnPosicion(figura, posicion);
}

void Menu:: agregarCirculo(int posicion) {

    double radio;
    Figura* figura;

    cout << "   Ingrese radio: ";
    cin >> radio;
    cout << "\n";

    figura = new Circulo(radio);
    figura->calcularArea();
    listaFiguras.agregarEnPosicion(figura, posicion);
}
