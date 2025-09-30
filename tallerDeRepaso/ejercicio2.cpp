#include <iostream>

using namespace std;

void  clasificarnumero (int number){
    if (number > 0)
    {
        cout <<"El numero ingresado es mayor a 0 "<<endl;
    }else if(number == 0)
    {
        cout <<"el numero ingresado es igual a 0 " <<endl;
    }
     else
     {
        cout <<"el numero es menor a 0 " <<endl;
     } 
     if(number%5==0)
     {
        cout <<"el numero es divisible entre 5";
     }else
     {
        cout <<"el numero no es divisible entre 5";
     }
}
     int main(){
        int number;

        cout <<"Hola, por favor ingrese un numero: ";
        cin >>number;

        clasificarnumero(number);

        return 0;
     }
    

