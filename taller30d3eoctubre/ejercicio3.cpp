#include <iostream>

using namespace std;

void calculateNumbers(){
    int numbers[6]={8, 12, 5, 20, 7, 15};
    int maxNumber= numbers[0];
    
    for (int i =0; i < 6; i++){
    
        if(numbers[i] > maxNumber){
            maxNumber= numbers[i];
        }
    }
    cout <<"el numero mayor es: " <<maxNumber <<endl;

}

int main(){
    calculateNumbers();
    return 0;
}