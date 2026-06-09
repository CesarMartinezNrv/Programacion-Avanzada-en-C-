/*
Nombre: César Martínez 
Fecha: 02/07/2026


----------------------------------------------------------------------------------------------------
E005 | Módulo y paridad
Lee un número entero. Calcula su módulo con 2 e imprime
si es par o impar. Usa if para el mensaje.

Entrada:
  14
Salida esperada:
  14 % 2 = 0
  El numero es par.

Entrada alternativa:
  7
Salida esperada:
  7 % 2 = 1
  El numero es impar.
----------------------------------------------------------------------------------------------------
*/

#include <iostream> 

int main(){
int num{0};

std::cout<<"Ingrese el valor que se quiera comprobar si es par o impar: ";
std::cin>>num;
std::cout<<std::endl;

if (num % 2 == 0){
    std::cout<<num<<" es un numero par";
}

else if(num % 2 == 1){
    std::cout<<num<<" es un numero impar";
}

return 0;

}
