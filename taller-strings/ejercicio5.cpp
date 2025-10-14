#include <iostream>

using namespace std;

void palindromos(){
    string firstWord;
    string secondWord;
    string invertir= "";
    string invertir2="";
    cout <<"por favor ingrese la primera palabra:";
    cin >>firstWord;

    cout <<"ingrese la segunda palabra: ";
    cin >>secondWord;

    for(int i =0; i<= firstWord.size(); i++)
    {
        invertir += firstWord[i];

        if(firstWord==invertir)
        {
            cout <<"la primera palabra es un palindromo.";
        }
    }
        for(int i=0;i <= secondWord.size(); i++)
        {
            invertir2+= secondWord[i];

            if(secondWord==invertir2)
            {
                cout <<"la palabra 2 es un pálindromo.";
            }
        }
        
    }




int main(){
    palindromos();
    return 0;
}