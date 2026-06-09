/*
Nombre: César Martínez 
Fecha: 06/06/2026


----------------------------------------------------------------------------------------------------
E058 | Paso por puntero — duplicar
Escribe void duplicar(int* p) que duplique el valor apuntado.
Lee un entero, duplícalo con la función.

Entrada: 7
Salida esperada:
  Antes: 7
  Despues: 14
----------------------------------------------------------------------------------------------------
*/
#include <iostream>

void duplicar (int* p){
    *p = *p + *p;
}


int main(){

int x = 7;
int *p = &x;
std::cout<<"antes: "<<x<<std::endl;
duplicar(p);

std::cout<<"despues: "<<x;

return 0;
}