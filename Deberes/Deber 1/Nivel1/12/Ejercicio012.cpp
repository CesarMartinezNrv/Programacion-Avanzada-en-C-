/*
Nombre: César Martínez 
Fecha: 02/07/2026


----------------------------------------------------------------------------------------------------
E012 | if/else anidado — calificación por letra
Lee la nota de un estudiante (0-100) e imprime su letra:
  90-100 → A    80-89 → B    70-79 → C
  60-69  → D    0-59  → F

Entrada: 85
Salida esperada:
  Nota: 85 -> Calificacion: B
----------------------------------------------------------------------------------------------------
*/

#include <iostream> 

int main (){

float calificacion{0};

std::cin>>calificacion;

if (calificacion >= 90 && calificacion <= 100){
    std::cout<<"Su calificacion es A";
}
else{
    if(calificacion >= 80 && calificacion <= 89){
        std::cout<<"Su calificacion es B";
    }
    else if(calificacion >= 70 && calificacion <= 79){
        std::cout<<"Su calificacion es C";
    }
    else if(calificacion >= 60 && calificacion <= 69){
        std::cout<<"Su calificaciones D";
    }
    else if(calificacion >= 0 && calificacion <= 59){
        std::cout<<"Su calificacion es F";
    }
    else{
        std::cout<<"Fuera del rango de calificaciones (0 a 100)";
    }

}

return 0;
}