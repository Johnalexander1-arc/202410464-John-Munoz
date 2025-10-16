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

    for(int i = firstWord.size()-1 ; i>=0; i--)
    {
        invertir += firstWord[i];
    
    }

        if(firstWord==invertir)
        {
            cout <<"la primera palabra es un palindromo."<<endl;
        }else
        {
            cout <<"la primera palabra no es un palindromo. "<<endl;
        }

        for(int j= secondWord.size()-1 ; j>=0; j--)
        {
            invertir2+= secondWord[j];
        }

            if(secondWord==invertir2)
            {
                cout <<"la palabra 2 es un pálindromo."<<endl;
            }else
            {
                cout <<"la segunda palabra no es un palindromo. "<<endl;
            }
        }

int main(){
    palindromos();
    return 0;
}