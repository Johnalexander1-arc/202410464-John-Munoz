#include <iostream>

using namespace std;

void requestUserName(){
    string userName;
    cout <<"Por favor ingrese el nombre de usuario: ";
    cin >>userName;
}

bool validarLongitud()
{
    string userName;
    
    if(userName.size() > 6 && userName.size() < 12 )
    {
        cout <<"el nombre se usuario tiene entre 6 y 12 caracteres: ";
        return true;
    }else
    {
        cout <<"el nombre de usuario no tiene entre 6 y 12 caracteres ";
        return false;
    }

}



int main(){
    requestUserName();
    validarLongitud();
    return 0;
}
