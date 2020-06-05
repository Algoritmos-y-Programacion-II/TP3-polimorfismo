//
// Created by valentina on 26/5/20.
//

#ifndef TRABAJOPRACTICO3FIGURAS_FIGURA_H
#define TRABAJOPRACTICO3FIGURAS_FIGURA_H

class Figura {

    protected:
        double area;

    // Metodos
    public:
        virtual int calcularArea() = 0;
        virtual void mostrar() = 0;

        // PRE: figura debe ser un objeto valido
        // POST: Sobrecarga el operador < comparando el area de la figura
        bool operator < (Figura &figura);

        // PRE: figura debe ser un objeto valido
        // POST: Sobrecarga el operador > comparando el area de la figura
        bool operator > (Figura &figura);
};

#endif //TRABAJOPRACTICO3FIGURAS_FIGURA_H
