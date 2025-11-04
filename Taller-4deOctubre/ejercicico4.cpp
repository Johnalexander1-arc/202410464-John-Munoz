#include <iostream>

using namespace std;

void agesList(){
   float precios[6] = {12.5, 8.0, 9.9, 15.3, 11.7, 6.4};
    int suma=0;
    float maxPrice= precios[0];
    float minPrice= precios[0];
    
    for (int i =0; i < 6; i++){
        if(precios[i] > maxPrice){
            maxPrice = precios[i];
        }
        else if(precios[i] < minPrice){
            minPrice= precios[i];
        }

        suma += precios[i];
  }

        cout <<"el suma de los precios  es: " <<suma <<endl;
        cout <<"el precio mas bajo es: " <<minPrice <<endl;
        cout <<"el precio mas alto es : " <<maxPrice <<endl;
  
}
    

int main(){
    agesList();
    return 0;
}