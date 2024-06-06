/*
Nombre: Sebastián Zaragoza
Matrícula: A01286211
*/
#include "Pedido.h"

// Metodo Constructor
Pedido::Pedido(){
    for(int index = 0; index < MAX_PROD; index++){
        arrPtrProductos[index] = nullptr;
    }

    cantidad = 0;
}
        
void Pedido::leerArchivo(std::string nombre ){
    fstream archivo;
    string row[5];
    string line, word;

    archivo.open(nombre, ios::in);
    cantidad = 0;

    // lee una línea del archivo y la almacena en line
    while ( getline(archivo, line)) {
        stringstream s(line);
        int iR = 0;

        // extrae caracteres de s  y los almacena en word hasta que encuentra el delimitador ','
        while (getline(s, word, ',')) {
            row[iR++] = word;
        }
        if (row[0] == "V"){ // Verdura
            arrPtrProductos[cantidad] = new Verdura( "", 0, 0, row[1]);
            arrPtrProductos[cantidad]->setNombre(row[2]);
            arrPtrProductos[cantidad]->setPrecio( stoi(row[3]));
            arrPtrProductos[cantidad]->setPeso(stoi(row[4]));
        } else if (row[0] == "C"){ // Combo
            arrPtrProductos[cantidad] = new Combo( row[1], stoi(row[2]), stoi(row[3]), stoi(row[4]));
        }
        else if (row[0] == "P"){ // Producto
            arrPtrProductos[cantidad] = new Producto( row[1], stoi(row[2]), stoi(row[3]));
        }
        // incrementar el contador de apuntadores de arrPtrProductos
        cantidad = cantidad + 1;
    }
    archivo.close();
}

void Pedido::ticketCliente(){
    /* Despliega toda la informacion de todos los productos del arreglo de apuntadores creado
        y además hace la suma de todos los totales a pagar */

        int total = 0, articulos = 0;

        for(int index = 0; index < cantidad; index++){
        cout << arrPtrProductos[index]->str();
        total += arrPtrProductos[index]->calculaTotalPagar();
        articulos++;
    }

    // Fuera del for, se muestra la suma, o, el total a pagar
    cout << to_string(articulos) + " articulos\n"; 
    cout << "Total a pagar $" + to_string(total) + '\n';
}