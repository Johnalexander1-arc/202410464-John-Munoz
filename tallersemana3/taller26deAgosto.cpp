#include <iostream>

using namespace std;

int main (){
    string userName;
    
    int suma; 
    int resta;
    int prodcuto;
    int division;
    int modulo;
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
        cout <<"ingrese el primer numero";
        cin >> numberOne;
        cout <<"ingrese el segundo numero";
        cin >>numberTwo;
    cout<<"la suma de los 2 numeros es: " <<numberOne + numberTwo <<endl;
        cin>>suma;
        

    } 
    else if(userSelection ==2) {
        cout <<"ingrese el primer numero";
        cin >> numberOne;
        cout <<"ingrese el segundo numero";
        cin >>numberTwo;
        cout <<"la resta de los 2 numeros es: " <<numberOne-numberTwo <<endl;
        cin>> resta;
    }
    else if(userSelection==3){
        cout <<"ingrese el primer numero";
        cin >> numberOne;
        cout <<"ingrese el segundo numero";
        cin >>numberTwo;
        cout<<"el resultado de la multiplicacion es: " <<numberOne*numberTwo <<endl;
        cin >>prodcuto;
    }
    else if(userSelection==4){
        cout <<"ingrese el primer numero";
        cin >> numberOne;
        cout <<"ingrese el segundo numero";
        cin >>numberTwo;
        cout<<"el resultado de la division es: " <<numberOne/numberTwo <<endl;
        cin>>division;
    }
    else if(userSelection==5){
        cout <<"ingrese el primer numero";
        cin >> numberOne;
        cout <<"ingrese el segundo numero";
        cin >>numberTwo;
        cout<<"el modulo es: " <<numberOne%numberTwo <<endl;
        cin>> modulo;
    }
    return 0;

}

