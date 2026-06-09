/*
Nombre: César Martínez 
Fecha: 06/06/2026


----------------------------------------------------------------------------------------------------
E081 | Escribir en archivo
Crea el archivo "saludo.txt" y escribe estas 3 líneas:
  Linea 1: Hola desde C++
  Linea 2: Aprendiendo archivos
  Linea 3: fstream es poderoso
Imprime en pantalla confirmación de éxito.

Entrada: (ninguna)
Salida en pantalla:
  Archivo "saludo.txt" creado.
  3 lineas escritas.
----------------------------------------------------------------------------------------------------
*/

#include <iostream>
#include <fstream>

int main(){

std::ofstream archivo("saludo.txt");

if(archivo.is_open()){
    archivo<<"Hola desde C++"<<std::endl;
    archivo<<"Aprendiendo archivos"<<std::endl;
    archivo<<"fstream es poderoso"<<std::endl;

    archivo.close();

    std::cout<<"Archivo \"saludo.txt\" creado."<<std::endl;
    std::cout<<"3 lineas escritas.";
}


return 0;

}