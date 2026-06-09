/*
Nombre: César Martínez 
Fecha: 07/06/2026


----------------------------------------------------------------------------------------------------
E094 | Polimorfismo
TRAZA A MANO:
  Animal* animales[4];
  animales[0] = new Perro("Rex");
  animales[1] = new Gato("Luna");
  animales[2] = new Perro("Max");
  animales[3] = new Gato("Michi");

  Para cada elemento, ¿qué versión de hacerSonido() se ejecuta?
  ¿Por qué es necesario que el método sea virtual?

Luego implementa el programa.

Entrada: (ninguna)
Salida esperada:
  Rex: Guau!
  Luna: Miau!
  Max: Guau!
  Michi: Miau!
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
        cout<<nombre<<": ..."<<endl;
    }
};

class Perro:public Animal {
public:
    Perro(string nombre_ingresado):Animal{nombre_ingresado}{
    }

    void hacerSonido() const override{
        cout<<getNombre()<<": Guau!"<<endl;
    }
};

class Gato:public Animal {
public:
    Gato(string nombre_ingresado):Animal{nombre_ingresado}{
    }

    void hacerSonido() const override{
        cout<<getNombre()<<": Miau!"<<endl;
    }
};

int main(){

Animal* animales[4];

animales[0] = new Perro("Rex");
animales[1] = new Gato("Luna");
animales[2] = new Perro("Max");
animales[3] = new Gato("Michi");

for(int i{0}; i < 4; i++){
    animales[i]->hacerSonido();
}

for(int i{0}; i < 4; i++){
    delete animales[i];
    animales[i] = nullptr;
}

return 0;
}