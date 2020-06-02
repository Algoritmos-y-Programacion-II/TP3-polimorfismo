/*
  75.41/95.15: Algoritmos y Programacion II - Catedra Juarez - 1°C 2020
  Trabajo Practico Individual N3: Lista Polimorfica de Figuras
  Hecho por Valentina Varela Rodriguez - 105374
*/

#include "Menu.h"
#include <iostream>

int main(int argc, char* argv[]) {

    Menu menu;
    string archFiguras = "figuras.txt";

    if (argc == 2)
        archFiguras = argv[1];

    else if (argc > 2) {
        cout << "-- AVISO -- La cantidad de argumentos es incorrecta.\n"
                "            Se utilizara \"figuras.txt\" como nombre del archivo.\n\n";
    }

    menu.mostrarBienvenida();

    cout << "Cargando datos...\n";
    menu.cargarDatos(archFiguras);
    cout << "Datos cargados con exito!\n\n";

    do {
        menu.mostrarMenu();
        menu.elegirOpcion();
        menu.abrirSubmenu();
    } while (menu.obtenerOpcion() != SALIR);

    menu.mostrarDespedida();

    return 0;
}