//
// Created by valentina on 26/5/20.
//

#include "Lista.h"
#include "Figura.h"
#include "Rectangulo.h"
#include "Triangulo.h"
#include "Circulo.h"

Lista:: Lista () {
    primero = 0;
    elementos = 0;
}

Lista:: ~Lista() {
    while (!vacia())
        // Mientras queden elementos, voy siempre sacando el que este en la posicion 1
        sacar(0);
}

// <-------------------- Getters
Dato Lista:: obtenerDato(int posicion) {
    return obtenerNodo(posicion)->obtenerDato();
}

int Lista:: obtenerCantidadElementos() {
    return elementos;
}

Nodo* Lista:: obtenerNodo(int posicion) {
    Nodo *aux = primero;
    int i = 0;
    while (i < posicion) {
        aux = aux->obtenerSiguiente();
        i++;
    }
    return aux;
}

Dato Lista:: obtenerMax() {
    //TODO sobrecargar operador <
    Dato max = obtenerDato(0);
    for (int i = 0; i < elementos; i++) {
        if (max->obtenerArea() < obtenerDato(i)->obtenerArea())
            max = obtenerDato(i);
    }
    return max;
}

Dato Lista:: obtenerMin() {
    //TODO sobrecargar operador >
    Dato min = obtenerDato(0);
    for (int i = 0; i < elementos; i++) {
        if (min->obtenerArea() < obtenerDato(i)->obtenerArea())
            min = obtenerDato(i);
    }
    return min;
}
// -------------------->

bool Lista:: vacia() {
    return primero == 0;
}

void Lista:: agregarAlPrincipio(Dato datoOut) {
    Nodo* nuevoNodo = new Nodo(datoOut);
    Nodo* pAux = primero;
    if (this->vacia())
        primero = nuevoNodo;
    else
    {
        while (pAux->obtenerSiguiente() != 0)
            pAux = pAux->obtenerSiguiente();
        pAux->asignarSiguiente(nuevoNodo);
    }
    elementos++;
}

void Lista:: agregarEnPosicion(Dato datoOut, int posicion) {
    Nodo* nuevoPrimero = new Nodo(datoOut);

    if (posicion == 0) {
        nuevoPrimero->asignarSiguiente(primero);
        primero = nuevoPrimero;
    }
    else {
        Nodo* anterior = obtenerNodo(posicion - 1);
        nuevoPrimero->asignarSiguiente(anterior->obtenerSiguiente());
        anterior->asignarSiguiente(nuevoPrimero);
    }
    elementos++;
}

void Lista:: agregarDato(char tipoDato) {
    Figura* figura;
    double base, altura, radio;
    switch(tipoDato) {
        case RECTANGULO: {
            cout << "   Ingrese base: ";
            cin >> base;
            cout << "\n";
            cout << "   Ingrese altura: ";
            cin >> altura;
            cout << "\n";
            Rectangulo rectangulo(base, altura);
            figura = &rectangulo;
            break;
        }
        case TRIANGULO: {
            cout << "   Ingrese base: ";
            cin >> base;
            cout << "\n";
            cout << "   Ingrese altura: ";
            cin >> altura;
            cout << "\n";
            Triangulo triangulo(base, altura);
            figura = &triangulo;
            break;
        }
        case CIRCULO: {
            cout << "   Ingrese radio: ";
            cin >> radio;
            cout << "\n";
            Circulo circulo(radio);
            figura = &circulo;
            break;
        }
        default:
            cout << "La letra que ingreso no es valida.\n";
    }
    if (tipoDato == RECTANGULO || tipoDato == TRIANGULO || tipoDato == CIRCULO) {
        figura->asignarArea(figura->obtenerArea());
        agregarAlPrincipio(figura);
    }
}

void Lista:: sacar(int posicion) {
    Nodo* borrar = primero;

    if (posicion == 0) {
        primero = borrar->obtenerSiguiente();
    }

    else {
        Nodo* anterior = obtenerNodo(posicion - 1);
        borrar = anterior->obtenerSiguiente();
        anterior->asignarSiguiente(borrar->obtenerSiguiente());
    }
    delete borrar;
    elementos--;
}

void Lista:: mostrarNodos() {
    if (!vacia()) {
        for (int i = 0; i < elementos; i++) {
            obtenerNodo(i)->mostrarNodo();
        }
    }
}

void Lista:: cargarArchivoEnLista(string nombreArchivo) {

    ifstream archivoFiguras(nombreArchivo);

    char figura;
    double base, altura, radio;

    Figura* pFigura;

    Rectangulo rectangulo;
    Triangulo triangulo;
    Circulo circulo;

    if (!archivoFiguras.fail()) {

        while (archivoFiguras >> figura) {

            switch (figura) {

                case RECTANGULO:
                    archivoFiguras >> base;
                    archivoFiguras >> altura;

                    pFigura = &rectangulo;
                    pFigura->asignarBase(base);
                    pFigura->asignarAltura(altura);
                    break;

                case TRIANGULO:
                    archivoFiguras >> base;
                    archivoFiguras >> altura;

                    pFigura = &triangulo;
                    pFigura->asignarBase(base);
                    pFigura->asignarAltura(altura);
                    break;

                case CIRCULO:
                    archivoFiguras >> radio;

                    pFigura = &circulo;
                    pFigura->asignarRadio(radio);
                    break;
            }
            pFigura->asignarArea(pFigura->obtenerArea());
            agregarAlPrincipio(pFigura);
        }
    }

    else cout << "No se pudo abrir el archivo\n";
}