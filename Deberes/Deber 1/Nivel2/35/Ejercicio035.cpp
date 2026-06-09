/*
Nombre: César Martínez 
Fecha: 04/07/2026


----------------------------------------------------------------------------------------------------
E035 | Funciones coordinadas — pares
Escribe:
  bool esPar(int n) → true si n es par
  void imprimirPares(int inicio, int fin)
    → imprime todos los pares en el rango

Entrada:
  1
  20
Salida esperada:
  Pares entre 1 y 20:
  2 4 6 8 10 12 14 16 18 20
----------------------------------------------------------------------------------------------------
*/

#include <iostream>

bool esPar(int n){
    if(n % 2 == 0){
        return true;
    }
    else{
        return false;
    }
}

void imprimirPares(int inicio, int fin){
    for(int i{inicio}; i <= fin; i++){
        if(esPar(i) == true){
            std::cout<<i<<" ";
        }
    }
}

int main (){

int inicio, fin;

std::cin>>inicio>>fin;
imprimirPares(inicio, fin);
}