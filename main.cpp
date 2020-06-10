/*
  75.41/95.15: Algoritmos y Programacion II - Catedra Juarez - 1°C 2020
  Trabajo Practico Individual N3: Lista Polimorfica de Figuras
  Hecho por Valentina Varela Rodriguez - 105374

  NOTA: Hay dos archivos de texto porque se puede indicar por la linea de comandos el nombre del archivo a abrir.
        En caso de no indicar nada, se utiliza 'figuras.txt'
*/

#include <iostream>

#include "Menu.h"
#include "ArchivoLectura.h"

int main(int argc, char* argv[]) {

    string archFiguras = "figuras.txt";

    if (argc == 2)
        archFiguras = argv[1];

    else if (argc > 2) {
        cout << "-- AVISO -- La cantidad de argumentos es incorrecta.\n"
                "\t\t\tSe utilizara \"figuras.txt\" como nombre del archivo.\n\n";
    }

    ArchivoLectura archivoFiguras(archFiguras);
    Lista<Dato> listaFiguras;

    archivoFiguras.cargarDatos(listaFiguras);

    if (archivoFiguras.estaAbierto()) {
        Menu menu;
        do {
            menu.mostrarOpciones();
            menu.elegirOpcion();
            menu.abrirSubmenu(listaFiguras);
        } while (menu.obtenerOpcion() != SALIR);
    }

    return 0;
}