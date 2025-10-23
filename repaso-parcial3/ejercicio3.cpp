#include <iostream>

using namespace std;

void lettersCounter(){
    string fistWord;
    string secondWord;
    int similarLettersCounter=0;
    int diferentLettersCounter=0;

    cout <<"por favor ingrese la primera palabra: ";
    cin >>fistWord;

    cout <<"por favor ingrese la segunda palabra: ";
    cin >>secondWord;
    
    for(int i=0; i< fistWord.size(); i++)
    {
        char letter= fistWord[i];

        for (int j=0; j< secondWord.size(); j++)
        {
            char letter2= secondWord[j];

            if(letter== letter2)
            {
                similarLettersCounter++;
                 

            }else if(letter >= 'a'&& letter <= 'z')
            {
                if(letter != letter2){
                diferentLettersCounter++;
                break;
                }
            }
        }
    } 
    cout <<"el numero de letras iguales de las dos palabras es: " <<similarLettersCounter <<endl;
    cout <<"el numero de letras distintas en ambas palabras es: " <<diferentLettersCounter <<endl;
}

int main(){
    lettersCounter();
    return 0;
}