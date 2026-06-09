/*
Nombre: César Martínez 
Fecha: 07/06/2026


----------------------------------------------------------------------------------------------------
E093 | Herencia básica
Crea la clase base Animal:
  - Atributo: nombre (string)
  - Método virtual: hacerSonido() → imprime "..."
  - Método: getNombre()

Crea Perro y Gato que sobrescriban hacerSonido().

Entrada: (ninguna)
Salida esperada:
  Perro (Rex): Guau!
  Gato (Luna): Miau!
----------------------------------------------------------------------------------------------------
*/


#include <iostream>
#include <string>

using namespace std;

class Animal {
private:
    string nombre;

public:
    Animal(string nombre_ingresado):nombre{nombre_ingresado}{
    }

    virtual ~Animal(){
    }

    string getNombre() const{
        return nombre;
    }

    virtual void hacerSonido() const{
        cout<<"..."<<endl;
    }
};

class Perro:public Animal {
public:
    Perro(string nombre_ingresado):Animal{nombre_ingresado}{
    }

    void hacerSonido() const override{
        cout<<"Perro ("<<getNombre()<<"): Guau!"<<endl;
    }
};

class Gato:public Animal {
public:
    Gato(string nombre_ingresado):Animal{nombre_ingresado}{
    }

    void hacerSonido() const override{
        cout<<"Gato ("<<getNombre()<<"): Miau!"<<endl;
    }
};

int main(){

Perro perro("Rex");
Gato gato("Luna");

perro.hacerSonido();
gato.hacerSonido();

return 0;
}