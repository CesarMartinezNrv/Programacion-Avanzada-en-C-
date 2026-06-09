/*
Nombre: César Martínez 
Fecha: 04/07/2026


----------------------------------------------------------------------------------------------------
E021 | for + string — contar vocales
Lee una palabra (sin espacios) y cuenta sus vocales
(a, e, i, o, u — mayúsculas y minúsculas).

  Traza antes de codificar: en "Electrodomestico" identifica
  cada vocal manualmente para verificar tu solución.
  E-l-e-c-t-r-o-d-o-m-e-s-t-i-c-o → E,e,o,o,e,i,o = 7 vocales

Entrada: Electrodomestico
Salida esperada:
  Vocales en "Electrodomestico": 7
----------------------------------------------------------------------------------------------------
*/

#include <iostream>
#include <string>

int main(){

std::string palabra;
int vocales{0};

std::cin>>palabra;

for(int i{0}; i < palabra.size(); i++){
    if (palabra[i] == 'A' || palabra[i] == 'a'){
        vocales++;
    }

    else if (palabra[i] == 'E' || palabra[i] == 'e'){
        vocales++;
    }

    else if (palabra[i] == 'I' || palabra[i] == 'i'){
        vocales++;
    }

    else if (palabra[i] == 'O' || palabra[i] == 'o'){
        vocales++;
    }

    else if (palabra[i] == 'U' || palabra[i] == 'u'){
        vocales++;
    }
}

std::cout<<"Vocales en \""<<palabra<<"\": "<<vocales;

return 0;
}