#ifndef TRABAJOPRACTICO3FIGURAS_MENU_H
#define TRABAJOPRACTICO3FIGURAS_MENU_H

#include "Lista.h"
#include "Objeto.h"

using namespace std;

const int SALIR = 0;
const int MIN = SALIR;
const int MAX = 6;

typedef Figura* Dato;

class Menu : public Objeto {

    // Atributos
    private:
        int opcion;

    // Metodos
    public:

        // PRE: -
        // POST: Devuelve la opcion
        int obtenerOpcion();

        // PRE: -
        // POST: Muestra las opciones disponibles
        void mostrarOpciones();

        // PRE: -
        // POST: Le pide al usuario que ingrese por teclado una opcion, y se la asigna al atributo opcion
        void elegirOpcion();

        // PRE: El atributo opcion debe ser mayor o igual a cero y menor o igual a la cantidad de opciones que tenga
        //      el menu
        // POST: Abre la opcion
        void abrirSubmenu(Lista<Dato> &lista);

        // PRE: -
        // POST: Muestra la figura de la posicion ingresada por el usuario
        void mostrarFigura(Lista<Dato> &lista);

        // PRE: -
        // POST: Saca de la lista la figura de la posicion ingresada por el usuario
        void bajaFigura(Lista<Dato> &lista);

        // PRE: -
        // POST: Le pide al usuario que ingrese que tipo de figura desea agregar, y llama al metodo para crear
        //       y agregar esa figura
        void agregarFigura(Lista<Dato> &lista);

        // PRE: -
        // POST: Lista por pantalla todas las figuras de la lista
        void mostrarFiguras(Lista<Dato> &lista);

        // PRE: -
        // POST: Muestra por pantalla la figura (y sus datos) con la mayor superficie
        void mostrarSupMax(Lista<Dato> &lista);

        // PRE: -
        // POST: Muestra por pantalla la figura (y sus datos) con la menor superficie
        void mostrarSupMin(Lista<Dato> &lista);

    private:

        // PRE: -
        // POST: Le pide al usuario que ingrese un tipo de figura y la devuelve
        char pedirTipoFigura();

        // PRE: posicion debe ser un entero valido mayor a cero y menor o igual a la cantidad de elementos de la lista
        // POST: Le pide al usuario que ingrese los datos del rectangulo por teclado y lo agrega a la lista
        void agregarRectangulo(Lista<Dato> &lista);

        // PRE: posicion debe ser un entero valido mayor a cero y menor o igual a la cantidad de elementos de la lista
        // POST: Le pide al usuario que ingrese los datos del triangulo por teclado y lo agrega a la lista
        void agregarTriangulo(Lista<Dato> &lista);

        // PRE: posicion debe ser un entero valido mayor a cero y menor o igual a la cantidad de elementos de la lista
        // POST: Le pide al usuario que ingrese los datos del circulo por teclado y lo agrega a la lista
        void agregarCirculo(Lista<Dato> &lista);
};


#endif //TRABAJOPRACTICO3FIGURAS_MENU_H
