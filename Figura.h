#ifndef TRABAJOPRACTICO3FIGURAS_FIGURA_H
#define TRABAJOPRACTICO3FIGURAS_FIGURA_H

class Figura {

    protected:
        double area;

    // Metodos
    public:
        virtual double calcularArea() = 0;
        virtual void mostrar() = 0;

        double obtenerArea();
};

#endif //TRABAJOPRACTICO3FIGURAS_FIGURA_H
