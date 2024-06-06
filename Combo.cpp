/*
Nombre: Sebastián Zaragoza
Matrícula: A01286211
*/
#include "Combo.h"

//Metodos Constructores
Combo::Combo() : Producto(){
    clave = 0;
}
Combo::Combo(string _nombre, int _precio, int _peso, int _clave)
        : Producto(_nombre, _precio, _peso){
    clave = _clave;
}

string Combo::str(){
    int total;

    total = Combo::calculaTotalPagar();

    return nombre + '-' + '$' + to_string(precio) + '-' + to_string(peso) + '-' + '$' + to_string(total) + '-' + to_string(clave) + "\n";
   
}
int Combo::calculaTotalPagar(){
// Se calcula haciendo precio x peso x clave
    int total;
    int totalPagar = precio * peso * clave;
    int descuento;

    // Si clave es 1, se descuenta 25%
    if(clave == 1){
        descuento = (totalPagar/100) * 25;
        total = totalPagar - descuento;
    } // Si clave es 2, se descuenta 30%
    else if(clave == 2){
        descuento = (totalPagar/100) * 30;
        total = totalPagar - descuento;
    }
    else{
        total = totalPagar;
    }

    return total;
}