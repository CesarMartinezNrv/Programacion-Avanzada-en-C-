/*
Nombre: César Martínez 
Fecha: 06/06/2026


----------------------------------------------------------------------------------------------------
E083 | Agregar al archivo (append)
Lee una oración del teclado y agrégala al final del archivo
"registro.txt" sin borrar el contenido anterior (usa ios::app).

PARTE 1 (a mano): escribe qué contendría "registro.txt"
si ejecutaras el programa 3 veces con estas entradas:
  Ejecución 1: "Primera entrada del dia"
  Ejecución 2: "Segunda entrada del dia"
  Ejecución 3: "Tercera entrada del dia"

PARTE 2 (implementar): el programa completo que lee
una oración con getline y la agrega al archivo.

Entrada: Primera entrada del dia
Salida en pantalla:
  Linea agregada a "registro.txt".
----------------------------------------------------------------------------------------------------
*/

#include <iostream>
#include <fstream>
#include <string>

int main(){

std::string oracion{""};

std::getline(std::cin, oracion);

std::ofstream archivo("registro.txt", std::ios::app);

if(archivo.is_open()){
    archivo<<oracion<<std::endl;

    archivo.close();

    std::cout<<"Linea agregada a \"registro.txt\".";
}
return 0;

}