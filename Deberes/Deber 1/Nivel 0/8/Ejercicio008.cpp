/*
Nombre: César Martínez 
Fecha: 02/07/2026


----------------------------------------------------------------------------------------------------
E008 | Ficha personal
Lee el nombre (string), edad (int) y estatura en metros
(double) de una persona. Imprímelos con formato de ficha.

Entrada:
  Luis
  22
  1.75
Salida esperada:
  === Ficha Personal ===
  Nombre  : Luis
  Edad    : 22 años
  Estatura: 1.75 m
----------------------------------------------------------------------------------------------------
*/

#include <iostream> 
#include <string>

int main(){

std::string nombre;
int edad{0};
double estatura{0};

std::cin>>nombre;
std::cout<<std::endl;
std::cin>>edad;
std::cout<<std::endl;
std::cin>>estatura;
std::cout<<std::endl;

std::cout<<"=== FICHA PERSONAL ==="<<std::endl;
std::cout<<"Nombre  : "<<nombre<<std::endl;
std::cout<<"Edad    : "<<edad<<" A"<<char(164)<<"os"<<std::endl; //Se busco valor especifico de char para la ñ en ASCII
std::cout<<"Estatura: "<<estatura<<" m"<<std::endl;

return 0;

}