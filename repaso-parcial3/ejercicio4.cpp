#include <iostream>

using namespace std;

void investWord(){
    string userString;
    string newString="";

    cout <<"por favor ingrese la palabra que desea invertir: ";
    cin >>userString;

    for(int i=userString.size()-1; i>=0; i--)
    {
        char letter= userString[i];
        newString+= letter;
    }
    cout <<"la palabra ingresada se ha invertido: "<<newString <<endl;
}

int main(){
    investWord();
    return 0;
}