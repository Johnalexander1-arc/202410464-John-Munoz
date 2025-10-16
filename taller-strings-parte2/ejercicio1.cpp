#include <iostream>

using namespace std;

void findOutPassword(){
    string userPassword;

    cout <<"por favor ingrese la contraseña." ;
    cin >>findOutPassword

bool isSpecialCharacter(char letter){
    int ascii= int (letter);
    return (ascii >=33 && ascii <= 47);
}

bool passWord (string password){
return password.length() >=8;
}

bool especialCharacter(string passWord){
    int contador=0;
    for (int i=0; i <= passWord.size(); i++)
    {
        if(isSpecialCharacter(passWord[i]))
        {
            contador ++;
        }
    }
    return contador>=3;
}

bool mayus(string password){
    if(password >= "A" && password <= "Z")
    {
        return true;
    }else
    {
        return false;
    }

}

bool minus(string contraseña){
    if(contraseña >= "a" && contraseña <= "z")
    {
        return true;
    }else
    {
        return false;
    }
}
#include <iostream>

using namespace std;

bool isSpecialCharacter(char letter){
    int ascii= int (letter);
    return (ascii >=33 && ascii <= 47);
}

bool passWord (string password){
return password.length() >=8;
}

bool especialCharacter(string passWord){
    int contador=0;
    for (int i=0; i <= passWord.size(); i++)
    {
        if(especialCharacter(i))
    }
}

}

int main(){
    return 0;
}