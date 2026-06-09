/*
Nombre: César Martínez 
Fecha: 04/07/2026


----------------------------------------------------------------------------------------------------
E031 | Función con múltiples salidas por referencia
Escribe:
  void calcularCirculo(double radio, double &area, double &per)
que calcule y asigne área y perímetro. PI = 3.14159.
En main lee el radio y muestra los resultados.

Entrada: 7.0
Salida esperada:
  Radio: 7.00
  Area: 153.94
  Perimetro: 43.98
----------------------------------------------------------------------------------------------------
*/

#include <iostream>
#include <iomanip>

void calcularCirculo(double radio, double &area, double &per){
double pi = 3.14159;

area = pi * radio * radio;
per = pi * (2 * radio);
}

int main(){

double radio{0.0}, area{0.0}, per{0.0};

std::cin>>radio;

calcularCirculo(radio, area, per);

std::cout<<"Radio: "<<std::fixed<<std::setprecision(2)<<radio<<std::endl;
std::cout<<"Area: "<<std::fixed<<std::setprecision(2)<<area<<std::endl;
std::cout<<"Perimetro "<<std::fixed<<std::setprecision(2)<<per<<std::endl;

}