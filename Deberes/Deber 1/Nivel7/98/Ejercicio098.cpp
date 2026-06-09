/*
Nombre: César Martínez 
Fecha: 07/06/2026


----------------------------------------------------------------------------------------------------
E098 | Herencia múltiple
Crea:
  Volador con método virtual volar()
  Nadador con método virtual nadar()
  Pato que hereda de ambos, con nombre

Instancia un Pato y llama ambos métodos.

Entrada: (ninguna)
Salida esperada:
  Donald vuela: Fiu fiu!
  Donald nada: Splash splash!
----------------------------------------------------------------------------------------------------
*/

#include <iostream>
#include <string>

using namespace std;

class Volador {
public:
    virtual ~Volador(){
    }

    virtual void volar() const{
        cout<<"Vuela."<<endl;
    }
};

class Nadador {
public:
    virtual ~Nadador(){
    }

    virtual void nadar() const{
        cout<<"Nada."<<endl;
    }
};

class Pato:public Volador, public Nadador {
private:
    string nombre;

public:
    Pato(string nombre_ingresado):nombre{nombre_ingresado}{
    }

    void volar() const override{
        cout<<nombre<<" vuela: Fiu fiu!"<<endl;
    }

    void nadar() const override{
        cout<<nombre<<" nada: Splash splash!"<<endl;
    }
};

int main(){

Pato pato("Donald");

pato.volar();
pato.nadar();

return 0;
}