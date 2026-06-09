/*
Nombre: César Martínez 
Fecha: 07/06/2026


----------------------------------------------------------------------------------------------------
E090 | Encapsulamiento — cuenta bancaria
Crea la clase CuentaBancaria con:
  - Atributo privado: saldo (double)
  - Constructor con saldo inicial
  - depositar(double) con validación (monto > 0)
  - retirar(double) con validación (saldo suficiente y monto > 0)
  - getSaldo()

En main usa un menú do-while:
  1. Depositar
  2. Retirar
  3. Ver saldo
  4. Salir

Entrada:
  1000.0
  1
  500.0
  2
  200.0
  2
  2000.0
  4
Salida esperada:
  Saldo inicial: $1000.00
  === Menu ===
  1. Depositar  2. Retirar  3. Ver saldo  4. Salir
  Opcion: Monto: Deposito OK. Saldo: $1500.00
  === Menu ===
  1. Depositar  2. Retirar  3. Ver saldo  4. Salir
  Opcion: Monto: Retiro OK. Saldo: $1300.00
  === Menu ===
  1. Depositar  2. Retirar  3. Ver saldo  4. Salir
  Opcion: Monto: Error: saldo insuficiente. Saldo: $1300.00
  === Menu ===
  1. Depositar  2. Retirar  3. Ver saldo  4. Salir
  Opcion: Hasta pronto.
----------------------------------------------------------------------------------------------------
*/
#include <iostream>
#include <iomanip>

using namespace std;

class CuentaBancaria {
private:
    double saldo;

public:
    CuentaBancaria(double saldo_inicial):saldo{0.0}{
        if(saldo_inicial >= 0){
            saldo = saldo_inicial;
        }
    }

    bool depositar(double monto){
        if(monto > 0){
            saldo = saldo + monto;
            return true;
        }

        return false;
    }

    bool retirar(double monto){
        if(monto > 0 && monto <= saldo){
            saldo = saldo - monto;
            return true;
        }

        return false;
    }

    double getSaldo() const{
        return saldo;
    }
};

int main(){

double saldo_inicial{0.0};
double monto{0.0};
int opcion{0};

cout<<fixed<<setprecision(2);
cin>>saldo_inicial;

CuentaBancaria cuenta(saldo_inicial);
cout<<"Saldo inicial: $"<<cuenta.getSaldo()<<endl;

do{
    cout<<"=== Menu ==="<<endl;
    cout<<"1. Depositar  2. Retirar  3. Ver saldo  4. Salir"<<endl;
    cout<<"Opcion: ";
    cin>>opcion;

    if(opcion == 1){
        cout<<"Monto: ";
        cin>>monto;

        if(cuenta.depositar(monto)){
            cout<<"Deposito OK. Saldo: $"<<cuenta.getSaldo()<<endl;
        }
        else{
            cout<<"Error: monto invalido. Saldo: $"<<cuenta.getSaldo()<<endl;
        }
    }
    else if(opcion == 2){
        cout<<"Monto: ";
        cin>>monto;

        if(cuenta.retirar(monto)){
            cout<<"Retiro OK. Saldo: $"<<cuenta.getSaldo()<<endl;
        }
        else{
            cout<<"Error: saldo insuficiente. Saldo: $"<<cuenta.getSaldo()<<endl;
        }
    }
    else if(opcion == 3){
        cout<<"Saldo: $"<<cuenta.getSaldo()<<endl;
    }
    else if(opcion == 4){
        cout<<"Hasta pronto."<<endl;
    }
    else{
        cout<<"Opcion invalida."<<endl;
    }

}while(opcion != 4);

return 0;
}