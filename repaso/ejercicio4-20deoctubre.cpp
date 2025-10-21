#include <iostream>

using namespace std;

void numberOfWords(){
    int userNumber;
    string userWords;
    int superiorWords=0;

    cout <<"por favor ingresa un numero: ";
    cin >>userNumber;

    cout <<"por favor ingresa varias palabras q terminen con la palabra 'fin': ";
    
    while(true) //ordena hacer una acción infinitamente, true siempre va a ser cierta
    {
        cin >>userWords; //le ordena leer las palabras ingresadas

        if(userWords == "fin") // aqui se rompe el while
        {
            break;
        }
        if(userWords.size() > userNumber)// compara la lomgitud de las palabras con el numero ingresado
        {
            superiorWords++;       
        }
    }
    cout <<"el numero de palabras mas extensas que el numero ingresado es: " <<superiorWords <<endl;
}

int main(){
    numberOfWords();
    return 0;
}