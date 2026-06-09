/*
Nombre: César Martínez 
Fecha: 07/06/2026


----------------------------------------------------------------------------------------------------
E086 | Buscar en archivo
REQUISITO PREVIO: ejecuta E085 primero para generar
el archivo "estudiantes.txt". Sin ese archivo el programa
no puede abrir nada y fallará.

Lee el archivo "estudiantes.txt" (generado en E085).
Pide un nombre al usuario y búscalo línea por línea.

Entrada: Luis
Salida esperada:
  Estudiante encontrado: Luis - 78.00

Entrada alternativa: Pedro
Salida esperada:
  Estudiante no encontrado.
----------------------------------------------------------------------------------------------------
*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int main(){

std::string nombre_buscado;
std::cin>>nombre_buscado;

std::ifstream buscarNombre("estudiantes.txt");

bool encontrado{false};

if(buscarNombre.is_open()){
    std::string nombre{""};
    double nota{0};

    while(buscarNombre>>nombre>>nota){
        if(nombre == nombre_buscado){
            std::cout<<"Estudiante encontrado: "<<nombre<<" - "<<std::fixed<<std::setprecision(2)<<nota;
            encontrado = true;
            break;
        }
    }

    buscarNombre.close();

    if(encontrado == false){
        std::cout<<"Estudiante no encontrado.";
    }
}

return 0;

}