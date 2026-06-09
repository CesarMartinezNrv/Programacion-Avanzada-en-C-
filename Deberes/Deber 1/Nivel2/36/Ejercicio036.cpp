/*
Nombre: César Martínez 
Fecha: 05/07/2026


----------------------------------------------------------------------------------------------------
E036 | Función con string — invertir
Escribe string invertir(string s) que retorne la cadena
al revés, recorriendo el string de atrás hacia adelante.

Entrada: hola
Salida esperada:
  Original: hola
  Invertida: aloh
----------------------------------------------------------------------------------------------------
*/

#include <iostream>
#include <string>

std::string invertir(std::string s){
std::string sInvertido{""};
for (int i {s.size() - 1}; i >= 0; i--){
    sInvertido.push_back(s[i]); 
}

return sInvertido;

}

int main (){
std::string s{""};

std::cin>>s;

std::cout<<"Original: "<<s<<std::endl;
std::cout<<"Invertida: "<<invertir(s);

return 0;
}