/*
Nombre: César Martínez 
Fecha: 07/06/2026


----------------------------------------------------------------------------------------------------
E087 | Copiar archivo
Lee "estudiantes.txt" y crea una copia en "respaldo.txt".
Reporta cuántas líneas fueron copiadas.

Entrada: (archivo estudiantes.txt)
Salida esperada:
  Copiadas [N] lineas a "respaldo.txt".
----------------------------------------------------------------------------------------------------
*/

#include <iostream>
#include <fstream>
#include <string>

int main(){

std::ifstream estudiantes("estudiantes.txt");
std::ofstream respaldo("respaldo.txt");

int contadorLineas{0};

if(estudiantes.is_open() && respaldo.is_open()){
    std::string linea{""};
    while(std::getline(estudiantes, linea)){
        respaldo<<linea<<std::endl;
        contadorLineas++;
    }
    estudiantes.close();
    respaldo.close();
    std::cout<<"Copiadas "<<contadorLineas<<" lineas a \"respaldo.txt\".";
}
else{
    std::cout<<"ERROR. No se pudo abrir uno de los archivos.";
    return 1;
}
return 0;

}