#include <iostream>

using namespace std;

void vowels(){

    string userString;
    int vowelsCounter=0;
    int consonantCounter=0;

    cout <<"por favor ingrese una cadena de texto: ";
    getline(cin, userString);

    for(int i=0; i < userString.size(); i++)
    {
        char letter= userString[i];

        if(letter=='a' || letter=='e' || letter=='i' || letter=='o' || letter=='u' )
        {
            vowelsCounter++;
        }else if((letter >='a' && letter <= 'z')&&(letter!='a' || letter!='e' || letter!='i' || letter!='o' || letter!='u'))
        {
           consonantCounter++;
        }
    }
    cout <<"la cantidad  de vocales de la palabra ingresada son: " <<vowelsCounter <<endl;
    cout <<"la cantidad de consonantes de la palabra son: " <<consonantCounter <<endl;
}

int main(){
    vowels(); 
    return 0;
}