#include <iostream>

using namespace std;

void agesList(){
    int age[6]={18, 21, 25, 30, 27, 22};
    int suma=0;
    
    for (int i =0; i < 6; i++){
    
    cout <<"contador en: " << i <<endl;
    cout <<"el valor de la lista es: " <<age[i] <<endl;
    suma += age[i];
}
    float average = suma/6;
    cout <<"el promedio de las  edades es: " <<average <<endl;
}
    

int main(){
    agesList();
    return 0;
}