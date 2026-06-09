/*
Nombre: César Martínez 
Fecha: 06/06/2026


----------------------------------------------------------------------------------------------------
E053 | Arreglos paralelos — mejor estudiante
Lee N, luego N nombres (uno por línea) y N notas en arreglos
paralelos. Imprime el nombre y nota del mejor estudiante.

  Nota: lee cada nombre con cin >> nombre (separado por espacio
  o salto de línea — cin ignora ambos automáticamente).

Entrada:
  4
  Ana
  Luis
  Carla
  Pedro
  85 92 78 88
Salida esperada:
  Mejor estudiante: Luis con nota 92.00
----------------------------------------------------------------------------------------------------
*/

#include <iostream>
#include <string>
#include <iomanip>

int main (){

int n{0};

std::cin>>n;

std::string nombres[n] = {};
double calificaciones[n] = {};

for(int i{0}; i < n; i++){
    std::string nomb;
    std::cin>>nomb;
    nombres[i] = nomb;
}

for(int i{0}; i < n; i++){
    double num{0};
    std::cin>>num;
    calificaciones[i] = num;
}

double calificacion_max {calificaciones[0]};
int indice_max{0};

for(int i{0}; i < n; i++){
    if(calificacion_max < calificaciones[i]){
        calificacion_max = calificaciones[i];
        indice_max = i;
    }
}

std::cout<<"Mejor estudiante: "<<nombres[indice_max]<<" con nota "<<std::fixed<<std::setprecision(2)<<calificaciones[indice_max];

return 0;

}