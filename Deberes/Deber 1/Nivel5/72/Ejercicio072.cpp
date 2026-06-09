/*
Nombre: César Martínez 
Fecha: 06/06/2026


----------------------------------------------------------------------------------------------------
E072 | Función que crea y retorna arreglo dinámico
Escribe int* crearArreglo(int n, int valorInicial)
que reserve un arreglo de n enteros, los inicialice con
valorInicial y lo retorne.
El llamador es responsable de liberarlo con delete[].

Entrada:
  5
  7
Salida esperada:
  Arreglo de 5 elementos inicializados en 7:
  7 7 7 7 7
----------------------------------------------------------------------------------------------------
*/

#include <iostream>

int* creaArreglo(int n, int valorInicial){
    int* arr = new int[n];
    for(int i{0}; i < n; i++){
        arr[i] = valorInicial;
    }

    return arr;
}

int main(){
    
int n, valorInicial;

std::cin>>n>>valorInicial;

int* p = creaArreglo(n, valorInicial);

std::cout<<"Arreglo de "<<n<<" elementos inicializados en "<<valorInicial<<std::endl;

for(int i{0}; i < n; i++){
    std::cout<<p[i]<<" ";
}

return 0;
}