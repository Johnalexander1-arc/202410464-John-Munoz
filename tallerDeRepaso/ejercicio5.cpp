#include <iostream>

using namespace std;

int mayor(int number1, int number2){
    if(number1 < number2)
    {
        return number2;
    }else{
        return number1;
    }
}

int main (){
   int firstNumber;
   int secondNumber;

   cout <<" Bienvenido, por favor ingrese el primer numero: ";
   cin >> firstNumber;

   cout <<"por favar ingrese el segundo numero: ";
   cin >>secondNumber;

   cout <<"el numero mayor es :" <<mayor(firstNumber,secondNumber) <<endl;
    
    return 0;
}