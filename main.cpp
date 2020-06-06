/*
  75.41/95.15: Algoritmos y Programacion II - Catedra Juarez - 1°C 2020
  Trabajo Practico Individual N3: Lista Polimorfica de Figuras
  Hecho por Valentina Varela Rodriguez - 105374

  NOTA: Hay dos archivos de prueba porque se puede indicar por la linea de comandos el nombre del archivo a abrir.
        En caso de no indicar nada, se utiliza 'figuras.txt'
*/

#include <iostream>
#include <fstream>

#include "Menu.h"

int main(int argc, char* argv[]) {

    Menu menu;
    string archFiguras = "figuras.txt";

    if (argc == 2)
        archFiguras = argv[1];

    else if (argc > 2) {
        cout << "-- AVISO -- La cantidad de argumentos es incorrecta.\n"
                "\t\t\tSe utilizara \"figuras.txt\" como nombre del archivo.\n\n";
    }

    ifstream archivoFiguras(archFiguras);

    if (!archivoFiguras.fail()) {

        cout << "\n\tCargando datos del archivo \"" << archFiguras << "\"\n";
        menu.cargarDatos(archivoFiguras);
        cout << "\tDatos cargados con exito\n\n";

        do {
            menu.mostrarOpciones();
            menu.elegirOpcion();
            menu.abrirSubmenu();
        } while (menu.obtenerOpcion() != SALIR);

    } else
        cout << "\tNo se pudo abrir el archivo.\n";

    return 0;
}