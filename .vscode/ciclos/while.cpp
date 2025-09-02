#include <iostream>

using namespace std;

int main(){

    int numberToGuess; 
    int userNumber;

    cout <<"por favor ingrese el numero a adivinar: " <<endl;
        cin >>numberToGuess; 
        

    while(numberToGuess != userNumber)
    {   
        cout <<" ingrese un numero : " <<endl ;    
        cin >>userNumber;

        if(userNumber < numberToGuess)
        {
            cout <<"el numero ingresado es menor que el numero a adivinar "<<endl;

        }
        else if (userNumber > numberToGuess)
        {
           cout <<" el numero ingresado es mayor al numero a adivinar " <<endl;

        }
    }

return 0;

}