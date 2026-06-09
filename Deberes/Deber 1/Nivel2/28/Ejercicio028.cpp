/*
Nombre: César Martínez 
Fecha: 04/07/2026


----------------------------------------------------------------------------------------------------
E028 | Función con múltiples parámetros
Escribe double calcularIMC(double peso, double altura)
que retorne IMC = peso / (altura * altura).
Lee peso y altura e imprime el IMC con 2 decimales.

Entrada:
  70.0
  1.75
Salida esperada:
  IMC: 22.86
----------------------------------------------------------------------------------------------------
*/

#include <iostream>
#include <iomanip>

double calcularIMC(double peso, double altura){
    double IMC = peso / (altura * altura);
    return IMC;
}

int main (){

double peso, altura;
std::cin>>peso;
std::cin>>altura;

double IMC = calcularIMC(peso, altura);

std::cout<<"IMC: "<<std::fixed<<std::setprecision(2)<<IMC;

return 0;
}