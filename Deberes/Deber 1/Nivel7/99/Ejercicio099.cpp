/*
Nombre: César Martínez 
Fecha: 07/06/2026


----------------------------------------------------------------------------------------------------
E099 | Memoria dinámica + OOP
Crea la clase Lista con:
  - Constructor Lista(int capacidad): recibe la capacidad máxima
    y reserva dinámicamente un arreglo de esa capacidad con new.
  - Atributos privados: int* datos, int capacidad, int cantidad
  - Destructor ~Lista(): libera el arreglo e imprime mensaje.
  - agregar(int val): agrega val si hay espacio (cantidad < capacidad).
    Si está llena, imprime "Lista llena."
  - imprimir(): imprime todos los elementos agregados.
  - promedio(): retorna el promedio de los elementos agregados.

Entrada:
  5
  10 20 30 40 50
Salida esperada:
  Lista: 10 20 30 40 50
  Promedio: 30.00
  Destructor: memoria liberada.
----------------------------------------------------------------------------------------------------
*/

#include <iostream>
#include <iomanip>

using namespace std;

class Lista {
private:
    int* datos;
    int capacidad;
    int cantidad;

public:
    Lista(int capacidad_ingresada):datos{nullptr}, capacidad{capacidad_ingresada}, cantidad{0}{
        if(capacidad > 0){
            datos = new int[capacidad];
        }
    }

    ~Lista(){
        delete[] datos;
        datos = nullptr;
        cout<<"Destructor: memoria liberada."<<endl;
    }

    void agregar(int valor){
        if(cantidad < capacidad){
            datos[cantidad] = valor;
            cantidad++;
        }
        else{
            cout<<"Lista llena."<<endl;
        }
    }

    void imprimir() const{
        cout<<"Lista: ";

        for(int i{0}; i < cantidad; i++){
            cout<<datos[i]<<" ";
        }

        cout<<endl;
    }

    double promedio() const{
        if(cantidad == 0){
            return 0.0;
        }

        double suma{0.0};

        for(int i{0}; i < cantidad; i++){
            suma = suma + datos[i];
        }

        return suma / cantidad;
    }
};

int main(){

int capacidad{0};
int valor{0};

cin>>capacidad;

Lista lista(capacidad);

for(int i{0}; i < capacidad; i++){
    cin>>valor;
    lista.agregar(valor);
}

cout<<fixed<<setprecision(2);
lista.imprimir();
cout<<"Promedio: "<<lista.promedio()<<endl;

return 0;
}