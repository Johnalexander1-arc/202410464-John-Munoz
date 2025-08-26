#include <iostream>

using namespace std;

int main(){
    string userName;
    int userCode;
    
    int numberOne;
    int numberTwo;

    //Entrada por teclado
    cout << "Escriba su nombre, por favor";
    cin >> userName;

    cout <<"Por favor, escriba su código estudiantil;"
    cin >> userCode;
    //Operacion matemática
    cout <<"Por favor, ingrese un primer numero";
    cin >> numberOne

    cout <<  "Por favor, ingrese un segundo numero";
    cin >> numberTwo;

    //salida poor teclado

    cout <<"Hola: " <<userName <<endl;
    cout <<" Su codigo estudiantil:" <<userCode "es valido";

    cout <<"la suma de los 2 numeros que usted ingresó es: " <<numberOne + numberTwo <<endl;

}