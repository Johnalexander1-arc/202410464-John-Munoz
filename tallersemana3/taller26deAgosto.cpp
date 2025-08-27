#include <iostream>

using namespace std;

int main (){
    string userName;
    
    int suma; 
    int resta;
    int prodcuto;
    int division;
    int numberOne;
    int numberTwo;
    int userSelection;

    //datos usuario

    cout <<"ingrese su nombre" <<endl;
    cin >> userName;

    //Operacion matematica
    cout <<"elija la operacion matematica, suma=1,resta=2,producto=3,division=4,modulo =5" <<endl;
    cin >> userSelection;

    if(userSelection ==1){
    cout<<"la suma de los 2 numeros es: " <<numberOne + numberTwo <<endl;

        

    } 
    else if(userSelection ==2) {
        cout <<"la resta de los 2 numeros es: " <<numberOne-numberTwo <<endl;
    }
    else if(userSelection==3){
        cout<<"el resultado de la multiplicacion es: " <<numberOne*numberTwo <<endl;
    
    }
    else if(userSelection==4){
        cout<<"el resultado de la division es: " <<numberOne/numberTwo <<endl;
    }
    else if(userSelection==5){
        cout<<"el modulo es: " <<numberOne%numberTwo <<endl;
    }
    return 0;

}

