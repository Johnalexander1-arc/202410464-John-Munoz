#include <iostream> 

using namespace std;

bool contieneArroba(string correo){

    for(int i=0; i < correo.size(); i ++ ){
        char letter= correo[i];

        if(letter=='@')
        {
            return true;
        }
    }
    return false;
}

bool contentPoint(string correo){
    bool arrobaEncontrada= false;

    for(int j=0; j < correo.size(); j ++ ){
        char letter2= correo[j];

        if(letter2 =='@')
        {
            arrobaEncontrada= true;
        }else if(arrobaEncontrada && letter2=='.')
        {
            return true;
        }
    }
    return false;
}

bool nonSpaces(string correo){

    for(int k=0; k < correo.size(); k ++ ){
        char letter3= correo[k];

        if(letter3==' ')
        {
            return false;
        }
    }
    return true;
}

bool finish(string correo){

    for(int z=0; z < correo.size(); z ++ ){
        char letter4= correo[correo.size()-4];
        char letter5= correo[correo.size()-3];
        char letter6= correo[correo.size()-2];
        char letter7= correo[correo.size()-1];
        if((letter4=='.' && letter5=='e' && letter6=='d' && letter7== 'u')|| (letter4=='.' && letter5=='c' && letter6== 'o' && letter7=='m'))
        {
            return true;
        }
    }
    return false;
}

void validateMailAccount(){
    string userMail;

    cout <<"por favor ingrese el correo electronico: ";
    getline(cin, userMail);

    bool validation1= contieneArroba(userMail);
    bool validation2= contentPoint(userMail);
    bool validation3= nonSpaces(userMail);
    bool validation4= finish(userMail);

    if(validation1 && validation2 && validation3 && validation4)
    {
        cout <<"el correo electronico es valido. " <<endl;
    }else
    {
        cout <<"el correo electronico ingresado no es valido. " <<endl;
    }
}



int main(){
    validateMailAccount();
    return 0;
}