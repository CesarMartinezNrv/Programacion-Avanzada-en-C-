/*
Nombre: César Martínez 
Fecha: 04/07/2026


----------------------------------------------------------------------------------------------------
E033 | Sobrecarga — mayor de 2 y de 3 valores
Sobrecarga la función:
  double mayor(double a, double b)
  double mayor(double a, double b, double c)

Entrada:
  4.5 9.2
  3.1 7.8 5.5
Salida esperada:
  Mayor de 2: 9.20
  Mayor de 3: 7.80
----------------------------------------------------------------------------------------------------
*/

#include <iostream>

double mayor( double a, double b){
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}
double mayor(double a, double b, double c){
    if(a > b && a > c){
        return a;
    }
    else if(b > a && b > c){
        return b;
    }
    else if(c > b && c > a){
        return c;
    }
}

int main(){
double a, b, c, d, e;
std::cin>>a>>b>>c>>d>>e;

std::cout<<"Mayor: "<<mayor(d,e)<<std::endl;
std::cout<<"Mayor: "<<mayor(a,b,c)<<std::endl;

}