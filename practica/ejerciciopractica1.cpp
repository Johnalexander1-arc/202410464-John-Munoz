#include <iostream>

using namespace std;

void operaciones(int userOption, int number1, int number2){
  
    if(userOption==1)
    {
        int sumresult= number1+number2;
        cout <<"el resultado de la suma es: " <<sumresult <<endl;
    } else if(userOption ==2)
    {
        int subsresult= number1-number2;
        cout <<"el resultado de la resta es: " <<subsresult <<endl; 
    } else if(userOption==3)
    {
       int productResult=  number1*number2;
       cout <<"el resultado de la multiplicacion es: " <<productResult <<endl;
        
    }
    else if(userOption > 3)
    {
        cout <<"opciion invalida" <<endl;
    }
 
    
}

int main(){
    int userNumber;
    int number1, number2;

    cout <<"por favor ingrese la operacion 1 suma 2 resta 3 multiplicacion: ";
    cin >>userNumber;

    cout <<"numero 1:";
    cin >> number1;

    cout <<"numero 2:";
    cin >>number2;

    operaciones(userNumber, number2, number1);
    return 0;
}