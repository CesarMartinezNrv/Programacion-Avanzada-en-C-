/*
Nombre: César Martínez 
Fecha: 02/07/2026
Ejercicio 001


----------------------------------------------------------------------------------------------------
E002 | Variables enteras y operadores
Declara dos variables enteras: a = 15 y b = 7.
Calcula e imprime su suma, resta, producto y cociente entero.

Entrada: (ninguna)
Salida esperada:
  Suma: 22
  Resta: 8
  Producto: 105
  Cociente: 2
----------------------------------------------------------------------------------------------------
*/

#include <iostream> 

int main (){
int a{15}, b{7};

std:: cout<<"La suma de a y b es: "<<a+b<<std::endl;
std:: cout<<"La resta de a y b es: "<<a-b<<std::endl;
std:: cout<<"El producto de a y b es: "<<a*b<<std::endl;
std:: cout<<"El cociente de a y b es: "<<a/b<<std::endl;

return 0;
}