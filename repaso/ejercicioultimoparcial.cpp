#include <iostream>

using namespace std;

void dataRegistrer(string* products, int amount, int* inventary){

        cout <<"ingrese el numero de producgtod que desea registrar: ";
        cin >>amount;

        products= new string[amount];
        inventary= new int[amount];
        for(int i=0; i < amount; i++){
            cout <<"ingrese el nombre del producto # " <<i+1 <<": ";
            cin >> products[i];

            cout <<"ingrese la cantidad del producto # " <<i+1 <<" : ";
            cin >> inventary[i];
        }
    cout <<"productos regitrados de forma correcta " <<endl;       
}

void printProducts(string* products, int amount, int* inventary){
if(amount==0){
        cout <<"la venta no se encontró ";
        return;
    }   
    
    cout <<"-----INVENTARIO-------" <<endl;

    for(int i=0; i < amount; i++){
        cout <<"producto # " <<i+1 <<products[i] <<"cantidad: " <<" :" <<inventary[i] <<endl;
    }
}

void modifyInventary (string* products, int amount, int* inventary){
 if(amount==0){
        cout <<"la venta no se encontró ";
        return;

     string search;

    cout <<"ingrese el nombre del producto que desea modificar: ";
    cin >> search;  

    for(int i=0; i < amount; i++){
        if(products[i]== search){
            cout <<"venta encontrada: " <<products[i] <<"cantidad: " <<inventary[i] <<endl;
            cout <<"ingrese la nueva cantidad del producto: ";
            cin >>inventary[i];

            cout<<"cantidad del producto actualizada: " <<endl;
        }
    } 
    }
}

void findSale(string* products, int amount, int* inventary){
    if(amount==0){
        cout <<"la venta no se encontró ";
        return;
    }
    }


void run(){
    string* products= nullptr;
    int amount;
    int* inventary= nullptr;

    int option;

    do{
        cout <<"-----MENÚ DE INVENTARIO-----" <<endl;
        
        cout <<"1. Registrar productos " <<endl;
        cout <<"2. mostrar el inventario " <<endl;
        cout <<"3. modificar la cantidad de un producto" <<endl;
        cout <<"4. buscar un producto por nombre " <<endl;
        cout <<"5. mostrar productos co una cantidad menor al valor dado " <<endl;
        cout <<"6. calcular la cantidad de unidades en el inventario " <<endl;
        cout <<"7. salir " <<endl;
        cout <<"por favor seleccione una opcion: " <<endl;
        cin >>option;

        switch(option){
            case 1:
                dataRegistrer(products, amount, inventary);
            case 2:
                printProducts(products, amount, inventary);
        }
    }
        while(option != 7);

        for(int i=0; i < amount; i ++)
        {
            delete[] products;
        }
        delete[] inventary;
    }
   



int main(){
    run();
    return 0;
}