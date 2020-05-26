#include <iostream>
#include <fstream>

#include "Lista.h"
#include "Figura.h"
#include "Rectangulo.h"
#include "Triangulo.h"
#include "Circulo.h"

int main(int argc, char* argv[]) {

    string archivoFiguras = "figuras.txt";

    if (argc == 2)
        archivoFiguras = argv[1];
    else if (argc > 2) {
        cout << "-- AVISO -- La cantidad de argumentos es incorrecta.\n"
                "            Recuerde que si el nombre del archivo tiene espacios debe escribir todo entre comillas, "
                "por ejemplo si el nombre es:\n"
                "            archivo con figuras.txt\n"
                "            en la terminal deberia escribir\n"
                "            \"archivo con figuras.txt\"\n"
                "-- AVISO -- Se utilizara \"figuras.txt\" como nombre del archivo.\n\n";
    }

    ofstream archFiguras(archivoFiguras);

    Figura* figura;
    Rectangulo rectangulo(10, 4);
    Triangulo triangulo(10, 4, 7, 7);
    Circulo circulo(10);

    figura = &rectangulo;
    cout << "Area rectangulo: " << figura->obtenerArea() << "\n";
    cout  << "Perimetro rectangulo: " << figura->obtenerPerimetro() << "\n\n";

    figura = &triangulo;
    cout << "Area triangulo: " << figura->obtenerArea() << "\n";
    cout  << "Perimetro triangulo: " << figura->obtenerPerimetro() << "\n\n";

    figura = &circulo;
    cout << "Area circulo: " << figura->obtenerArea() << "\n";
    cout  << "Perimetro circulo: " << figura->obtenerPerimetro() << "\n\n";

    return 0;
}
