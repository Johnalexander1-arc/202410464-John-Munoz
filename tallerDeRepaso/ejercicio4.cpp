#include <iostream>

using namespace std;

void conteoascendente(int number1){
    int i=0;
    while(i <= number1){
    cout << i++<<endl;
    }
}

void conteodescendente(int number2){
    int i=0;
    while(number2 >=0)
    {
cout << number2 << endl;
        number2--;
    }
}

int main (){
    int userNumber;

    cout <<"por favor ingrese un numero:";
    cin >>userNumber;

    cout <<"suma ascendente: " <<endl;
    conteoascendente(userNumber);

    cout <<"suma descendente: " <<endl;
    conteodescendente(userNumber);
    
    return 0;
}
    