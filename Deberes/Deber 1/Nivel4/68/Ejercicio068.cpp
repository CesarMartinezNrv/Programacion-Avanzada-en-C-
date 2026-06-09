/*
Nombre: César Martínez 
Fecha: 06/06/2026


----------------------------------------------------------------------------------------------------
E068 | Integración punteros
Con funciones que reciben punteros:
  - Lee N enteros en un arreglo
  - Calcula suma y promedio
  - Invierte el arreglo IN-PLACE (en el mismo arreglo)

Entrada:
  5
  1 2 3 4 5
Salida esperada:
  Suma: 15
  Promedio: 3.00
  Invertido: 5 4 3 2 1
----------------------------------------------------------------------------------------------------
*/

#include <iostream>


#include <iostream>
#include <iomanip>

int calcularSuma(int* arr, int n);
double calcularPromedio(int* arr, int n);
void invertirArreglo(int* arr, int n);

int calcularSuma(int* arr, int n){
    int suma{0};

    for(int i{0}; i < n; i++){
        suma = suma + *(arr + i);
    }

    return suma;
}

double calcularPromedio(int* arr, int n){
    int suma{calcularSuma(arr, n)};

    return suma * 1.0 / n;
}

void invertirArreglo(int* arr, int n){
    int* inicio{arr};
    int* fin{arr + n - 1};

    while(inicio < fin){
        int auxiliar{*inicio};
        *inicio = *fin;
        *fin = auxiliar;

        inicio++;
        fin--;
    }
}

int main(){

int n{0};

std::cin>>n;

int arreglo[n]{};

for(int i{0}; i < n; i++){
    std::cin>>arreglo[i];
}

int suma{calcularSuma(arreglo, n)};
double promedio{calcularPromedio(arreglo, n)};

invertirArreglo(arreglo, n);

std::cout<<"Suma: "<<suma<<std::endl;
std::cout<<"Promedio: "<<std::fixed<<std::setprecision(2)<<promedio<<std::endl;

std::cout<<"Invertido: ";

for(int i{0}; i < n; i++){
    std::cout<<arreglo[i]<<" ";
}

return 0;

}


