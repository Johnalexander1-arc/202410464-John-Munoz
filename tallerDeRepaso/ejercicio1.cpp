#include <iostream>

using namespace std;

int main(){
    int userAge;
    string userName;
    double heigth;

    //pedir nombre
    cout <<"Bienvenido, por favor ingresa tu nombre: ";
    cin >> userName;

    //pedir edad
    cout <<"por favor, ingrese su edad: ";
    cin >>userAge;

    //pedir altura
    cout <<"por favor, ingrese su altura en metros: ";
    cin >> heigth;

    //mostrar datos
    cout <<"Hola " <<userName <<" tienes " <<userAge << " años, y mides " <<heigth<< " metros" <<endl; 


    return 0;
}