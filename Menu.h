#ifndef TRABAJOPRACTICO3FIGURAS_MENU_H
#define TRABAJOPRACTICO3FIGURAS_MENU_H

#include "Lista/Lista.h"

using namespace std;

const int SALIR = 0;
const int MIN = SALIR;
const int MAX = 6;

class Menu {

    // Atributos
    private:
        int opcion;
        Lista<Figura*> listaFiguras;

    // Metodos
    public:

        // PRE: -
        // POST: Devuelve la opcion
        int obtenerOpcion();

        // PRE: -
        // POST: Devuelve la lista
        Lista<Figura*> obtenerLista();

        // PRE: archFiguras debe ser un string valido
        // POST: Carga los datos del archivo en la lista
        void cargarDatos(string archFiguras);

        // PRE: -
        // POST: Muestra las opciones disponibles
        void mostrarOpciones();

        // PRE: -
        // POST: Le pide al usuario que ingrese por teclado una opcion, y se la asigna al atributo opcion
        void elegirOpcion();

        // PRE: -
        // POST: Si num no es un entero, pide el reingreso hasta que lo sea y luego lo devuelve
        int validarEntero(string &num);

        // PRE: Todos los enteros deben ser validos
        // POST: Si no se cumple que min <= num <= max le pide al usuario que reingrese el valor
        void validarRango(int &num, int min = MIN, int max = MAX);

        // PRE: El atributo opcion debe ser mayor o igual a cero y menor o igual a la cantidad de opciones que tenga
        //      el menu
        // POST: Abre la opcion
        void abrirSubmenu();

        // PRE: -
        // POST: Muestra la figura de la posicion ingresada por el usuario
        void mostrarFigura();

        // PRE: -
        // POST: Saca de la lista la figura de la posicion ingresada por el usuario
        void bajaFigura();

        // PRE: -
        // POST: Le pide al usuario que ingrese que tipo de figura desea agregar, y llama al metodo para crear
        //       y agregar esa figura
        void agregarFigura();

        // PRE: -
        // POST: Lista por pantalla todas las figuras de la lista
        void mostrarFiguras();

        // PRE: -
        // POST: Muestra por pantalla la figura (y sus datos) con la mayor superficie
        void mostrarSupMax();

        // PRE: -
        // POST: Muestra por pantalla la figura (y sus datos) con la menor superficie
        void mostrarSupMin();

    private:

        // PRE: posicion debe ser un entero valido mayor a cero y menor o igual a la cantidad de elementos de la lista
        // POST: Le pide al usuario que ingrese los datos del rectangulo por teclado, y lo agrega a la lista
        void agregarRectangulo(int posicion);

        // PRE: posicion debe ser un entero valido mayor a cero y menor o igual a la cantidad de elementos de la lista
        // POST: Le pide al usuario que ingrese los datos del triangulo por teclado, y lo agrega a la lista
        void agregarTriangulo(int posicion);

        // PRE: posicion debe ser un entero valido mayor a cero y menor o igual a la cantidad de elementos de la lista
        // POST: Le pide al usuario que ingrese los datos del circulo por teclado, y lo agrega a la lista
        void agregarCirculo(int posicion);
};


#endif //TRABAJOPRACTICO3FIGURAS_MENU_H
