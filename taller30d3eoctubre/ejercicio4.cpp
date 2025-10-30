#include <iostream>

using namespace std;

void calculatePearNumbers(){
    int values[8] = {2, 5, 7, 8, 10, 13, 16, 19};
    
    for (int i =0; i < 8; i++){

        if(values[i] %2==0){
            cout <<"los numeros pares son: " <<values[i] <<" " <<endl;
        }
    }
}
int main(){
    calculatePearNumbers();
    return 0;
}