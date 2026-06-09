#include <iostream>
#include <string>
#include <vector>

void palindromo(std::string palabra){

    bool repetidos{true};
    for(int i{0}; i < palabra.size() / 2; i++){
        if (palabra[i] != palabra[palabra.size() - 1 - i]){
            repetidos = false;
        }
    }

    if (repetidos == true){
        std::cout<<"La palabra "<<palabra<<" es palindromo.";
    }
    else{
        std::cout<<"La palabra "<<palabra<<" NO es palindromo. ";
    }
}

int main (){

std::string palabra;
std::cin>>palabra;

palindromo(palabra);

return 0;
}