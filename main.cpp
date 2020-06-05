/*
  75.41/95.15: Algoritmos y Programacion II - Catedra Juarez - 1°C 2020
  Trabajo Practico Individual N3: Lista Polimorfica de Figuras
  Hecho por Valentina Varela Rodriguez - 105374
*/

#include "Menu.h"
#include "Circulo.h"
#include "Rectangulo.h"
#include <iostream>

int main(int argc, char* argv[]) {

    Lista lista;
    Figura* figura;

    figura = new Circulo(5);
    lista.agregarAlPrincipio(figura);

    figura = new Rectangulo(4, 6);
    lista.agregarAlPrincipio(figura);

    lista.obtenerDato(0)->mostrar();
    lista.obtenerDato(1)->mostrar();

    /*
    Menu menu;
    string archFiguras = "figuras.txt";

    if (argc == 2)
        archFiguras = argv[1];

    else if (argc > 2) {
        cout << "-- AVISO -- La cantidad de argumentos es incorrecta.\n"
                "            Se utilizara \"figuras.txt\" como nombre del archivo.\n\n";
    }

    cout << "Cargando datos del archivo \"" << archFiguras << "\"\n";
    menu.cargarDatos(archFiguras);
    cout << "Datos cargados con exito\n\n";

    do {
        menu.mostrarOpciones();
        menu.elegirOpcion();
        menu.abrirSubmenu();
    } while (menu.obtenerOpcion() != SALIR);
*/
    return 0;
}