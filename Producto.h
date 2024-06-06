/*
Nombre: Sebastián Zaragoza
Matrícula: A01286211
*/
#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class Producto{
    protected:
        string nombre;
        int precio, peso;

    public:
        // Metodos Constructores 
        Producto();
        Producto(string _nombre, int _precio, int _peso);

        // Metodos Modificadores
        void setNombre(string _nombre);
        void setPrecio(int _precio);
        void setPeso(int _peso);

        // Metodos de Acceso
        string getNombre();
        int getPrecio();
        int getPeso();

        virtual std::string str();
        virtual int calculaTotalPagar();
};

#endif /* PRODUCTO_H */