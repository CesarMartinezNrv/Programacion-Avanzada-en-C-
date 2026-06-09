/*
Nombre: César Martínez 
Fecha: 06/06/2026


----------------------------------------------------------------------------------------------------
E060 | Intercambio con punteros
Escribe void intercambiar(int* a, int* b) usando punteros.
Lee dos enteros e intercámbialos.

Entrada:
  15
  40
Salida esperada:
  Antes:  a=15, b=40
  Despues: a=40, b=15
----------------------------------------------------------------------------------------------------
*/

void intercambiar (int* a, int* b){
    int c = *a;
    *a = *b;
    *b = c;
}

#include <iostream>

int main(){
int a{15}, b {40};

std::cout<<"Antes a ="<<a<<" b = "<<b<<std::endl;
int* a_apuntador = &a;
int* b_apuntador= &b;

intercambiar(a_apuntador, b_apuntador);

std::cout<<"Depues a ="<<a<<" b = "<<b<<std::endl;

}
