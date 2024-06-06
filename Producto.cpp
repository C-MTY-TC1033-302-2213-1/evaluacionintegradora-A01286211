/*
Nombre: Sebastián Zaragoza
Matrícula: A01286211
*/
#include "Producto.h"

// Metodos Constructores 
Producto::Producto(){
    nombre = "Sebastian";
    precio = 286211;
    peso = 18;
}
Producto::Producto(string _nombre, int _precio, int _peso){
    nombre = _nombre;
    precio = _precio;
    peso = _peso;
}

// Metodos Modificadores
void Producto::setNombre(string _nombre){
    nombre = _nombre;
}
void Producto::setPrecio(int _precio){
    precio = _precio;
}
void Producto::setPeso(int _peso){
    peso = _peso;
}

// Metodos de Acceso
string Producto::getNombre(){
    return nombre;
}
int Producto::getPrecio(){
    return precio;
}
int Producto::getPeso(){
    return peso;
}

string Producto::str(){
    int total;

    total = Producto::calculaTotalPagar();

    return nombre + '-' + '$' + to_string(precio) + '-' + to_string(peso) + '-' + '$' + to_string(total) + "\n";
}
int Producto::calculaTotalPagar(){
    // retorna total a pagar multiplicando el precio por el peso
    return precio * peso;

}