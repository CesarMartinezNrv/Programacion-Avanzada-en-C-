/*
Nombre: César Martínez 
Fecha: 07/06/2026


----------------------------------------------------------------------------------------------------
E085 | Guardar y leer registros
Lee N estudiantes (nombre y nota) del teclado.
Guárdalos en "estudiantes.txt". Luego léelos e imprímelos.

Entrada:
  3
  Ana 90
  Luis 78
  Carla 85
Salida esperada:
  Guardados 3 registros en "estudiantes.txt".
  Leyendo archivo:
  Ana - 90.00
  Luis - 78.00
  Carla - 85.00
----------------------------------------------------------------------------------------------------
*/


#include <iostream>
#include <fstream>
#include <string>

int main(){

int n;
std::cin>>n;

std::ofstream estudiantes("estudiantes.txt");
if(estudiantes.is_open()){
    for(int i{0}; i < n; i++){
        std::string nombre;
        double calificacion;
        std::cin>>nombre;
        std::cin>>calificacion;
        estudiantes<<nombre<<" "<<calificacion<<std::endl;
    }
    std::cout<<"Guardados "<<n<<" registros en \"estudiantes.txt\". "<<std::endl;
    estudiantes.close();
}

std::ifstream leerestudiantes("estudiantes.txt");
if(leerestudiantes.is_open()){
    std::cout<<"Leyendo archivo..."<<std::endl;
    std::string line;
    while(std::getline(leerestudiantes, line)){
        std::cout<<line<<std::endl;
    }
    leerestudiantes.close();
}

return 0;
}



