/*
Nombre: César Martínez 
Fecha: 05/06/2026


----------------------------------------------------------------------------------------------------
E043 | Máximo, mínimo y promedio
Lee N enteros. Con funciones separadas calcula e imprime
máximo, mínimo y promedio del arreglo.

Entrada:
  6
  12 5 8 19 3 14
Salida esperada:
  Maximo: 19
  Minimo: 3
  Promedio: 10.17
----------------------------------------------------------------------------------------------------
*/

#include <iostream>
#include <iomanip>


//prototipos
int maximo(int arr[], int tamano);
int minimo(int arr[], int tamano);
double promedio(int arr[], int tamano);


int maximo(int arr[], int tamano){
    int maximo{arr[0]};
    for (int i{0}; i < tamano; i++){
        if (arr[i] > maximo){
            maximo = arr[i];
        }
    }
    return maximo;
}


int minimo(int arr[], int tamano){
    int minimo{arr[0]};
    for (int i{0}; i < tamano; i++){
        if (arr[i] < minimo){
            minimo = arr[i];
        }
    }
    return minimo;
}


double promedio(int arr[], int tamano){
    double suma{0.0};
    for (int i{0}; i < tamano; i++){
        suma = suma + arr[i];
    }
    return suma / tamano;
    
}


int main(){

int tamano;

std::cin>>tamano;

int arr[tamano] = {};

for(int i{0}; i < tamano; i++){
    int num; 
    std::cin>>num;
    arr[i] = num;
}

std::cout<<"Maximo: "<<maximo(arr, tamano)<<std::endl;
std::cout<<"Minimo: "<<minimo(arr, tamano)<<std::endl;
std::cout<<"Promedio: "<<std::fixed<<std::setprecision(2)<<promedio(arr, tamano)<<std::endl;
}