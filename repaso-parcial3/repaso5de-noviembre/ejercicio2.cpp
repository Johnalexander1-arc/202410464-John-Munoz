#include <iostream>

using namespace std;

int vowelCounter(string userString){
    int vowels=0;


    for(int i = 0; i < userString.size(); i++){
        char letter= userString[i];

        if(letter == 'a' || letter == 'e'  || letter == 'i' || letter == 'o' || letter == 'u' )
        {
            vowels++;
        }
    }
    return vowels;
}

int consonants(string userString){
    int consonantCounter=0;

    for(int j=0; j < userString.size(); j++){
        char letter2= userString[j];

        if(letter2 >='a' && letter2 <= 'z')
        {
            if(letter2 != 'a' && letter2 != 'e'  && letter2 != 'i' && letter2 != 'o' && letter2 != 'u')
            {
                consonantCounter++;
            }
        }
    }
    return consonantCounter;
}

int numberCounter(string userString){
    int numbers=0;
    

    for(int k=0; k < userString.size(); k++){
        char letter3= userString[k];

        if(letter3 >='0' && letter3 <='9' )
        {
            numbers++;
        }
    }
    return numbers;
}

void validation(){
    string userString;

    cout <<"por favor ingrese una cadena de texto: ";
    getline(cin, userString);

    int validation1= vowelCounter(userString);
    int validation2= consonants(userString);
    int validation3= numberCounter(userString);

    cout <<"vocales: " <<validation1 <<endl;
    cout <<"consonantes: " <<validation2 <<endl;
    cout <<"numeros: " <<validation3 <<endl;

}

int main(){
    validation();
    return 0;
}