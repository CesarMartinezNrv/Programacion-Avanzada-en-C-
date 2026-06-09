/*
Nombre: César Martínez 
Fecha: 06/06/2026


----------------------------------------------------------------------------------------------------
E067 | Puntero a función
Declara un puntero a función: int (*op)(int, int)
Implementa las funciones: sumar, restar, multiplicar.
Usa un menú numérico para asignar el puntero:
  1 → sumar
  2 → restar
  3 → multiplicar

Lee la opción y los dos operandos. Asigna el puntero
con if/else y llámalo para imprimir el resultado.

Entrada:
  1
  10 4
Salida esperada:
  Resultado: 14

Entrada alternativa:
  2
  10 4
Salida esperada:
  Resultado: 6
----------------------------------------------------------------------------------------------------
*/

#include <iostream>

int sumar(int a, int b);
int restar(int a, int b);
int multiplicar(int a, int b);

int sumar(int a, int b){
    return a + b;
}

int restar(int a, int b){
    return a - b;
}

int multiplicar(int a, int b){
    return a * b;
}

int main(){

int opcion{0};
int a{0};
int b{0};

std::cin>>opcion;
std::cin>>a>>b;

int (*op)(int, int){nullptr};

if(opcion == 1){
    op = sumar;
}
else if(opcion == 2){
    op = restar;
}
else if(opcion == 3){
    op = multiplicar;
}

if(op != nullptr){
    std::cout<<"Resultado: "<<op(a, b);
}
else{
    std::cout<<"Opcion invalida.";
}

return 0;

}

