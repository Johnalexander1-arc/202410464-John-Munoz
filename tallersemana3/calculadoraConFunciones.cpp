#include <iostream>

using namespace std;

//Función con retorno para calcular el numero mayor
    int getMax(int numberOne, int numberTwo){
        if(numberOne < numberTwo)
    {
            return numberTwo;
    }
        else
        {
            return numberOne;
        }

    }

//Fucnion principal 
int main(){
    int numberOne, numberTwo;
    int userOption;
    
    cout <<" Bienvenido, elija la operacion a realizar: 1= suma, 2 =resta, 3 = producto, 4 = calculaer el numero mayor: ";
    cin >> userOption;

    //Solicitud de numeros

    cout <<"Por favor ingrese el primer numero" <<endl;
    cin >>numberOne;
    cout <<"Por favor ingrese un segundo numero:" <<endl;
    cin >>numberTwo;

    int sumResult = numberOne + numberTwo;
    
    int subsResult = numberOne - numberTwo;

    int productResult = numberOne * numberTwo;

// Operaciones

    switch(userOption)
    {
        case 1:
        cout <<" la suma de los 2 numeros es: " <<sumResult <<endl;
        break;
    case 2:
        cout <<" la resta de los 2 numeros es: " <<subsResult <<endl;
        break;
    case 3:
        cout <<" el producto de los 2 numeros es: " <<productResult <<endl;
        break;
    case 4:
        cout <<" El numero mayor es: " <<getMax(numberOne, numberTwo) <<endl;
        break;
        default:
            cout <<"la opcion ingresada no es valida" <<endl;

    }

    return 0;
}