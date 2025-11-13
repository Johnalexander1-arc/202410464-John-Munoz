#include <iostream>

using namespace std;

void getNewSales(char**& names, int*& values, int& amount){
    cout <<"¿ingrese el numero de ventas que desea registrar: " ;
    cin >>amount;

    names= new char*[amount];
    values= new int[amount];

    for(int i=0; i < amount; i++){
        names[i]=new char[30];

        cout <<"ingrese la venta realizada # " <<i+1 <<":";
        cin >>names[i];

        cout <<"ingrese el valor de la venta realizada # " <<i+1 <<": ";
        cin >>values[i]; 
    }
cout <<"ventas registradas de forma correcta " <<endl;
}

void printSales(char** names, int* values, int& amount){
    if(amount ==0)
    {
        cout <<"no se han registrado ventas " <<endl;
        return;
    }

    cout <<"--------LISTA DE VENTAS-------" <<endl;
    for(int i=0; i < amount; i++)
    {
        cout <<"venta #" <<i +1 <<": " <<names[i] <<" valor: " <<values[i] <<endl;
    }
}

void modifySales(char ** names, int* values, int amount){
    if(amount==0)
    {
        cout <<"no hay ventas registradas aun " <<endl;
        return;
    }

    char search[30];
    cout <<"ingrese el nombre de la venta que desea modificar : ";
    cin >>search;

    bool found=false;
    for(int i=0; i < amount; i++){
        int k=0;
        while(names[i][k]== search[k] &&names[i][k] != '\0' && search[k] !='\0'){
            k++;
        }
        if(names[i][k]=='\0' && search [k]== '\0'){
            cout <<"venta: " <<names[i] <<" valor actual: $ " <<values[i] <<endl;
            cout <<"ingrese el valor nuevo de venta: ";
            cin >>values[i];
            cout <<"valor actualizado " <<endl;
            found= true;
            break;
        }
    }
    if(!found) cout <<"venta no encontrada " <<endl;
}

void findSale(char** names, int* values, int amount){
    if(amount==0){
        cout <<"no hay ventas registradas aun " <<endl;
        return;
    }

    char search[30];
    cout <<"ingrese el nombre dr la venta q desea buscar: ";
    cin >> search;

    bool found= false;
    for(int i=0; i < amount; i++){
        int j=0;

        while(names[i][j]==search[j] && names[i][j] != '\0' && search[j]!= '\0'){
            j++;
        }

        if(names[i][j]== '\0' !='\0' &&search[j]== '\0'){
            cout <<"venta encontrada en la posicion " <<i+1 <<"con valor $" <<values[i] <<endl;
            found =true;
            break;

        }
    }
if(!found )cout <<"venta no encontrada " <<endl;
}

void salesInRange(char** names, int* values, int& amount){
        if(amount ==0){
       cout <<"no hay ventas registradas aun " <<endl;
        return;
    }
    int min, max;
    cout <<"ingrese al valor minimo: ";
    cin >> min;
    cout <<"ingrese le valor maximo: ";
    cin >>max;

    cout <<"ventas en el rango: " <<min <<" -" <<max <<endl;

    bool found= false;
    for(int i=0; i< amount; i++){
        if(values[i] >= min && values[i] <= max){
            cout <<"-" <<names[i] <<"-$" <<values[i] <<endl;
            found=true;
        }
    }
    if(!found) cout <<"no se encontraron ventas en ese rango: " <<endl;
}

void calculateTotal(int* values, int amount){
    if(amount ==0)
    {
        cout <<"no hay ventas registradas " <<endl;
        return;
    }
}
void run(){
    char** names = nullptr;
    int* values = nullptr;
    int amount=0;
    int option;

    do{
        cout <<"------MENU DE VENTAS------" <<endl;

        cout <<"1. Registrar o reiniciar ventas; " <<endl;
        cout <<"7. salir " <<endl;

         cout <<"por favor seleccione uan opcion: " <<endl;
        cin >>option;

        switch(option){
            case 1:
            getNewSales(names, values, amount);
            break;

            case 7: 
                cout <<"saliendo del programa " <<endl;
                break;

                default:
                    cout <<"la opcion ingresada no es valida " <<endl;
        }
    }
    while(option != 7);
    if(names != nullptr)
    {
        for(int i=0; i < amount; i ++)
        {
            delete[] names[i];
        }
        delete[] names;
    }
    delete[] values;
}

int main(){
    run();
    return 0;
}
