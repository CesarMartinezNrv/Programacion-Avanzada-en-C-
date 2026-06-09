/*
Nombre: César Martínez 
Fecha: 06/06/2026


----------------------------------------------------------------------------------------------------
E078 | Arreglo dinámico de strings ordenado
Reserva dinámicamente un arreglo de N strings.
Léelos, ordénalos alfabéticamente, imprímelos. Libera.

Entrada:
  4
  pera
  manzana
  uva
  banana
Salida esperada:
  Ordenado:
  banana
  manzana
  pera
  uva
----------------------------------------------------------------------------------------------------
*/

#include <iostream>
#include <string>

int main(){

int n{0};
std::cin>>n;

std::string* palabras = new std::string[n];

for(int i{0}; i < n; i++){
    std::cin>>palabras[i];
}

for(int i{0}; i < n - 1; i++){
    for(int j{0}; j < n - i - 1; j++){
        if(palabras[j] > palabras[j + 1]){
            std::string auxiliar{palabras[j]};
            palabras[j] = palabras[j + 1];
            palabras[j + 1] = auxiliar;
        }
    }
}

std::cout<<"Ordenado:"<<std::endl;

for(int i{0}; i < n; i++){
    std::cout<<palabras[i]<<std::endl;
}

delete[] palabras;
palabras = nullptr;

return 0;

}
