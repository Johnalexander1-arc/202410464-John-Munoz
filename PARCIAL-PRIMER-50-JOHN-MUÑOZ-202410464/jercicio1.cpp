#include <iostream>

using namespace std;


void numbersequence (int number){

     cout <<"paquetes revisados: "<<endl;

    if(number%2 == 0)
    {
        for(int i=2; i<=number; i+=2)
        {
            cout << i <<endl;
        }
        }else{
            for(int i=1; i<=number; i+=2)
        {
            cout << i <<endl;
        }
    }
}
//funcion proncipal
int main(){
    int userNumber;

    cout <<"Bienvenido, ingresa un numnero por favor: ";
    cin >>userNumber;
    numbersequence(userNumber);
    return 0;
}

