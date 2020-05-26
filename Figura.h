//
// Created by valentina on 26/5/20.
//

#ifndef TRABAJOPRACTICO3FIGURAS_FIGURA_H
#define TRABAJOPRACTICO3FIGURAS_FIGURA_H


class Figura {

    // Atributos
    private:
        int area, perimetro;

    // Metodos
    public:
        Figura(int areaOut = 0, int perimetroOut = 0);
        virtual float obtenerArea() = 0;
        virtual float obtenerPerimetro() = 0;
        virtual void dibujar() = 0;
};


#endif //TRABAJOPRACTICO3FIGURAS_FIGURA_H
