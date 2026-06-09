/*
Nombre: César Martínez 
Fecha: 07/06/2026


----------------------------------------------------------------------------------------------------
E096 | Sobrecarga de operadores
Crea la clase Vector2D con atributos x, y (double).
Sobrecarga:
  + para suma de vectores
  * para producto escalar (dot product = x1*x2 + y1*y2)
  << para imprimir el vector (friend function)

Entrada:
  3.0 4.0
  1.0 2.0
Salida esperada:
  v1 = (3.00, 4.00)
  v2 = (1.00, 2.00)
  v1 + v2 = (4.00, 6.00)
  v1 · v2 = 11.00
----------------------------------------------------------------------------------------------------
*/

#include <iostream>
#include <iomanip>

using namespace std;

class Vector2D {
private:
    double x;
    double y;

public:
    Vector2D(double x_ingresado = 0.0, double y_ingresado = 0.0):x{x_ingresado}, y{y_ingresado}{
    }

    Vector2D operator+(const Vector2D& otro_vector) const{
        return Vector2D(x + otro_vector.x, y + otro_vector.y);
    }

    double operator*(const Vector2D& otro_vector) const{
        return (x * otro_vector.x) + (y * otro_vector.y);
    }

    friend ostream& operator<<(ostream& salida, const Vector2D& vector);
};

ostream& operator<<(ostream& salida, const Vector2D& vector){
    salida<<"("<<vector.x<<", "<<vector.y<<")";
    return salida;
}

int main(){

double x1{0.0};
double y1{0.0};
double x2{0.0};
double y2{0.0};

cin>>x1>>y1;
cin>>x2>>y2;

Vector2D v1(x1, y1);
Vector2D v2(x2, y2);
Vector2D suma{v1 + v2};
double producto{v1 * v2};

cout<<fixed<<setprecision(2);
cout<<"v1 = "<<v1<<endl;
cout<<"v2 = "<<v2<<endl;
cout<<"v1 + v2 = "<<suma<<endl;
cout<<"v1 · v2 = "<<producto<<endl;

return 0;
}