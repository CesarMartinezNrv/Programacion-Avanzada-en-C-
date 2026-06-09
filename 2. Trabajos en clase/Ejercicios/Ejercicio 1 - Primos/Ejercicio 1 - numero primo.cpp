#include <iostream>
using namespace std;

void primos (int num){

    int contador {0};
    if (num <= 1) {
        cout<<num<<" no es un numero primo"<<endl;
    }
    else if (num == 2) {
        cout<<num<<" es un numero primo"<<endl;
    }
    else {
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                contador++;
                break;
            }
        }

        if (contador == 0) {
            cout<<num<<" es un numero primo"<<endl;
        }

        else {
            cout<<num<<" no es un numero primo"<<endl;
        }
    }
}

int main (){
    
int num{0};
cout<<"Ingrese el valor que se quiera comprobar si es numero primo o no: ";
cin>>num;
primos(num);

return 0;

}
