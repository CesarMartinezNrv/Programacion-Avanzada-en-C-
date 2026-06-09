/*
Nombre: César Martínez 
Fecha: 07/06/2026


----------------------------------------------------------------------------------------------------
E095 | Clase abstracta — figuras
Crea la clase abstracta Figura con:
  - virtual double calcularArea() = 0
  - virtual double calcularPerimetro() = 0
  - void describir() que llama a los anteriores e imprime

Implementa Circulo y Triangulo como clases concretas.

  Circulo: PI = 3.14159
    Area      = PI * r * r
    Perimetro = 2 * PI * r

  Triangulo (dados sus 3 lados a, b, c):
    Perimetro = a + b + c
    Area (fórmula de Herón):
      s    = (a + b + c) / 2.0
      area = sqrt(s * (s-a) * (s-b) * (s-c))
    Requiere: #include <cmath> para sqrt()

Entrada:
  5.0
  3.0 4.0 5.0
Salida esperada:
  Circulo (r=5.00): Area=78.54, Perimetro=31.42
  Triangulo (3.00,4.00,5.00): Area=6.00, Perimetro=12.00
----------------------------------------------------------------------------------------------------
*/


#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double PI{3.14159};

class Figura {
public:
    virtual ~Figura(){
    }

    virtual double calcularArea() const = 0;
    virtual double calcularPerimetro() const = 0;
    virtual void imprimirDatos() const = 0;

    void describir() const{
        cout<<fixed<<setprecision(2);
        imprimirDatos();
        cout<<": Area="<<calcularArea()<<", Perimetro="<<calcularPerimetro()<<endl;
    }
};

class Circulo:public Figura {
private:
    double radio;

public:
    Circulo(double radio_ingresado):radio{radio_ingresado}{
    }

    double calcularArea() const override{
        return PI * radio * radio;
    }

    double calcularPerimetro() const override{
        return 2 * PI * radio;
    }

    void imprimirDatos() const override{
        cout<<"Circulo (r="<<radio<<")";
    }
};

class Triangulo:public Figura {
private:
    double a;
    double b;
    double c;

public:
    Triangulo(double lado_a, double lado_b, double lado_c):a{lado_a}, b{lado_b}, c{lado_c}{
    }

    double calcularPerimetro() const override{
        return a + b + c;
    }

    double calcularArea() const override{
        double s{calcularPerimetro() / 2.0};

        return sqrt(s * (s-a) * (s-b) * (s-c));
    }

    void imprimirDatos() const override{
        cout<<"Triangulo ("<<a<<","<<b<<","<<c<<")";
    }
};

int main(){

double radio{0.0};
double a{0.0};
double b{0.0};
double c{0.0};

cin>>radio;
cin>>a>>b>>c;

Circulo circulo(radio);
Triangulo triangulo(a, b, c);

circulo.describir();
triangulo.describir();

return 0;
}