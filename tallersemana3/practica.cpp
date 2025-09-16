#include <iostream>

using namespace std;

int main(){
    int userOption;
    int suma = 0;
    cout <<"por favor ingrese el numero de veces q desea sumar n enteros: " << endl;
    cin >>userOption;
  

    for(int i= 1; i<=userOption; i++)
    {
         suma +=  i; 
        cout << i<< "=" <<suma;
    
    }

    cout <<"el resulatdo de la suma de las primeros: " <<userOption << "es: " <<suma <<endl;
    return 0;
}