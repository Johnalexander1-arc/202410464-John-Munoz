#include <iostream>

using namespace std;

class intoSalesSystem{
    public:
        string* names;
        int* values;
        int amount;

void run(){
    int option;

    do{
        cout <<"------MENU DE VENTAS------" <<endl;

        cout <<"1. Registrar o reiniciar ventas; " <<endl;
        cout <<"2. mostrar las ventas " <<endl;
        cout <<"3. modificar una venta " <<endl;
        cout <<"4. buscar una vena " <<endl;
        cout <<"5. mostrar ventas dentro de un rango " <<endl;
        cout <<"6. calcular el total de ventas " <<endl;
        cout <<"7. salir " <<endl;
        cout <<"por favor seleccione una opcion: " <<endl;
        cin >>option;

        switch(option){
            case 1:
            getNewSales();
            break;
            case 2:
            printSales();
            break;
            case 3: 
            modifySales();
            break;
            case 4:
            findSale();
            break;
            case 5:
            salesInRange();
            break;
            case 6: 
            calculateTotal();
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
            delete[] names;
        }
        delete[] names;
    }
    delete[] values;
}

void getNewSales(){
    cout <<"¿ingrese el numero de ventas que desea registrar: " ;
    cin >>amount;

    names = new string[amount];
    values = new int[amount];

    for(int i=0; i < amount; i++){
        cout <<"ingrese la venta realizada # " <<i+1 <<":";
        cin >>names[i];

        cout <<"ingrese el valor de la venta realizada # " <<i+1 <<": ";
        cin >>values[i]; 
    }
    cout <<"ventas registradas de forma correcta " <<endl;
}

void printSales(){
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

void modifySales(){
    if(amount==0)
    {
        cout <<"no hay ventas registradas aun " <<endl;
        return;
    }

    string search;
    cout <<"ingrese el nombre de la venta que desea modificar : ";
    cin >> search;

    bool found=false;
    for(int i=0; i < amount; i++){
        if (names[i] == search)
        {
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

void findSale(){
    if(amount==0){
        cout <<"no hay ventas registradas aun " <<endl;
        return;
    }

    string search;
    cout <<"ingrese el nombre dr la venta q desea buscar: ";
    cin >> search;

    bool found= false;
    for(int i=0; i < amount; i++){
        if(names[i] == search){
            cout <<"venta encontrada en la posicion " <<i+1 <<"con valor $" <<values[i] <<endl;
            found =true;
            break;

        }
    }
if(!found )cout <<"venta no encontrada " <<endl;
}


void salesInRange(){
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


void calculateTotal(){
    if(amount ==0)
    {
        cout <<"no hay ventas registradas " <<endl;
        return;
    }
    int total=0; 
    for(int i=0; i < amount; i++){
        total+= values[i];
    }
    cout <<"el total de ventas es: $" <<total <<endl;
}



};

int main() {
    intoSalesSystem salesSystem;
    salesSystem.run();
    return 0;
}