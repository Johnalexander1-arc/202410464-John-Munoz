#include <iostream>

using namespace std;


int spacesCounter(string userString){
    int counter=0;
    int character=0;

    for(int i=0; i < userString.size(); i++){
        char letter= userString[i];

        if(letter ==' ')
        {
            counter++;
        }
    }
return counter;
}

int withoutSpaces (string userString){
    
    int character=0;

    for(int i=0; i < userString.size(); i++){
        char letter2= userString[i];

        if(letter2 !=' ')
        {
             character++;
        }
    }
return character;
}

void validatios(){
    string userString;

    cout <<"por favor ingrese una cadena de texto: ";
    getline(cin, userString);

    int totalChars= userString.size();
    int validation1= spacesCounter(userString);
    int validation2= withoutSpaces(userString);
    
    cout <<"total de caracteres: " <<validation1 <<endl;
    cout <<"sin contar espacios: " <<validation2 <<endl;
    cout <<"total de caracteres: " <<totalChars <<endl;
}


int main(){
    validatios();
    return 0;
}