/*
Nombre: César Martínez 
Fecha: 04/07/2026


----------------------------------------------------------------------------------------------------
E024 | do-while — menú interactivo
Muestra un menú repetidamente hasta que el usuario elija salir.
  1. Saludar   → imprime "Hola!"
  2. Despedirse → imprime "Hasta luego!"
  3. Salir     → termina

Entrada: 1  2  3
Salida esperada:
  === Menu ===
  1. Saludar
  2. Despedirse
  3. Salir
  Opcion: Hola!
  === Menu ===
  1. Saludar
  2. Despedirse
  3. Salir
  Opcion: Hasta luego!
  === Menu ===
  1. Saludar
  2. Despedirse
  3. Salir
  Opcion: Programa terminado.
----------------------------------------------------------------------------------------------------
*/

#include <iostream>
int main (){

int num {0};

do
{
    std::cout<<"=== Menu ==="<<std::endl;
    std::cout<<"1. Saludar"<<std::endl;
    std::cout<<"2. Despedirse"<<std::endl;
    std::cout<<"3. Salir"<<std::endl;
    
    std::cin>>num;
    if (num == 1){
        std::cout<<"Hola!"<<std::endl;
    }
    if (num == 2){
    std::cout<<"Hasta luego!"<<std::endl;
    }
    if (num == 3){
        std::cout<<"Programa terminado"<<std::endl;
    }
} while (num != 3);

return 0;

}