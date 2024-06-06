/*
Nombre: Sebastián Zaragoza
Matrícula: A01286211
*/
#ifndef COMBO_H
#define COMBO_H

#include "Producto.h"

class Combo : public Producto{
    private:
    int clave;

    public:
        //Metodos Constructores
        Combo();
        Combo(string _nombre, int _precio, int _peso, int _clave);

        string str();
        int calculaTotalPagar(); 
};

#endif /* COMBO_H */