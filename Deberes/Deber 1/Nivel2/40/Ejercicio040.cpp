/*
Nombre: César Martínez 
Fecha: 05/07/2026


----------------------------------------------------------------------------------------------------
E040 | Integración nivel 2 — calculadora de múltiples usos
Crea un programa que use SOLO funciones (sin arreglos).
Implementa:
  double calcularPromedio3(double a, double b, double c)
  double calcularAreaRectangulo(double base, double altura)
  bool esMayorDeEdad(int edad)
  string clasificarEdad(int edad)
    → "Niño" (<12), "Adolescente" (12-17), "Adulto" (18+)

En main lee los datos y llama a cada función mostrando resultados.

Entrada:
  80.0 90.0 85.0
  6.0 4.0
  20
Salida esperada:
  Promedio de notas: 85.00
  Area del rectangulo: 24.00
  Edad 20: Adulto (mayor de edad)
----------------------------------------------------------------------------------------------------
*/

#include <iostream>
#include <string> 

//Prototipos
double calcularPromedio3 (double a, double b, double c);
double calcularAreaRectangulo (double base, double altura);
bool esMayorDeEdad (int edad);
std::string clasificarEdad (int edad);

double calcularPromedio3 (double a, double b, double c){
    return (a + b + c)/3;
}

double calcularAreaRectangulo (double base, double altura){
    return base * altura;
}

bool esMayorDeEdad (int edad){
    if (edad >= 18){
        return true;
    }
    else{
        return false;
    }
}

std::string clasificarEdad (int edad){
    if (esMayorDeEdad(edad) == false && edad < 12){
        return "nino";
    }
    else if ( esMayorDeEdad(edad) == false && edad >= 12){
        return "adolescente";
    }
    else if (esMayorDeEdad (edad) == true){
        return "adulto";
    }
}

int main (){

int a, b, c;
int base, altura;
int edad;


std::cin>>a>>b>>c>>base>>altura>>edad;

std::cout<<"Promedio: "<<calcularPromedio3 (a, b, c)<<std::endl;
std::cout<<"Area del rectangulo: "<<calcularAreaRectangulo(base, altura)<<std::endl;
std::cout<<"Edad "<<edad<<": "<<clasificarEdad(edad)<<std::endl;

return 0;
}