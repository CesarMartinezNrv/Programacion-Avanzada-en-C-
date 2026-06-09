/*
Nombre: César Martínez 
Fecha: 02/07/2026


----------------------------------------------------------------------------------------------------
E014 | while — contar hasta N
Lee N e imprime los números del 1 al N separados por espacio.

Entrada: 5
Salida esperada:
  1 2 3 4 5
----------------------------------------------------------------------------------------------------
*/

#include <iostream>
int main(){

int n{0}, contador{1};

std::cin>>n;

while ( contador <= n ){
    std::cout<<contador<<" ";
    contador++;
}

return 0;
}