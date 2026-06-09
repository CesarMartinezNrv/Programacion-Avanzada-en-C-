//Invertir lista 

#include <iostream>
using namespace std;

void InvertirArreglo (int arreglo[]){
    for (int i{arreglo.size()}; i >= 0; i--){
        int inicio{0};
        if (inicio < arreglo.size()){
            int a = arreglo[i];
            arreglo [inicio] = a;
            inicio++;
        }
    }
}

int main(){
    int arreglo[2] {2,1};
    InvertirArreglo (arreglo);

    for (int i{0}; i < 2; i++){
        cout<< arreglo[i]<<endl;
    }

return 0;
}
