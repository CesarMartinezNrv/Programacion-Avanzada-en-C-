/*
Nombre: César Martínez 
Fecha: 06/06/2026


----------------------------------------------------------------------------------------------------
E079 | ANÁLISIS — Dangling pointer
Analiza este código, identifica el error y corrígelo:

  CÓDIGO CON ERROR:
  -----------------
  int* p = new int(10);
  delete p;
  cout << *p;   // ← ERROR: dangling pointer

  Preguntas a responder A MANO:
  1. ¿Qué es un dangling pointer?
  2. ¿Por qué es peligroso?
  3. ¿Cómo evitarlo?

Salida esperada del programa corregido:
  Valor antes de delete: 10
  Puntero puesto en nullptr. Acceso bloqueado.
----------------------------------------------------------------------------------------------------
*/

#include <iostream>

int main(){

int* p = new int(10);

std::cout<<"Valor antes del delete: "<<*p<<std::endl;
delete p;
p = nullptr;

if(p != nullptr){
    std::cout<<"Valor despues del delete: "<<*p<<std::endl;
}
else if (p == nullptr){

    std::cout<<"Puntero puesto en nullptr. Acceso bloqueado";

}


return 0;
}