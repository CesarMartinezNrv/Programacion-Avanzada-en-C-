/*
Nombre: César Martínez 
Fecha: 04/07/2026


----------------------------------------------------------------------------------------------------
E032 | Conversión de temperaturas con funciones
Escribe:
  double celsiusAFahrenheit(double c)
  double fahrenheitACelsius(double f)
  void mostrarConversion(double valor, char tipo)
    si tipo == 'C' convierte a F e imprime
    si tipo == 'F' convierte a C e imprime

Entrada:
  100.0
  C
Salida esperada:
  100.0 C equivale a 212.0 F
----------------------------------------------------------------------------------------------------
*/

#include <iostream>
//Prototipos
double celsiusAFahrenheit(double c);
double fahrenheitACelsius(double f);
void mostrarConversion(double valor, char tipo);



double celsiusAFahrenheit(double c){
    double F = (c * 1.8) + 32;
    return F;
}

double fahrenheitACelsius(double f){
    double C = (f-32)/1.8;
    return C;
}
void mostrarConversion(double valor, char tipo){
    double conversion{0};
    if(tipo == 'c' || tipo == 'C'){
        conversion = celsiusAFahrenheit(valor);
        std::cout<<valor<<" C equivale a "<<conversion<<" F";
    }
    else if(tipo == 'f' || tipo == 'F'){
        conversion = fahrenheitACelsius(valor);
        std::cout<<valor<<" F equivale a "<<conversion<<" C";
    }
}

int main(){
char tipo = ' ';
float valor = 0.0;

std::cin>>valor>>tipo;

mostrarConversion(valor, tipo);
}