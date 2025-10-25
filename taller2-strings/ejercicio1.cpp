// John Muñoz- ejercicio 1- segundo taller de strings
#include <iostream>

using namespace std;

bool validateLength(string userName)
{
    if(userName.length() < 6 || userName.length() > 12)
    {
        return false;
    }else
    {
        return true;
    }

}

bool validateFirstLetter(string userName){
    char letter= userName[0];

    if((letter >= 'A' && letter <= 'Z') || letter >= 'a' && letter <= 'z')
    {
        return true;
    }else
    {
        return false;
    }
}

bool validateNotSpaces( string userName){
    for( int i=0; i< userName.size(); i++)
    {
        char letter2= userName[i];
        
        if(letter2 == ' ')
        {
            return false;
        }else
        {
            return true;
        }
    }
}

void validateUserName(){
    string userString;

    cout <<"por favor ingrese el nombre de usuario a validar: ";
    cin >>userString;

    bool validation1= validateLength(userString);
    bool validation2= validateFirstLetter(userString);
    bool validation3= validateNotSpaces(userString);

    if(validation1 && validation2 && validation3)
    {
        cout <<"El nombre de usuario es valido: " <<endl;
    }else
    {
        cout <<"Error, el nombre de usuario no es valido "<<endl;
    }
}

int main(){
    validateUserName();
    return 0;
}
