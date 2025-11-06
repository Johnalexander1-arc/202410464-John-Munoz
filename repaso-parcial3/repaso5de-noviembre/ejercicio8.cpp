#include <iostream>

using namespace std;

void price(){
    string productos[5] = {"Camisa", "Pantalón", "Zapatos", "Sombrero", "Correa"};
float precios[5] = {2500, 8000, 12000, 3500, 25000};
float suma=0;

for(int i= 0; i < 5; i++)
{
    cout <<productos[i] <<": " <<precios[i] <<endl;
    suma+= precios[i];
    
    
}
if(suma > 150000){
 float descuento= suma* 0.10;
 float total= suma - descuento;
 cout <<"total con descuento del 10%: " <<total <<endl;
    }else
    {
        cout <<"total sin descuento: " <<suma <<endl;
    }
}

int main(){
    price();
    return 0;
    
}