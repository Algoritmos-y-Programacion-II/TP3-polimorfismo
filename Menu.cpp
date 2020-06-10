
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
    opcion = validacion.validarEntero(strPos);
    validacion.validarRango(opcion, MIN, MAX);
}

void Menu:: abrirSubmenu(Lista<Figura*> &lista) {

    switch(opcion) {

        case OBTENER_FIGURA:
            mostrarFigura(lista);
            break;

        case BAJA:
            bajaFigura(lista);
            break;

        case ALTA:
            agregarFigura(lista);
            break;

        case MOSTRAR:
            mostrarFiguras(lista);
            break;

        case SUP_MAX:
            mostrarSupMax(lista);
            break;

        case SUP_MIN:
            mostrarSupMin(lista); break;
    }
}

void Menu:: mostrarFigura(Lista<Figura*> &lista) {

    cout << "\t- - - - - - - - - Mostrar - - - - - - - -\n";

    if (!lista.vacia()) {

        string nombreFigura, strPos;
        int posicion, min = 1, max = lista.obtenerCantidadElementos();

        cout << "\tIngrese una posicion entre " << min << " y " << max << ": ";
        cin >> strPos;
        cout << "\n";
        posicion = validacion.validarEntero(strPos);

        validacion.validarRango(posicion, min, max);
        lista.obtenerDato(posicion - 1)->mostrar();
    }
    cout << "\t- - - - - - - - - - - - - - - - - - - - -\n";
}

void Menu:: bajaFigura(Lista<Figura*> &lista) {

    cout << "\t- - - - - - - - -  Baja - - - - - - - - -\n";
    if (!lista.vacia()) {

        string strPos;
        mostrarFiguras(lista);

        cout << "\tIngrese el numero del elemento que desea dar de baja [1 - " << lista.obtenerCantidadElementos() << "]: ";
        cin >> strPos;

        int posicion = validacion.validarEntero(strPos);
        validacion.validarRango(posicion, 1, lista.obtenerCantidadElementos());

        lista.sacar(posicion - 1);

        cout << "\tSe saco el elemento de la posicion " << posicion << " con exito.\n";

    }
    else cout << "\tNo se pueden sacar elementos porque la lista esta vacia\n";
    cout << "\t- - - - - - - - - - - - - - - - - - - - -\n";
}

void Menu:: agregarFigura(Lista<Figura*> &lista) {

    cout << "\t- - - - - - - - -  Alta - - - - - - - - -\n";

    cout << "\t-- AVISO -- La figura se agregará al final de la lista\n";
    //int posicion = pedirPosicion(lista);
    char tipoFigura = pedirTipoFigura();

    string strBase, strAltura, strRadio;

    switch(toupper(tipoFigura)) {

        case RECTANGULO: {
            agregarRectangulo(lista);
            break;
        }
        case TRIANGULO: {
            agregarTriangulo(lista);
            break;
        }
        case CIRCULO: {
            agregarCirculo(lista);
            break;
        }
        default:
            cout << "\tLa letra que ingreso no es valida.\n";
    }
    cout << "\t- - - - - - - - - - - - - - - - - - - - -\n";
}

void Menu:: mostrarFiguras(Lista<Figura*> &lista) {
    cout << "\t- - - - - - - - Figuras - - - - - - - - -\n";

    if (!lista.vacia()) {

        for (int i = 0; i < lista.obtenerCantidadElementos(); i++) {
            cout << "\t" << i + 1 << ". ";
            lista.obtenerDato(i)->mostrar();
            cout << "\n";
        }
    }
    else cout << "\tNo hay figuras para mostrar porque la lista esta vacia\n";
    cout << "\t- - - - - - - - - - - - - - - - - - - - -\n";
}

void Menu:: mostrarSupMax(Lista<Figura*> &lista) {
    cout << "\t- - - - - - Mayor  superficie - - - - - -\n";

    if (!lista.vacia()) {

        Figura* max = lista.obtenerDato(0);

        for (int i = 0; i < lista.obtenerCantidadElementos(); i++) {

            if (max->obtenerArea() < lista.obtenerDato(i)->obtenerArea())
                max = lista.obtenerDato(i);
        }
        max->mostrar();
    }
    else cout << "\tNo hay figuras para mostrar porque la lista esta vacia\n";

    cout << "\t- - - - - - - - - - - - - - - - - - - - -\n";
}

void Menu:: mostrarSupMin(Lista<Figura*> &lista) {
    cout << "\t- - - - - - Menor  superficie - - - - - -\n";

    if (!lista.vacia()) {

        Figura* min = lista.obtenerDato(0);

        for (int i = 0; i < lista.obtenerCantidadElementos(); i++) {

            if (min->obtenerArea() > lista.obtenerDato(i)->obtenerArea())
                min = lista.obtenerDato(i);
        }
        min->mostrar();
    }
    else cout << "\tNo hay figuras para mostrar porque la lista esta vacia\n";

    cout << "\t- - - - - - - - - - - - - - - - - - - - -\n";
}

char Menu:: pedirTipoFigura() {

    char tipoFigura;

    cout << "\n\tIngrese el tipo de figura que desea\n"
            "\t\t- [R]ectangulo\n"
            "\t\t- [T]riangulo\n"
            "\t\t- [C]irculo\n";
    cout << "\t";
    cin >> tipoFigura;
    validacion.validarChar(tipoFigura);

    return tipoFigura;
}

void Menu:: agregarRectangulo(Lista<Figura*> &lista) {

    string strBase, strAltura;

    cout << "\tIngrese base: ";
    cin >> strBase;
    double base = validacion.validarDouble(strBase);
    cout << "\tIngrese altura: ";
    cin >> strAltura;
    double altura = validacion.validarDouble(strAltura);
    cout << "\n";

    Figura* figura = new Rectangulo(base, altura);
    lista.agregarAlFinal(figura);
}

void Menu:: agregarTriangulo(Lista<Figura*> &lista) {

    string strBase, strAltura;

    cout << "\tIngrese base: ";
    cin >> strBase;
    double base = validacion.validarDouble(strBase);
    cout << "\tIngrese altura: ";
    cin >> strAltura;
    double altura = validacion.validarDouble(strAltura);
    cout << "\n";

    Figura* figura = new Triangulo(base, altura);
    lista.agregarAlFinal(figura);
}

void Menu:: agregarCirculo(Lista<Figura*> &lista) {

    string strRadio;

    cout << "\tIngrese radio: ";
    cin >> strRadio;
    double radio = validacion.validarDouble(strRadio);
    cout << "\n";

    Figura* figura = new Circulo(radio);
    lista.agregarAlFinal(figura);
}
