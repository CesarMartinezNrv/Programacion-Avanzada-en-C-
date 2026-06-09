#include <iostream>
#include <vector>

using namespace std;

//Variables globales
int maximo {0};
int minimo {0};

//Prototipos
void max_min(vector<int>& nums);
void llenar_arreglo(vector<int>& nums);

//Funciones
void max_min(vector<int>& nums){
    maximo = nums[0];
    minimo = nums[0];

    for (int i{1}; i < nums.size(); i++){
        if (maximo < nums[i]){
            maximo = nums[i];
        }

        if (minimo > nums[i]){
            minimo = nums[i];
        }
    }
}

void llenar_arreglo(vector<int>& nums){
    int contador {1};

    for(int i{0}; i < nums.size(); i++){
        cout<<"Ingrese los valores del arreglo, valor "<<contador<<": ";
        cin>>nums[i];

        contador++;
    }
}

int main(){
int n{0};

cout<<"Ingrese el valor del tamano del arreglo: ";
cin>>n;

while (n <= 0){
    cout<<"ERROR. El tamano debe ser mayor que 0. Ingrese nuevamente: ";
    cin>>n;
}

vector<int> nums(n);

llenar_arreglo(nums);
max_min(nums);

cout<<"Valor max: "<<maximo<<endl;
cout<<"Valor min: "<<minimo<<endl;

}