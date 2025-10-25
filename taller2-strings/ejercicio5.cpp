#include <iostream>

using namespace std;

bool hasDigit(string accessCode){
    
    for(int i=0; i < accessCode.size(); i++)
    {
        char letter= accessCode[i];

        if(letter >= '0' && letter <= '9')
        {
            return true;
        }
    }
return false;
}

bool hasEspecialSymbol(string accessCode){

    for(int j=0; j < accessCode.size(); j++)
    {
        char letter2= accessCode[j];
        int ascii= int (letter2);

        if((ascii >= 33 && ascii <= 47) ||(ascii >= 58 && ascii <= 64)||(ascii >= 91 && ascii <= 96))
        {
            return true;
        }
    }
    return false;
}

bool hasSpaces(string accessCode){

    for(int k=0; k < accessCode.size(); k++)
    {
        char letter3= accessCode[k];

        if(letter3==' ')
        {
            return false;
        }   
    }
    return true;
}


void validateAccesCode(){
    string userAccessCode;

    cout <<"por favor ingrese el codigo de usuario: ";
    getline(cin, userAccessCode);

    bool validation1 = hasDigit(userAccessCode);
    bool validation2 = hasEspecialSymbol(userAccessCode);
    bool validation3 = hasSpaces(userAccessCode);

    if(validation1 && validation2 && validation3)
    {
        cout <<"el codigo de acceso es valido. " <<endl;
    }else
    {
        cout <<"Error, el codigo de usuario no es valido. " <<endl;
    }
}

int main(){
    validateAccesCode(); 
    return 0;
}