/*
Nombre: César Martínez 
Fecha: 07/06/2026


----------------------------------------------------------------------------------------------------
E089 | Clase básica
Crea la clase Rectangulo con:
  - Atributos privados: base, altura (double)
  - Constructor con parámetros
  - Métodos públicos: calcularArea(), calcularPerimetro(), imprimir()

Instancia uno con valores leídos del teclado.

Entrada: 5.0  3.0
Salida esperada:
  Rectangulo: base=5.00, altura=3.00
  Area: 15.00
  Perimetro: 16.00
----------------------------------------------------------------------------------------------------
*/



#include <iostream>
#include <iomanip>

using namespace std;

class Rectangulo {
private:
    double base;
    double altura;

public:
    Rectangulo(double base_ingresada, double altura_ingresada):base{base_ingresada}, altura{altura_ingresada}{
    }

    double calcularArea() const{
        return base * altura;
    }

    double calcularPerimetro() const{
        return 2 * (base + altura);
    }

    void imprimir() const{
        cout<<fixed<<setprecision(2);
        cout<<"Rectangulo: base="<<base<<", altura="<<altura<<endl;
        cout<<"Area: "<<calcularArea()<<endl;
        cout<<"Perimetro: "<<calcularPerimetro()<<endl;
    }
};

int main(){

double base{0.0};
double altura{0.0};
cin>>base>>altura;

Rectangulo rectangulo(base, altura);
rectangulo.imprimir();

return 0;
}