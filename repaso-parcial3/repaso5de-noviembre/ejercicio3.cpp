#include <iostream> 

using namespace std;

void age(){
     int edades[6] = {18, 21, 25, 30, 27, 22};
     int suma=0;

     for(int i=0; i < 6; i++){
        
        cout <<"contador es: " <<i <<endl;
        cout <<"el valor de la lista es: " <<edades[i] <<endl;
        suma+= edades[i];
     }
int average= suma/6;
cout <<"el promedio de las notas es: " <<average <<endl;
}


int main(){
    age();
    return 0;
}