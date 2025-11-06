#include <iostream>

using namespace std;

void products(){
     string productos[6] = {"Manzanas", "Peras", "Uvas", "Bananas", "Mangos", "Fresas"};
 float precios[6] = {1500, 2300, 1800, 3100, 2700, 2600};
 float suma=0;

 for(int i=0; i < 6; i ++){

    cout <<productos[i] <<": " <<precios[i] <<endl;

    if(precios[i] > 2500)
    {
        cout << "los productos con precio superior a 2500 son: " <<productos[i] <<": " <<precios[i] <<endl;
    }
    suma+= precios[i];
    
 }
cout <<"la suma total de los precios es: " <<suma <<endl;
}

int main(){
    products();
    return 0;
}