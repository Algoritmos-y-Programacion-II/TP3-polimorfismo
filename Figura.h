//
// Created by valentina on 26/5/20.
//

#ifndef TRABAJOPRACTICO3FIGURAS_FIGURA_H
#define TRABAJOPRACTICO3FIGURAS_FIGURA_H

class Figura {

    // Metodos
    public:
        virtual void calcularArea() = 0;
        virtual void mostrar() = 0;
        virtual double obtenerArea() = 0;
        bool operator < (Figura &figura);
        bool operator > (Figura &figura);
};

#endif //TRABAJOPRACTICO3FIGURAS_FIGURA_H
