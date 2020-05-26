//
// Created by valentina on 26/5/20.
//

#ifndef TRABAJOPRACTICO3FIGURAS_NODO_H
#define TRABAJOPRACTICO3FIGURAS_NODO_H

using namespace std;

typedef int Dato;
const int NULO = 0;

class Nodo {

    // Atributos
    private:
        Dato dato;
        Nodo *pSig;

    // Metodos
    public:

        // Constructores
        Nodo(Dato datoOut = NULO);

        // Setters
        void asignarSiguiente(Nodo *psigOut);

        void asignarDato(Dato datoOut);

        // Getters
        Dato obtenerDato();

        Nodo *obtenerSiguiente();

        // Otros metodos
        void mostrarDato();
};


#endif //TRABAJOPRACTICO3FIGURAS_NODO_H
