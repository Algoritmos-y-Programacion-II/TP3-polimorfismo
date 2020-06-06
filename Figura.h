#ifndef TRABAJOPRACTICO3FIGURAS_FIGURA_H
#define TRABAJOPRACTICO3FIGURAS_FIGURA_H

class Figura {

    // Atributos
    protected:
        double area;

    // Metodos
    public:

        // PRE: -
        // POST: Devuelve el area calculada para la figura correspondiente
        virtual double calcularArea() = 0;

        // PRE: -
        // POST: Muestra los datos de la figura correspondiente
        virtual void mostrar() = 0;

        // PRE: -
        // POST: Devuelve el area
        double obtenerArea();
};

#endif //TRABAJOPRACTICO3FIGURAS_FIGURA_H
