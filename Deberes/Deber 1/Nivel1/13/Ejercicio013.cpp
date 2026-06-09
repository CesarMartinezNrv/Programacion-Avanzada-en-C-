/*
Nombre: César Martínez 
Fecha: 02/07/2026


----------------------------------------------------------------------------------------------------
E013 | switch — nombre del mes
Lee un número de mes (1-12) e imprime su nombre.
Si está fuera de rango, imprime "Mes invalido".

Entrada: 7
Salida esperada:
  Mes 7: Julio
----------------------------------------------------------------------------------------------------
*/

#include <iostream>

int main(){

int numero_mes{0};

std::cin>>numero_mes;

switch (numero_mes){
case 1:
    std::cout<<"Mes "<<numero_mes<<": Enero";
    break;
case 2:
    std::cout<<"Mes "<<numero_mes<<": Febrero";
    break;
case 3:
    std::cout<<"Mes "<<numero_mes<<": Marzo";
    break;
case 4:
    std::cout<<"Mes "<<numero_mes<<": Abril";
    break;
case 5:
    std::cout<<"Mes "<<numero_mes<<": Mayo";
    break;
case 6:
    std::cout<<"Mes "<<numero_mes<<": Junio";
    break;
case 7:
    std::cout<<"Mes "<<numero_mes<<": Julio";
    break;
case 8:
    std::cout<<"Mes "<<numero_mes<<": Agosto";
    break;
case 9:
    std::cout<<"Mes "<<numero_mes<<": Septiembre";
    break;
case 10:
    std::cout<<"Mes "<<numero_mes<<": Octubre";
    break;
case 11:
    std::cout<<"Mes "<<numero_mes<<": Noviembre";
    break;
case 12:
    std::cout<<"Mes "<<numero_mes<<": Diciembre";
    break;

default:
    std::cout<<"No existe el mes "<<numero_mes;
    break;
}

return 0;
}
