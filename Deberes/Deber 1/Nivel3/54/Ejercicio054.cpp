/*
Nombre: César Martínez 
Fecha: 06/06/2026


----------------------------------------------------------------------------------------------------
E054 | Búsqueda binaria
TRAZA A MANO PRIMERO:
Para el arreglo ordenado {2, 5, 8, 12, 16, 23, 38},
dibuja paso a paso cómo la búsqueda binaria encuentra el 23:
  - izquierda=0, derecha=6, medio=3 → arr[3]=12 < 23 → buscar derecha
  - izquierda=4, derecha=6, medio=5 → arr[5]=23 == 23 → ENCONTRADO

Luego implementa el algoritmo en C++.

Entrada:
  7
  2 5 8 12 16 23 38
  23
Salida esperada:
  Valor 23 encontrado en indice 5 (busqueda binaria).
----------------------------------------------------------------------------------------------------
*/

#include <iostream>

int busquedaBinaria(int arreglo[], int n, int valor_buscado){
    int inicio{0};
    int fin{n - 1};

    while(inicio <= fin){
        int mitad{(inicio + fin) / 2};

        if(arreglo[mitad] == valor_buscado){
            return mitad;
        }
        else if(valor_buscado > arreglo[mitad]){
            inicio = mitad + 1;
        }
        else{
            fin = mitad - 1;
        }
    }

    return -1;
}

int main(){

int N{0};
int valor_buscado{0};

std::cin>>N;

int nums[N];

for(int i{0}; i < N; i++){
    int num{0};
    std::cin>>num;
    nums[i] = num;
}

std::cin>>valor_buscado;

int indice{busquedaBinaria(nums, N, valor_buscado)};

if(indice != -1){
    std::cout<<"Valor "<<valor_buscado<<" encontrado en indice "<<indice<<" (busqueda binaria).";
}
else{
    std::cout<<"Valor "<<valor_buscado<<" no encontrado.";
}

return 0;

}


