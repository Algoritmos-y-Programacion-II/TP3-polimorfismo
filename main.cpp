#include <iostream>

#include "Menu.h"

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
/*
  PROBANDO POLIMORFISMO

    Figura* figura;
    Rectangulo rectangulo(10, 4);
    Triangulo triangulo(10, 4, 7, 7);
    Circulo circulo(10);

    figura = &rectangulo;
    cout << "Area rectangulo: " << figura->obtenerArea() << "\n";

    figura = &triangulo;
    cout << "Area triangulo: " << figura->obtenerArea() << "\n";

    figura = &circulo;
    cout << "Area circulo: " << figura->obtenerArea() << "\n";
*/
    return 0;
}