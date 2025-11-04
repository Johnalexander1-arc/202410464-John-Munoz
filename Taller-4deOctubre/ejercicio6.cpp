#include <iostream>

using namespace std;

void List(){
    int suma=0;


string productos[6] = {"Manzanas", "Peras", "Uvas", "Bananas", "Mangos", "Fresas"};
float precios[6] = {1500, 2300, 1800, 3100, 2700, 2600};


for(int i=0; i < 6; i++){
    {
        cout <<productos[i]<< " :" <<precios[i] <<endl;
    }

}

} 

int main(){
    List();
    return 0;
}