/*
Nombre: César Martínez 
Fecha: 06/06/2026


----------------------------------------------------------------------------------------------------
E059 | Aritmética de punteros — recorrer arreglo
Declara un arreglo de 5 enteros.
Recórrelo usando SOLO aritmética de punteros.
NO uses índices con corchetes [].

  Usa: *(arr + i) en lugar de arr[i]

Entrada: 10 20 30 40 50
Salida esperada:
  Elemento 0: 10
  Elemento 1: 20
  Elemento 2: 30
  Elemento 3: 40
  Elemento 4: 50
----------------------------------------------------------------------------------------------------
*/
#include <iostream>

int main(){

int arreglo [5]{10, 20, 30, 40, 50};

for (int i{0}; i < 5; i++){
    std::cout<<"Elemento "<<i<<" : "<<*(arreglo + i)<<std::endl;
}

return 0;
}

