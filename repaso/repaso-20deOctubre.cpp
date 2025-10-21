#include <iostream>

using namespace std;

void consonantsCounter(){
    string userString= "malparido";
    string newString= " ";

    for(int i=0; i < userString.size(); i++){
        char letter= userString[i]; //GUARDAR EN LETTER LA LETRA NUMERO i DEL TEXTO userString 

        if(letter >='a' &&  letter <= 'z')// && es 'y' pero || es 'o'
        {
            if(letter != 'a' && letter !='e' && letter != 'i' &&letter != 'o' && letter != 'u')
            newString +=letter;  //toma la letra actual letter y la añade al final del texto q ya está. ++ solo funciona con numeros.      
        }
    }
    cout <<"el numero de consonantes en la palabra es: "<<newString <<endl;
}




int main(){
    consonantsCounter();
    return 0;
}