/*
Nombre: Sebastián Zaragoza
Matrícula: A01286211
*/
#ifndef VERDURA_H
#define VERDURA_H

#include "Producto.h"

class Verdura : public Producto{
    private:
        string temporada;

    public:
        // Metodos Constructores
        Verdura();
        Verdura(string _nombre, int _precio, int _peso, string _temporada);

        string str();
        int calculaTotalPagar();
};

#endif /* VERDURA_H */