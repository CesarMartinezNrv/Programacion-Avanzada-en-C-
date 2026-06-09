/*
Nombre: César Martínez 
Fecha: 02/07/2026


----------------------------------------------------------------------------------------------------
E007 | Conversión de temperatura
Lee una temperatura en Celsius (double).
Conviértela a Fahrenheit: F = C * 9.0/5.0 + 32
Muestra el resultado con 1 decimal.

Entrada:
  100.0
Salida esperada:
  100.0 C = 212.0 F
----------------------------------------------------------------------------------------------------
*/

#include <iostream> 

int main(){
double celsius{0.0};
std::cin>>celsius;
std::cout<<std::endl;
double fahremheit = ((celsius * 9.0) / 5.0) + 32;

std::cout<<celsius<<" C = "<<fahremheit<<" F";

return 0;

}