/*
Nombre: César Martínez 
Fecha: 05/07/2026


----------------------------------------------------------------------------------------------------
E039 | Menú con funciones separadas
Crea un menú con 4 opciones usando funciones distintas:
  1. Área de rectángulo
  2. Área de triángulo
  3. Área de círculo
  4. Salir

Entrada:
  1
  5.0 3.0
  4
Salida esperada:
  === Calculadora de areas ===
  1. Rectangulo
  2. Triangulo
  3. Circulo
  4. Salir
  Opcion: Base: 5.00  Altura: 3.00 -> Area: 15.00
  === Calculadora de areas ===
  1. Rectangulo
  2. Triangulo
  3. Circulo
  4. Salir
  Opcion: Hasta pronto.
----------------------------------------------------------------------------------------------------
*/

#include <iostream> 

//Prototipos
void menu(void);
double AreaCirculo(double r);
double AreaTriangulo(double base, double altura);
double AreaRectangulo(double base, double altura);



double AreaCirculo(double r){
    double pi = 3.1416;
    return pi * r * r;
}

double AreaTriangulo(double base, double altura){
    return (base * altura)/2;
}

double AreaRectangulo(double base, double altura){
    return base * altura;
}

void menu(void){
    int n{0}, base, altura, radio;
    
    do{
    std::cout<<"=== Calculador de Areas ==="<<std::endl;
    std::cout<<"1. Rectangulo"<<std::endl;
    std::cout<<"2. Triangulo"<<std::endl;
    std::cout<<"3. Circulo"<<std::endl;
    std::cout<<"4. Salir"<<std::endl;
    std::cin>>n;

    if(n == 1){
        std::cin>>base>>altura;
        std::cout<<"Opcion: "<<n<<" Base: "<<base<<" Altura: "<<altura<<" -> Area:"<<AreaRectangulo(base, altura)<<std::endl;
    }
    else if(n == 2){
        std::cin>>base>>altura;
        std::cout<<"Opcion: "<<n<<" Base: "<<base<<" Altura: "<<altura<<" -> Area:"<<AreaTriangulo(base, altura)<<std::endl;
    }
    else if(n == 3){
        std::cin>>radio;
        std::cout<<"Opcion: "<<n<<" Radio: "<<radio<<" -> Area: "<<AreaCirculo(radio)<<std::endl;
    }
    } while (n != 4);
    std::cout<<"Hasta pronto";
}

int main(){

menu();
}