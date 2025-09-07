#include <iostream>

using namespace std;

int main(){

int option;
int numberOne;
int numberTwo;
string userName;


//bienvenida

cout <<"por favor ingrese su nombre: " <<endl;
cin >>userName;
cout <<" hola "<< userName ;
cout <<" Bienvenido al programa, por favor seleciones 2 numeros y la operacion que desea realizar entre ellos: "  <<endl;

//solicitar numeros
cout <<"ingrese el primer numero: " <<endl;
cin >>numberOne;
cout <<"ingrese el segundo numero: " <<endl;
cin >>numberTwo;


//eleccion de opciones
switch (option){
   case 1:
        cout <<" la suma de los 2 numeros es: " <<numberOne + numberTwo <<endl;
        break;
    case 2:
        cout <<" la resta de los 2 numeros es: " <<numberOne - numberTwo <<endl;
        break;
    case 3:
        cout <<" el producto de los 2 numeros es: " <<numberOne * numberTwo <<endl;
        break;
    case 4:
        cout <<" la division de los 2 numeros es: " <<numberOne / numberTwo <<endl;
        break;
    case 5:
        cout <<" el modulo de los 2 numeros es: " <<numberOne % numberTwo <<endl;
        break;
        default:
        cout <<"la opcion no es valida : " <<endl;

    }

    return 0;
}