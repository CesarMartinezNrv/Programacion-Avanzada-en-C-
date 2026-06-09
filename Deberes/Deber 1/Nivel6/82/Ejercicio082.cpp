/*
Nombre: César Martínez 
Fecha: 06/06/2026


----------------------------------------------------------------------------------------------------
E082 | Leer línea por línea
PARTE 1 (a mano): Escribe el código que crearía un archivo
"poema.txt" con estas 4 líneas exactas:
  Las rosas son rojas
  El mar es profundo
  El codigo es logica
  C++ es poderoso

PARTE 2 (implementar): Escribe el programa completo que:
  1. Crea el archivo "poema.txt" con esas 4 líneas.
  2. Lo lee de vuelta e imprime cada línea numerada.

Entrada: (ninguna)
Salida esperada:
  1: Las rosas son rojas
  2: El mar es profundo
  3: El codigo es logica
  4: C++ es poderoso
----------------------------------------------------------------------------------------------------
*/
#include <iostream>
#include <fstream>
#include <string>

int main(){

std::ofstream archivo("poema.txt");

if(archivo.is_open()){
    archivo<<"Las rosas son rojas"<<std::endl;
    archivo<<"El mar es profundo"<<std::endl;
    archivo<<"El codigo es logica"<<std::endl;
    archivo<<"C++ es poderoso"<<std::endl;

    archivo.close();
}

std::ifstream lectura("poema.txt");

if(lectura.is_open()){
    std::string linea{""};
    int contador{1};

    while(std::getline(lectura, linea)){
        std::cout<<contador<<": "<<linea<<std::endl;
        contador++;
    }

    lectura.close();
}
return 0;

}

