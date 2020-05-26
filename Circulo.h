//
// Created by valentina on 26/5/20.
//

#ifndef TRABAJOPRACTICO3FIGURAS_CIRCULO_H
#define TRABAJOPRACTICO3FIGURAS_CIRCULO_H

#include "Figura.h"

class Circulo : public Figura {

    // Atributos
    private:
        int radio;

    // Metodos
    public:

        // Descrpcion:
        // PRE:
        // POST:
        Circulo(int radioOut);

        // Descrpcion:
        // PRE:
        // POST:
        int obtenerRadio();

        // Descrpcion:
        // PRE:
        // POST:
        void asignarRadio(int radioOut);

        // Descrpcion:
        // PRE:
        // POST:
        void dibujar();

        // Descrpcion:
        // PRE:
        // POST:
        virtual float obtenerArea();

        // Descrpcion:
        // PRE:
        // POST:
        virtual float obtenerPerimetro();


};


#endif //TRABAJOPRACTICO3FIGURAS_CIRCULO_H
