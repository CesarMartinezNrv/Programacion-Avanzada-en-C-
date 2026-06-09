/*
Nombre: César Martínez 
Fecha: 06/06/2026


----------------------------------------------------------------------------------------------------
E063 | Referencia vs puntero — comparación
TRAZA A MANO primero:
  ¿Cuál es la diferencia en memoria entre:
    void f1(int &n)  { n = n * 3; }
    void f2(int* p)  { *p = *p * 3; }
  Dibuja cómo queda x en cada caso.

Luego implementa las dos funciones.
Lee un entero y aplica f1, luego f2 al resultado.

Entrada: 5
Salida esperada:
  Valor inicial: 5
  Despues de triplicarRef: 15
  Despues de triplicarPtr: 45
----------------------------------------------------------------------------------------------------
*/

#include <iostream>

void f1(int &n){
    n = n*3;
}
void f2(int* p){
    *p = *p * 3;
}

int main(){
int n;
std::cin>>n;

f1(n);
std::cout<<"Depues de triplicarRef: "<<n<<std::endl;

int* p = &n;
f2(p);
std::cout<<"Despues de trplicarPtr: "<<n<<std::endl;


return 0;
}