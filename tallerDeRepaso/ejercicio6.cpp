#include <iostream>

using namespace std;

int mayor(int number1, int number2, int number3){
    if(number1 > number2)
    {
        return number1;
    }else if(number2 > number3)
    {
        return number2;
    }else if(number3 > number1){
        return number3;
    }else if(number1 > number3){
        return number1;
    }else if(number2 >number1){
        return number2;
    }else if(number3 > number2){
        return number3;
    }                                                                      
}

int main (){
   int firstNumber;
   int secondNumber;
   int tirthNumber;

   cout <<" Bienvenido, por favor ingrese el primer numero: ";
   cin >> firstNumber;

   cout <<"por favor ingrese el segundo numero: ";
   cin >>secondNumber;

   cout <<"por favor ingrese el tercer numero: ";
   cin >>tirthNumber;

   cout <<"el numero mayor es :" << mayor(firstNumber,secondNumber, tirthNumber) <<endl;
    
    return 0;
}