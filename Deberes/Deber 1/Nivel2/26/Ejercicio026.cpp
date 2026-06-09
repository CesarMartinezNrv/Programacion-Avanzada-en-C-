/*
Nombre: César Martínez 
Fecha: 04/07/2026


----------------------------------------------------------------------------------------------------
E026 | Función void sin retorno
Escribe void saludar(string nombre) que imprima:
"Hola, [nombre]! Bienvenido al sistema."
Llámala con el nombre leído del teclado.

Entrada: Carla
Salida esperada:
  Hola, Carla! Bienvenido al sistema.
----------------------------------------------------------------------------------------------------
*/
#include <iostream>
#include <string>
void saludar(std::string nombre = "amigo"){
    std::cout<<"Hola, "<<nombre<<"! Bienvenido al sitema.";
}

int main(){

std::string nombre = " ";
std::cin>>nombre;
saludar(nombre);

return 0;
}