#include "ArchivoLectura.h"
#include "Rectangulo.h"
#include "Triangulo.h"
#include "Circulo.h"

const char RECTANGULO = 'R';
const char TRIANGULO = 'T';
const char CIRCULO = 'C';

ArchivoLectura:: ArchivoLectura(string ruta) {
    if (existe(ruta)) {
        archivo.open(ruta, ios::out);
        abierto = true;
    }
    else {
        cout << "\n\t-- AVISO -- No se pudo abrir el archivo\n";
        abierto = false;
    }
}

ArchivoLectura:: ~ArchivoLectura() {
    cerrarArchivo();
}

void ArchivoLectura:: cerrarArchivo() {
    archivo.close();
    abierto = false;
}

char ArchivoLectura:: leerCaracter() {
    char c;
    archivo >> c;
    return c;
}

double ArchivoLectura:: leerDouble() {
    double d;
    archivo >> d;
    return d;
}

bool ArchivoLectura:: finalArchivo() {
    return archivo.eof();
}

bool ArchivoLectura:: estaAbierto() {
    return abierto;
}

bool ArchivoLectura:: existe(string ruta) {
    ifstream archivo(ruta);
    return archivo.good();
}

void ArchivoLectura:: cargarDatos(Lista<Dato> &lista) {

    if (abierto) {

        cout << "\n\tCargando datos del archivo \n";
        char figura;
        double primerNro, segundoNro;
        Dato dato;

        while (!finalArchivo()) {
            figura = leerCaracter();
            switch (toupper(figura)) {

                case RECTANGULO:
                    primerNro = leerDouble();
                    segundoNro = leerDouble();
                    dato = new Rectangulo(primerNro, segundoNro);
                    lista.agregarAlFinal(dato);
                    break;

                case TRIANGULO:
                    primerNro = leerDouble();
                    segundoNro = leerDouble();
                    dato = new Triangulo(primerNro, segundoNro);
                    lista.agregarAlFinal(dato);
                    break;

                case CIRCULO:
                    primerNro = leerDouble();
                    dato = new Circulo(primerNro);
                    lista.agregarAlFinal(dato);
                    break;

                default:
                    cout << "\t-- AVISO -- Se encontro un dato incorrecto en el archivo: \"" << figura << "\". Se ignorara y se proseguira con la lectura.\n";
            }
        }
        cout << "\tDatos cargados con exito\n\n";
    }
}