#include <iostream>

using namespace std;

void lettersCounter(){
    string userWord1;
    string userWord2;
    int similarLetterCounter=0;

    cout <<"por favor ingrese la primera palabra: ";
    cin >> userWord1;

    cout <<"por favor ingrese la segunda palabra: ";
    cin >>userWord2;

    for(int i=0; i<userWord1.size();i++ )
    {
        char letter= userWord1[i];

        for(int j=0; j <userWord2.size(); j++)
        {
            char letter2= userWord2[j];
        
        if(letter== letter2)
        {
            similarLetterCounter++;
            break;
        }
        }
        
    }
cout <<"la cantidad de letras que se aparecen en ambas palabras es: " <<similarLetterCounter
<<endl;

}

int main(){
    lettersCounter();
    return 0;
}