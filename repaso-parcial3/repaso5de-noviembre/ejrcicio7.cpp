#include <iostream>

using namespace std;

int wordCounter(string userString){
    int words=1;

    for(int i=0; i < userString.size(); i++)
    {
        char letter= userString[i];

        if(letter ==' ')
        {
            words++;
        }
    }
   return words; 
}

int mayusCounter(string userString){
    int mayusLetter=0;

    for(int j=0; j < userString.size(); j++)
    {
        char letter2= userString[j];
        int ascii=letter2;

        if(ascii >= 65 && ascii <= 90)
        {
            mayusLetter++;
        }
    }
   return mayusLetter; 
}

void validation(){
    string userString;

    cout <<"por favor ingrese una cadena de texto: ";
    getline(cin, userString);

    int validation1= wordCounter(userString);
    int validation2= mayusCounter(userString);

    cout <<"palabras: " <<validation1 <<endl;
    cout <<"mayusculas: " <<validation2 <<endl;
}


int main(){
    validation();
    return 0;
}