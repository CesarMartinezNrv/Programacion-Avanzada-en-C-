/*
Nombre: César Martínez 
Fecha: 06/06/2026


----------------------------------------------------------------------------------------------------
E061 | Longitud de cadena con puntero
En C++ existe el tipo char[] (arreglo de caracteres al estilo C),
distinto de string. Se declara así:
  char palabra[100];   // espacio para hasta 99 caracteres + '\0'
  cin >> palabra;      // lee hasta el primer espacio

El último carácter es siempre '\0' (caracter nulo) que marca el fin.
Un puntero puede recorrerlo hasta encontrar '\0'.

Lee una palabra con char array.
Calcula su longitud recorriendo el puntero hasta '\0'.
NO uses strlen ni string::length().

  char* p = palabra;
  int len = 0;
  while (*p != '\0') { len++; p++; }

Entrada: programacion
Salida esperada:
  Palabra: programacion
  Longitud (manual): 12
----------------------------------------------------------------------------------------------------
*/

#include <iostream>

int main(){

char palabra[100]{};

std::cin>>palabra;

char* p{palabra};
int len{0};

while(*p != '\0'){
    len++;
    p++;
}

std::cout<<"Palabra: "<<palabra<<std::endl;
std::cout<<"Longitud (manual): "<<len;

return 0;

}