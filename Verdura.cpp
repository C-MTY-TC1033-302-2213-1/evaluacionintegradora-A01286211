#include "Verdura.h"

// Metodos Constructores
Verdura::Verdura() : Producto(){
    temporada = "Invierno";
}
Verdura::Verdura(string _nombre, int _precio, int _peso, string _temporada)
        : Producto(_nombre, _precio, _peso){

        temporada = _temporada;
}

string Verdura::str(){
    int total;

    total = Verdura::calculaTotalPagar();

    return nombre + '-' + '$' + to_string(precio) + '-' + to_string(peso) + '-' + '$' + to_string(total) + '-' + temporada + "\n";

}
int Verdura::calculaTotalPagar(){
    // Si temporada es Junio, total es precio x peso x 2
    if (temporada == "Junio"){
        return precio * peso * 2;
    } // Si temporada es Regalado total es precio x peso x 3
    else if (temporada == "Regalado"){
        return precio * peso * 3;
    } // Cualquier otro valor retorna precio * peso * 10
    else{
        return precio * peso * 10;
    } 
} 