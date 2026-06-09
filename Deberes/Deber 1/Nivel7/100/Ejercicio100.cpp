/*
Nombre: César Martínez 
Fecha: 07/06/2026


----------------------------------------------------------------------------------------------------
E100 | Proyecto integrador — sistema de empleados
Clases: Empleado (base), Programador (hereda), Gerente (hereda)
  Empleado: nombre (string), salario (double)
            virtual double calcularBono() = 0   ← abstracto
  Programador: lenguaje (string)
               calcularBono() → retorna 10% del salario
  Gerente: departamento (string)
           calcularBono() → retorna 20% del salario

En main declara los empleados directamente (sin leer tipo
desde teclado — instancia cada uno con sus datos hardcodeados
o lee nombre, salario y dato extra para cada tipo por separado).

Usa un arreglo de punteros Empleado* y recórrelo con polimorfismo.
Al final imprime el total de bonos.

Ejemplo de instanciación:
  Empleado* equipo[3];
  equipo[0] = new Programador("Ana", 3000, "Python");
  equipo[1] = new Gerente("Luis", 5000, "Sistemas");
  equipo[2] = new Programador("Carla", 2800, "C++");

Salida esperada:
  Ana (Programador/Python): Salario=$3000.00, Bono=$300.00
  Luis (Gerente/Sistemas): Salario=$5000.00, Bono=$1000.00
  Carla (Programador/C++): Salario=$2800.00, Bono=$280.00
  ─────────────────────────────
  Total bonos a pagar: $1580.00
----------------------------------------------------------------------------------------------------
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Empleado {
private:
    string nombre;
    double salario;

public:
    Empleado(string nombre_ingresado, double salario_ingresado):nombre{nombre_ingresado}, salario{salario_ingresado}{
    }

    virtual ~Empleado(){
    }

    string getNombre() const{
        return nombre;
    }

    double getSalario() const{
        return salario;
    }

    virtual double calcularBono() const = 0;
    virtual void imprimir() const = 0;
};

class Programador:public Empleado {
private:
    string lenguaje;

public:
    Programador(string nombre_ingresado, double salario_ingresado, string lenguaje_ingresado):Empleado{nombre_ingresado, salario_ingresado}, lenguaje{lenguaje_ingresado}{
    }

    double calcularBono() const override{
        return getSalario() * 0.10;
    }

    void imprimir() const override{
        cout<<getNombre()<<" (Programador/"<<lenguaje<<"): Salario = $"<<getSalario()<<", Bono=$"<<calcularBono()<<endl;
    }
};

class Gerente:public Empleado {
private:
    string departamento;

public:
    Gerente(string nombre_ingresado, double salario_ingresado, string departamento_ingresado):Empleado{nombre_ingresado, salario_ingresado}, departamento{departamento_ingresado}{
    }

    double calcularBono() const override{
        return getSalario() * 0.20;
    }

    void imprimir() const override{
        cout<<getNombre()<<" (Gerente/"<<departamento<<"): Salario = $"<<getSalario()<<", Bono = $"<<calcularBono()<<endl;
    }
};

int main(){

Empleado* equipo[3];
double total_bonos{0.0};

equipo[0] = new Programador("Ana", 3000, "Python");
equipo[1] = new Gerente("Luis", 5000, "Sistemas");
equipo[2] = new Programador("Carla", 2800, "C++");

cout<<fixed<<setprecision(2);

for(int i{0}; i < 3; i++){
    equipo[i]->imprimir();
    total_bonos = total_bonos + equipo[i]->calcularBono();
}

cout<<"-----------------------------"<<endl;
cout<<"Total bonos a pagar: $"<<total_bonos<<endl;

for(int i{0}; i < 3; i++){
    delete equipo[i];
    equipo[i] = nullptr;
}

return 0;
}