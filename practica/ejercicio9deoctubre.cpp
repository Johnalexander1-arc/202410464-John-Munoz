#include <iostream>

using namespace std;

void duplicateChars(){
    string userName = "John Munoz";
    string duplicated= " ";

    for (int i=0; i < userName.size(); i++)
    {
        duplicated+= userName[i];
        duplicated+= userName[i];
    }
    cout <<duplicated <<endl;

}

void invertirString(){
    string userSecondName = "Alexander";
    string invertir = "";

    for (int i = userSecondName.size(); i>=0; i--)
    {
        invertir += userSecondName[i];
    }
cout <<invertir <<endl;

}

void wordsCounteer(){
    string saludo = "hola mundo palabra";
    int counter = 1;

    for (int i=0; i < saludo.size(); i++)
    {

       char letter = saludo[i];
        if(letter == ' ')
        {
            counter++;
        }  
    }
    cout << counter << endl;
}

void verifyPasswordSecure(){
string realPassword = "pan con cafe";
string userPassword;

cout <<"por favor ingrese la contraseña: ";
cin >> userPassword;

        if( realPassword == userPassword)
        {
            cout<<"la contraseña es correcta" <<endl;
        } else 
        cout <<"la contraseña es incorrecta" <<endl;
    }


int main(){
verifyPasswordSecure();
return 0;
}




































