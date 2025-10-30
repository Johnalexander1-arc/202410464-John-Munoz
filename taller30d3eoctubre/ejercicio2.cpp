#include <iostream>

using namespace std;

void gradesAverage(){
    float grades[5]={3.5, 4.0, 2.8, 3.9, 4.2};
    float suma=0;
    
    for (int i =0; i < 4; i++){
    
    cout <<"contador en: " << i <<endl;
    cout <<"el valor de la lista es: " << grades[i] <<endl;
    suma+= grades[i];
    }

    float average= suma/5;
    cout <<"el rpomedio de las calificaciones es: " <<average <<endl;
}

int main(){
    gradesAverage();
    return 0;
}