/*
Nombre: César Martínez 
Fecha: 04/07/2026


----------------------------------------------------------------------------------------------------
E030 | Parámetros por referencia — intercambio
Escribe void intercambiar(int &a, int &b).
Lee dos enteros, intercámbialos e imprime antes y después.

Entrada:
  5
  12
Salida esperada:
  Antes:  a=5, b=12
  Despues: a=12, b=5
----------------------------------------------------------------------------------------------------
*/

#include <iostream>

void intercambiar(int &a, int &b){
    int c{0};

    c = a;
    a = b;
    b = c;
}

int main(){

int a{0}, b{0};


std::cin>>a>>b;

std::cout<<"Antes: a = "<<a<<", b= "<<b<<std::endl;

intercambiar(a,b);

std::cout<<"Depues: a = "<<a<<", b= "<<b<<std::endl;
}