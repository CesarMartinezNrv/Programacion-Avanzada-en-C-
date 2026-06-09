/*
Nombre: César Martínez 
Fecha: 07/06/2026


----------------------------------------------------------------------------------------------------
E088 | Integración — sistema de registro de notas
  1. Lee N nombres y notas del teclado
  2. Guárdalos en "notas.txt"
  3. Los lee de vuelta
  4. Calcula e imprime el promedio
  5. Guarda el promedio al final del archivo

Entrada:
  4
  Ana 88
  Luis 75
  Carla 95
  Pedro 82
Salida esperada:
  Datos guardados en "notas.txt".
  Promedio del grupo: 85.00
  Promedio guardado en el archivo.
----------------------------------------------------------------------------------------------------
*/


#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int main(){

int n{0};
std::cin>>n;

std::ofstream ingresoNotas("notas.txt");

if(ingresoNotas.is_open()){
    for(int i{0}; i < n; i++){
        std::string nombre{""};
        double nota{0};
        std::cin>>nombre;
        std::cin>>nota;
        ingresoNotas<<nombre<<" "<<nota<<std::endl;
    }
    ingresoNotas.close();
    std::cout<<"Datos guardados en \"notas.txt\"."<<std::endl;
}
else{
    std::cout<<"ERROR. No se pudo abrir uno de los archivos.";
    return 1;
}

double totalNotas{0};
std::ifstream lecturaNotas("notas.txt");
if(lecturaNotas.is_open()){
    double nota{0};
    std::string nombre{""};
    while(lecturaNotas>>nombre>>nota){
        totalNotas = totalNotas + nota;
    }
    lecturaNotas.close();
}
else{
    std::cout<<"ERROR. No se pudo abrir uno de los archivos.";
    return 1;
}

double promedio{totalNotas / n};

std::cout<<"Promedio del grupo: "<<std::fixed<<std::setprecision(2)<<promedio<<std::endl;

std::ofstream adicion("notas.txt", std::ios::app);

if(adicion.is_open()){
    adicion<<"Promedio del grupo: "<<std::fixed<<std::setprecision(2)<<promedio<<std::endl;
    adicion.close();
    std::cout<<"Promedio guardado en el archivo.";
}
else{
    std::cout<<"ERROR. No se pudo abrir uno de los archivos.";
    return 1;
}

return 0;
}
