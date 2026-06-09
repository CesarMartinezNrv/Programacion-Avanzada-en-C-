/*
Nombre: César Martínez 
Fecha: 06/06/2026


----------------------------------------------------------------------------------------------------
E066 | Buscar con puntero y nullptr
Escribe int* buscarPtr(int* arr, int n, int valor) que
retorne puntero al elemento o nullptr si no existe.
Valida el resultado antes de usarlo en main.

Entrada:
  5
  10 25 38 47 60
  38
Salida esperada:
  Valor 38 encontrado.
----------------------------------------------------------------------------------------------------
*/

#include <iostream>

int* buscarPtr(int* arr, int n, int valor){
    int* p{arr};

    for(int i{0}; i < n; i++){
        if(*p == valor){
            return p;
        }

        p++;
    }

    return nullptr;
}

int main(){

int n{0};
int valor{0};

std::cin>>n;

int arreglo[n]{};

for(int i{0}; i < n; i++){
    std::cin>>arreglo[i];
}

std::cin>>valor;

int* resultado{buscarPtr(arreglo, n, valor)};

if(resultado != nullptr){
    std::cout<<"Valor "<<*resultado<<" encontrado.";
}
else{
    std::cout<<"Valor "<<valor<<" no encontrado.";
}

return 0;

}