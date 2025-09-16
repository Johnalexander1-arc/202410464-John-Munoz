#include <iostream>

using namespace std;

bool maintenance(int hojas, int intervalo){
    if(hojas%intervalo == 0)
    {
        cout <<"Es neesario realizar mantenimiento " <<endl;
        return true;
    }else
    {
        cout <<"Aun no es necesario el mantenimiento " <<endl;
        return false;
    }
       
    }

int main(){

    int sheetsNumber;
    int interval;

    cout <<"Hola, por favor ingrese el numero de hojas producidas: ";
    cin >>sheetsNumber;

    cout <<"Por favor ingrese el intervalo de hojas en q debe detenerse la produccion para mantenimiento: ";
    cin >>interval;

    maintenance(sheetsNumber, interval);   
    return 0;
}