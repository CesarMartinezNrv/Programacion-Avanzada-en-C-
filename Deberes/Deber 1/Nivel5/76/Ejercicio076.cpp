/*
Nombre: César Martínez 
Fecha: 06/06/2026


----------------------------------------------------------------------------------------------------
E076 | Sistema con funciones dinámicas
Implementa y encadena estas funciones:
  int* leerArregloDinamico(int &n)
  void imprimirArreglo(int* arr, int n)
  double promedioArreglo(int* arr, int n)
  void liberarArreglo(int* &arr)

Nota: liberarArreglo recibe por referencia para poner nullptr.

Entrada:
  4
  8 3 6 9
Salida esperada:
  Arreglo: 8 3 6 9
  Promedio: 6.50
  Memoria liberada.
----------------------------------------------------------------------------------------------------
*/


#include <iostream>
#include <iomanip>

//Prototipos
int* leerArregloDinamico(int &n);
void imprimirArreglo(int* arr, int n);
double promedioArreglo(int* arr, int n);
void liberarArreglo(int* &arr);


int* leerArregloDinamico(int &n){
    int* arreglo = new int [n];
    for (int i{0}; i < n; i++){
        std::cin>>arreglo[i];
    }

    return arreglo;
}

void imprimirArreglo(int* arr, int n){
    for(int i{0}; i < n; i++){
        std::cout<<arr[i]<<" ";
    }
}

double promedioArreglo(int* arr, int n){
    double sumaArreglo{0};
    for(int i{0}; i < n; i++){
        sumaArreglo = arr[i] + sumaArreglo;
    }

    return sumaArreglo/n;
}

void liberarArreglo(int* &arr){
    delete[] arr;
    arr = nullptr;
    std::cout<<"Memoria liberada";
}

int main(){

int n;
std::cin>>n;
int* arreglo = leerArregloDinamico(n);
std::cout<<"Arreglo: ";
imprimirArreglo(arreglo, n);
std::cout<<std::endl;

double promedio = promedioArreglo(arreglo, n);
std::cout<<"Promedio: "<<std::fixed<<std::setprecision(2)<<promedio<<std::endl;

liberarArreglo(arreglo);

return 0;
}