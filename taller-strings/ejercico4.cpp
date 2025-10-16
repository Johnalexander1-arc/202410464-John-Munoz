#include <iostream>

using namespace std;

void comparation (){
    int userNumber;
    string userWords;
    int wordCounter=0;

    cout <<"por favor ingrese un numero: ";
    cin >>userNumber;

    cout <<"por favor ingrese varias palabras terminando con la palabra fin: ";


    while(true)
    {
        cin >>userWords;

        if(userWords == "fin")
        {
        break;
    }

    if(userWords.size()> userNumber)
    {
        wordCounter++;
    }
    }
    cout <<"el numero de palabras mas largas que el numero ingresado es :" << wordCounter <<endl;
 }


int main(){
    comparation();
    return 0;

}