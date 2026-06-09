/*
Nombre: César Martínez 
Fecha: 07/06/2026


----------------------------------------------------------------------------------------------------
E092 | Arreglo de objetos
Crea la clase Producto con: nombre (string), precio (double).
Lee N productos en un arreglo de objetos.
Imprime el más caro y el más barato.

Entrada:
  3
  Leche 1.50
  Pan 0.80
  Queso 3.20
Salida esperada:
  Mas caro: Queso ($3.20)
  Mas barato: Pan ($0.80)
----------------------------------------------------------------------------------------------------
*/


#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Producto {
private:
    string nombre;
    double precio;

public:
    Producto():nombre{""}, precio{0.0}{
    }

    Producto(string nombre_ingresado, double precio_ingresado):nombre{nombre_ingresado}, precio{precio_ingresado}{
    }

    void asignarDatos(string nombre_ingresado, double precio_ingresado){
        nombre = nombre_ingresado;
        precio = precio_ingresado;
    }

    string getNombre() const{
        return nombre;
    }

    double getPrecio() const{
        return precio;
    }
};

int main(){

int n{0};
cin>>n;

if(n <= 0){
    cout<<"Error: cantidad invalida."<<endl;
    return 0;
}

Producto* productos{nullptr};
productos = new Producto[n];

for(int i{0}; i < n; i++){
    string nombre{""};
    double precio{0.0};

    cin>>nombre>>precio;
    productos[i].asignarDatos(nombre, precio);
}

int pos_mayor{0};
int pos_menor{0};

for(int i{1}; i < n; i++){
    if(productos[i].getPrecio() > productos[pos_mayor].getPrecio()){
        pos_mayor = i;
    }

    if(productos[i].getPrecio() < productos[pos_menor].getPrecio()){
        pos_menor = i;
    }
}

cout<<fixed<<setprecision(2);
cout<<"Mas caro: "<<productos[pos_mayor].getNombre()<<" ($"<<productos[pos_mayor].getPrecio()<<")"<<endl;
cout<<"Mas barato: "<<productos[pos_menor].getNombre()<<" ($"<<productos[pos_menor].getPrecio()<<")"<<endl;

delete[] productos;
productos = nullptr;

return 0;
}