/*
Nombre: César Martínez 
Fecha: 06/06/2026


----------------------------------------------------------------------------------------------------
E084 | Contar líneas y palabras
PARTE 1 (a mano): escribe el código que crearía el archivo
"texto.txt" con este contenido exacto:
  La programacion es el arte de resolver problemas
  C++ es un lenguaje potente y rapido
  Aprender a programar abre muchas puertas

PARTE 2 (implementar): Escribe el programa completo que:
  1. Crea el archivo "texto.txt" con esas 3 líneas.
  2. Lo lee y cuenta cuántas líneas y palabras tiene.

  Pista: abre el archivo DOS veces con dos ifstream
  distintos: uno para contar líneas (con getline) y
  otro para contar palabras (con >>).

Entrada: (ninguna — el archivo lo crea el programa)
Salida esperada:
  Lineas: 3
  Palabras: 22
----------------------------------------------------------------------------------------------------
*/


#include <iostream>
#include <fstream>
#include <string>

int main(){

std::ofstream archivo("texto.txt");

if(archivo.is_open()){
    archivo<<"La programacion es el arte de resolver problemas"<<std::endl;
    archivo<<"C++ es un lenguaje potente y rapido"<<std::endl;
    archivo<<"Aprender a programar abre muchas puertas"<<std::endl;

    archivo.close();
}
else{
    std::cout<<"ERROR. No se pudo crear el archivo.";
    return 0;
}

std::ifstream leerLineas("texto.txt");

int contadorLineas{0};

if(leerLineas.is_open()){
    std::string linea{""};
    while(std::getline(leerLineas, linea)){
        contadorLineas++;
    }
    leerLineas.close();
}

std::ifstream leerPalabras("texto.txt");

int contador{0};

if(leerPalabras.is_open()){
    std::string palabra{""};
    while(leerPalabras>>palabra){
        contador++;
    }
    leerPalabras.close();
}

std::cout<<"Lineas: "<<contadorLineas<<std::endl;
std::cout<<"Palabras: "<<contador;

return 0;

}