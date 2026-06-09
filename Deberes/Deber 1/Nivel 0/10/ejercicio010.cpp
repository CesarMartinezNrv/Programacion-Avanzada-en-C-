/*
Nombre: César Martínez 
Fecha: 02/07/2026


----------------------------------------------------------------------------------------------------
E010 | Área y perímetro del círculo
Lee el radio de un círculo (double).
Usa PI = 3.14159.
Imprime área y perímetro con 2 decimales.

Fórmulas:
  Área     = PI * radio * radio
  Perímetro = 2 * PI * radio

Entrada:
  5.0
Salida esperada:
  Radio: 5.00
  Area: 78.54
  Perimetro: 31.42
----------------------------------------------------------------------------------------------------
*/

#include <iostream> 
#include <iomanip>

int main(){
const double PI = 3.14159;
double radio{0};

std::cin>>radio;
double area = PI * radio * radio;
double perimetro = 2 * PI * radio;

std::cout<<"Radio: "<<std::fixed<<std::setprecision(2)<<radio<<std::endl;
std::cout<<"Area: "<<std::fixed<<std::setprecision(2)<<area<<std::endl;
std::cout<<"Perimetro: "<<std::fixed<<std::setprecision(2)<<perimetro<<std::endl;


return 0;
}