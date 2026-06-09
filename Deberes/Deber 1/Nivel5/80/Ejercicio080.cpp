/*
Nombre: César Martínez 
Fecha: 06/06/2026


----------------------------------------------------------------------------------------------------
E080 | Integración — registro dinámico de estudiantes
  - Lee N (cantidad de estudiantes)
  - Reserva dinámicamente: string* nombres y double* notas
  - Lee los datos (un nombre y una nota por línea: Ana 88)
  - Ordena el ranking de mayor a menor nota usando bubble sort.
    IMPORTANTE: cuando intercambies notas, intercambia también
    los nombres en la misma posición para mantener la coherencia
    entre los dos arreglos paralelos.
  - Imprime el ranking ordenado
  - Libera toda la memoria con delete[]

Entrada:
  3
  Ana 88
  Luis 75
  Carla 95
Salida esperada:
  === Ranking ===
  1. Carla  - 95.00
  2. Ana    - 88.00
  3. Luis   - 75.00
  Memoria liberada.
----------------------------------------------------------------------------------------------------
*/

#include <iostream>
#include <string>
#include <iomanip>

void leerDatos(std::string* nombres, double* notas, int n);
void ordenarRanking(std::string* nombres, double* notas, int n);
void imprimirRanking(std::string* nombres, double* notas, int n);
void liberarMemoria(std::string* &nombres, double* &notas);


void leerDatos(std::string* nombres, double* notas, int n){
    for(int i{0}; i < n; i++){
        std::cin>>nombres[i];
        std::cin>>notas[i];
    }
}

void ordenarRanking(std::string* nombres, double* notas, int n){
    for(int i{0}; i < n - 1; i++){
        for(int j{0}; j < n - i - 1; j++){
            if(notas[j] < notas[j + 1]){
                double auxiliar_nota{notas[j]};
                notas[j] = notas[j + 1];
                notas[j + 1] = auxiliar_nota;

                std::string auxiliar_nombre{nombres[j]};
                nombres[j] = nombres[j + 1];
                nombres[j + 1] = auxiliar_nombre;
            }
        }
    }
}

void imprimirRanking(std::string* nombres, double* notas, int n){
    std::cout<<"=== Ranking ==="<<std::endl;

    for(int i{0}; i < n; i++){
        std::cout<<i + 1<<". "<<std::left<<std::setw(7)<<nombres[i]<<"- "<<std::fixed<<std::setprecision(2)<<notas[i]<<std::endl;
    }
}

void liberarMemoria(std::string* &nombres, double* &notas){
    delete[] nombres;
    delete[] notas;

    nombres = nullptr;
    notas = nullptr;

    std::cout<<"Memoria liberada.";
}


int main(){

int n{0};

std::cin>>n;

std::string* nombres{new std::string[n]};
double* notas{new double[n]{}};

leerDatos(nombres, notas, n);
ordenarRanking(nombres, notas, n);
imprimirRanking(nombres, notas, n);
liberarMemoria(nombres, notas);

return 0;

}

