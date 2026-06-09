/*
Nombre: César Martínez 
Fecha: 02/07/2026


----------------------------------------------------------------------------------------------------
E009 | Promedio de tres números
Lee tres enteros e imprime su promedio con 2 decimales.
Recuerda: para obtener decimal, usa (double) al dividir.

Entrada:
  10
  7
  15
Salida esperada:
  Promedio: 10.67
----------------------------------------------------------------------------------------------------
*/

#include <iostream> 
#include <iomanip>

int main(){

int a{0}, b{0}, c{0};

std::cin>>a>>b>>c;
std::cout<<std::endl;

std::cout<<"Promedio: "<<std::fixed<<std::setprecision(2)<<(a+b+c)/3.0;

return 0;
}