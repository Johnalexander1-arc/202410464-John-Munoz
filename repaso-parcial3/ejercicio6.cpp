#include <iostream>

using namespace std;

void  palindrome(){
    string userString;
    string newString="";

    cout <<"por favor ingrese una palabra para comoporbar si es un palindromo: ";
    cin >>userString;

    for (int i = userString.size()-1; i >=0; i--)
    {
        char letter= userString[i];

        newString+= letter;
    }
    if(newString==userString){
        cout <<"la palabra ingresada es un palindromo: ";
    }else
    {
        cout <<"la palabra ingresada no es un palindromo: ";
    }
}


int main(){
    palindrome();
    return 0;
}