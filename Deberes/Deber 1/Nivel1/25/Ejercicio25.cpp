/*
Nombre: César Martínez 
Fecha: 04/07/2026


----------------------------------------------------------------------------------------------------
E025 | do-while — validación de entrada
Pide una nota entre 0 y 100.
Si está fuera de rango, vuelve a pedir.
Cuando sea válida, imprime "Nota aceptada: X".

Entrada: -5  110  85
Salida esperada:
  Ingrese nota (0-100): Valor invalido. Intente de nuevo.
  Ingrese nota (0-100): Valor invalido. Intente de nuevo.
  Ingrese nota (0-100): Nota aceptada: 85
----------------------------------------------------------------------------------------------------
*/

#include <iostream>

int main(){
bool pase{false};
int nota{0};
do{

std::cout<<"Ingrese nota (0-100): ";
std::cin>>nota;

if (nota >= 0 & nota <= 100){
    pase = true;
}
else{
    std::cout<<"VALOR INVALIDO. Ingrese de nuevo."<<std::endl;
}
}while (pase == false);

std::cout<<"Nota aceptada: "<<nota;
return 0;

}