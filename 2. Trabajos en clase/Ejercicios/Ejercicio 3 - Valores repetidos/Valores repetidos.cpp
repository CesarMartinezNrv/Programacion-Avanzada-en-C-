#include <iostream>
#include <vector>
using namespace std;

//Variables Gobales
int veces_repetidas{0};
int num_repetido{0};

int valores_repetidos (vector <int>& nums){
    for (int i {0}; i < nums.size(); i++){
        int comparacion = nums[i];
        for (int i{0}; i < nums.size(); i++){
            if ( comparacion == nums[i]){
                veces_repetidas++;
            }

        }
    }
}

int main (){
vector <int> nums {1,6,2,3,4};

valores_repetidos(nums);

cout<<veces_repetidas;
}