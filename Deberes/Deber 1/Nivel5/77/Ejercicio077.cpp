/*
Nombre: César Martínez 
Fecha: 06/06/2026


----------------------------------------------------------------------------------------------------
E077 | Buscar con nullptr como centinela
Escribe int* buscarDinamico(int* arr, int n, int val)
que retorne puntero al elemento o nullptr.
En main valida el resultado ANTES de desreferenciar.

Entrada:
  5
  4 8 15 16 23
  15
Salida esperada:
  Elemento encontrado: 15
----------------------------------------------------------------------------------------------------
*/

#include <iostream>

int* leerArregloDinamico(int &n);
int* buscarDinamico(int* arr, int n, int val);
void liberarArreglo(int* &arr);

int* leerArregloDinamico(int &n){
    int* arreglo{new int[n]};

    for(int i{0}; i < n; i++){
        std::cin>>arreglo[i];
    }

    return arreglo;
}

int* buscarDinamico(int* arr, int n, int val){
    for(int i{0}; i < n; i++){
        if(arr[i] == val){
            return &arr[i];
        }
    }

    return nullptr;
}

void liberarArreglo(int* &arr){
    delete[] arr;
    arr = nullptr;
}

int main(){

int n{0};
int val{0};

std::cin>>n;

int* arreglo = leerArregloDinamico(n);

std::cin>>val;

int* resultado = buscarDinamico(arreglo, n, val);

if(resultado != nullptr){
    std::cout<<"Elemento encontrado: "<<*resultado;
}
else{
    std::cout<<"Elemento no encontrado.";
}

liberarArreglo(arreglo);

return 0;

}