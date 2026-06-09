/*
Nombre: César Martínez 
Fecha: 04/07/2026


----------------------------------------------------------------------------------------------------
E034 | Valor por defecto
Escribe void imprimirLinea(int n = 20, char c = '-')
que imprima n repeticiones del caracter c.
Llámala de 3 formas: sin args, con n=10, con n=5 y c='*'.

Entrada: (ninguna)
Salida esperada:
  --------------------
  ----------
  *****
----------------------------------------------------------------------------------------------------
*/

#include <iostream>

void imprimirLinea (int n = 20, char c = '-'){
    for (int i{1}; i <= n; i++){
        std::cout<<c;
    }
    std::cout<<std::endl;
}

int main(){

int n{0};
char c {'-'};

imprimirLinea();
imprimirLinea(n = 10, c);
imprimirLinea(n = 5, c = '*');

return 0;


}