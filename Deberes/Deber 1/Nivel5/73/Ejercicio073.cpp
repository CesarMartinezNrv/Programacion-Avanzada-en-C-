/*
Nombre: César Martínez 
Fecha: 06/06/2026


----------------------------------------------------------------------------------------------------
E073 | ANÁLISIS — Detectar y corregir memory leak
El siguiente código tiene un memory leak. Analízalo,
identifica el problema y escribe la versión corregida
con comentarios explicando qué estaba mal.

  CÓDIGO CON ERROR:
  -----------------
  int* a = new int(5);
  int* b = new int[10];
  a = new int(20);    // ← aquí ocurre el leak
  delete a;
  delete[] b;

  Preguntas a responder A MANO:
  1. ¿Qué valor pierde su puntero en la línea señalada?
  2. ¿Ese bloque de memoria se libera en algún momento?
  3. ¿Cómo se corrige?

Salida esperada del programa corregido:
  Valor final de a: 20
  Memoria liberada correctamente.
----------------------------------------------------------------------------------------------------
*/

#include <iostream>

int main(){

int* a{new int(5)};
int* b{new int[10]{}};

delete a;
a = new int(20);

std::cout<<"Valor final de a: "<<*a<<std::endl;

delete a;
delete[] b;

a = nullptr;
b = nullptr;

std::cout<<"Memoria liberada correctamente.";

return 0;

}
