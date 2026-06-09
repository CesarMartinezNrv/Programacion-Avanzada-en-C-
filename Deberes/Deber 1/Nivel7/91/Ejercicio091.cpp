/*
Nombre: César Martínez 
Fecha: 07/06/2026


----------------------------------------------------------------------------------------------------
E091 | Constructor y destructor
Crea la clase Sensor con:
  - nombre (string), valor (double)
  - Constructor: imprime "[nombre] activado."
  - Destructor:  imprime "[nombre] desactivado."
  - Método leer(): retorna el valor

IMPORTANTE: declara los sensores como variables locales
(NO con new) para que el destructor se llame automáticamente
al salir de main. El orden de destrucción es INVERSO al de
creación — los objetos en stack se destruyen como una pila (LIFO).

  Sensor s1("Temperatura", 36.6);  // se destruye segundo
  Sensor s2("Presion", 101.3);     // se destruye primero

Entrada: (ninguna — valores hardcodeados)
Salida esperada:
  Temperatura activado.
  Presion activado.
  Temperatura: 36.60
  Presion: 101.30
  Presion desactivado.
  Temperatura desactivado.
----------------------------------------------------------------------------------------------------
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Sensor {
private:
    string nombre;
    double valor;

public:
    Sensor(string nombre_ingresado, double valor_ingresado):nombre{nombre_ingresado}, valor{valor_ingresado}{
        cout<<nombre<<" activado."<<endl;
    }

    ~Sensor(){
        cout<<nombre<<" desactivado."<<endl;
    }

    double leer() const{
        return valor;
    }

    string getNombre() const{
        return nombre;
    }
};

int main(){

Sensor s1("Temperatura", 36.6);
Sensor s2("Presion", 101.3);

cout<<fixed<<setprecision(2);
cout<<s1.getNombre()<<": "<<s1.leer()<<endl;
cout<<s2.getNombre()<<": "<<s2.leer()<<endl;

return 0;
}

