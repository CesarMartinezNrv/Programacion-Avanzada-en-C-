/*
Nombre: César Martínez 
Fecha: 07/06/2026


----------------------------------------------------------------------------------------------------
E097 | Métodos estáticos
Crea la clase Contador con:
  - Atributo estático: total (int), inicializado en 0
    (fuera de la clase: int Contador::total = 0;)
  - Constructor que incrementa total e imprime el conteo
  - Destructor que decrementa total e imprime el conteo
  - Método estático: getTotal()

Los atributos estáticos son COMPARTIDOS por todos los objetos
de la clase — existe una sola copia sin importar cuántos
objetos se creen.

Para garantizar la salida esperada, declara los objetos
como variables locales EN ESTE ORDEN dentro de un bloque {}:
  cout << "Total objetos: " << Contador::getTotal() << endl;
  {
      Contador a;   // crea A
      Contador b;   // crea B
      Contador c;   // crea C
  }                 // destruye C, luego B, luego A (LIFO)

Entrada: (ninguna)
Salida esperada:
  Total objetos: 0
  (crear A) Total objetos: 1
  (crear B) Total objetos: 2
  (crear C) Total objetos: 3
  (destruir C) Total objetos: 2
  (destruir B) Total objetos: 1
  (destruir A) Total objetos: 0
----------------------------------------------------------------------------------------------------
*/

#include <iostream>
#include <string>

using namespace std;

class Contador {
private:
    static int total;
    string nombre;

public:
    Contador(string nombre_ingresado):nombre{nombre_ingresado}{
        total++;
        cout<<"(crear "<<nombre<<") Total objetos: "<<total<<endl;
    }

    ~Contador(){
        total--;
        cout<<"(destruir "<<nombre<<") Total objetos: "<<total<<endl;
    }

    static int getTotal(){
        return total;
    }
};

int Contador::total = 0;

int main(){

cout<<"Total objetos: "<<Contador::getTotal()<<endl;

{
    Contador a("A");
    Contador b("B");
    Contador c("C");
}

return 0;
}