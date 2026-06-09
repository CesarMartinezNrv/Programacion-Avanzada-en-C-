/*
Nombre: César Martínez 
Fecha: 06/06/2026


----------------------------------------------------------------------------------------------------
E055 | Integración — ranking de estudiantes
Lee N estudiantes con nombre y 3 notas cada uno.
Calcula el promedio de cada uno.
Imprime el ranking ordenado de mayor a menor promedio.

Entrada:
  3
  Ana 80 90 85
  Luis 70 75 80
  Carla 95 88 92
Salida esperada:
  === Ranking de estudiantes ===
  1. Carla  - Promedio: 91.67
  2. Ana    - Promedio: 85.00
  3. Luis   - Promedio: 75.00
----------------------------------------------------------------------------------------------------
*/
#include <iostream>
#include <string>
#include <iomanip>

int main(){

const int max{100};
const int nota{3};

int N{0};

std::cin>>N;

std::string nombres[max]{};
int calificaciones[max][nota]{};
double promedio[max]{};

for(int i{0}; i < N; i++){
    std::cin>>nombres[i];

    for(int j{0}; j < nota; j++){
        std::cin>>calificaciones[i][j];
    }
}

for(int i{0}; i < N; i++){
    int suma{0};

    for(int j{0}; j < nota; j++){
        suma = suma + calificaciones[i][j];
    }

    promedio[i] = suma / 3.0;
}

for(int i{0}; i < N - 1; i++){
    for(int j{0}; j < N - i - 1; j++){
        if(promedio[j] < promedio[j + 1]){
            double auxiliar_promedio{promedio[j]};
            promedio[j] = promedio[j + 1];
            promedio[j + 1] = auxiliar_promedio;

            std::string auxiliar_nombre{nombres[j]};
            nombres[j] = nombres[j + 1];
            nombres[j + 1] = auxiliar_nombre;

            for(int k{0}; k < nota; k++){
                int auxiliar_nota{calificaciones[j][k]};
                calificaciones[j][k] = calificaciones[j + 1][k];
                calificaciones[j + 1][k] = auxiliar_nota;
            }
        }
    }
}

std::cout<<"=== Ranking de estudiantes ==="<<std::endl;

for(int i{0}; i < N; i++){
    std::cout<<i + 1<<". "<<nombres[i]<<" - Promedio: "<<std::fixed<<std::setprecision(2)<<promedio[i]<<std::endl;
}

return 0;

}