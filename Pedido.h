/*
Nombre: Sebastián Zaragoza
Matrícula: A01286211
*/

#ifndef PEDIDO_H
#define PEDIDO_H

#include <stdio.h>
#include <sstream>
#include <fstream>
#include "Verdura.h"
#include "Producto.h"
#include "Combo.h"

const int MAX_PROD = 50;

class Pedido{
    private:
        Producto *arrPtrProductos[MAX_PROD];
        int cantidad;

    public:
        // Metodo Constructor
        Pedido();

        void leerArchivo(string nombre);
        void ticketCliente();
};

#endif /*Pedido_H*/