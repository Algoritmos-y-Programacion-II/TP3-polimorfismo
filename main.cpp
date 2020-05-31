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
    Lista listaFiguras;
    Figura* figura;

    Rectangulo rectangulo(10, 5);
    figura = &rectangulo;
    figura->asignarArea(figura->obtenerArea());
    listaFiguras.agregarAlPrincipio(figura);

    Triangulo triangulo(4, 3);
    figura = &triangulo;
    figura->asignarArea(figura->obtenerArea());
    listaFiguras.agregarAlPrincipio(figura);

    Circulo circulo(100);
    figura = &circulo;
    figura->asignarArea(figura->obtenerArea());
    listaFiguras.agregarAlPrincipio(figura);

    for (int i = 0; i <listaFiguras.obtenerCantidadElementos(); i++) {
        cout << i+1 << ". " << listaFiguras.obtenerDato(i);
    }
*/
    return 0;
}