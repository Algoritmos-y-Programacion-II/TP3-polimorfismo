//
// Created by valentina on 29/5/20.
//

#ifndef TRABAJOPRACTICO3FIGURAS_MENU_H
#define TRABAJOPRACTICO3FIGURAS_MENU_H

#include "Lista.h"

const int SALIR = 0;
const int MIN = SALIR;
const int MAX = 6;

class Menu {
    private:
        int opcion;
        Lista listaFiguras;

    public:
        int obtenerOpcion();
        Lista obtenerLista();
        void cargarDatos(string archFiguras);
        void mostrarBienvenida();
        void mostrarDespedida();

        void mostrarMenu();
        void elegirOpcion();
        void validarRango(int &num, int min = MIN, int max = MAX);
        void abrirSubmenu();
        void obtenerFigura();
        void bajaFigura();
        void agregarFigura();
        void mostrarFiguras();
        void mostrarSupMax();
        void mostrarSupMin();
        void agregarRectangulo();
        void agregarTriangulo();
        void agregarCirculo();
};


#endif //TRABAJOPRACTICO3FIGURAS_MENU_H
