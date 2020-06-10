//
// Created by valentina on 9/6/20.
//

#include "Archivo.h"
#include "Rectangulo.h"
#include "Triangulo.h"
#include "Circulo.h"

const char RECTANGULO = 'R';
const char TRIANGULO = 'T';
const char CIRCULO = 'C';

ArchivoLectura:: ArchivoLectura(string ruta) {
    if (existe(ruta))
        archivo.open(ruta, ios::out);
    else
        cout << "\n\t-- AVISO -- No se pudo abrir el archivo\n";
}

ArchivoLectura:: ~ArchivoLectura() {
    cerrarArchivo();
}

void ArchivoLectura:: cerrarArchivo() {
    archivo.close();
}

char ArchivoLectura:: leerCaracter() {
    char c;
    archivo >> c;
    return c;
}

double ArchivoLectura:: leerReal() {
    double d;
    archivo >> d;
    return d;
}

bool ArchivoLectura:: finalArchivo() {
    return archivo.eof();
}

bool ArchivoLectura:: abierto() {
    return !archivo.fail();
}

bool ArchivoLectura:: existe(string ruta) {
    ifstream archivo(ruta);
    return archivo.good();
}

void ArchivoLectura:: cargarDatos(Lista<Dato> &lista) {

    if (abierto()) {

        cout << "\n\tCargando datos del archivo \n";
        char figura;
        double primerNro, segundoNro;
        Dato dato;

        while (!finalArchivo()) {
            figura = leerCaracter();
            switch (toupper(figura)) {

                case RECTANGULO:
                    primerNro = leerReal();
                    segundoNro = leerReal();
                    dato = new Rectangulo(primerNro, segundoNro);
                    break;

                case TRIANGULO:
                    primerNro = leerReal();
                    segundoNro = leerReal();
                    dato = new Triangulo(primerNro, segundoNro);
                    break;

                case CIRCULO:
                    primerNro = leerReal();
                    dato = new Circulo(primerNro);
                    break;

                default:
                    cout << "\t-- AVISO -- Se encontró un dato inválido en el archivo.";
            }
            lista.agregarAlFinal(dato);
        }
        cout << "\tDatos cargados con exito\n\n";
    }
}