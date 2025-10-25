#include <iostream>

using namespace std;

int dashesCounter(string productCode){
    int counter=0;

    for(int i=0; i < productCode.size(); i ++)
    {
        char letter= productCode[i];

        if(letter == '-')
        {
            counter++;
        }
    }
    return counter;
}

int digitsCounter(string productCode){
    int digitsCounter=0;

    for(int j=0; j < productCode.size(); j++)
    {
        char letter2= productCode[j];

        if(letter2 >='0' && letter2 <='9')
        {
            digitsCounter++;
        }
    }
    return digitsCounter;
} 

bool validateLastMayus(string productCode){

    for(int k=0; k < productCode.size(); k++)
    {
        char letter3= productCode[productCode.size()-1];

        if(letter3 >= 'A' && letter3 <= 'Z')
        {
            return true;
        }else
        {
            return false;
        }
    }
}

void validateCode(){
    string userCode;

    cout <<"por favro ingrese el codigo de usuario: ";
    cin >>userCode;

    int validation1= dashesCounter(userCode);
    int validation2= digitsCounter(userCode);
    bool validation3= validateLastMayus(userCode);

    if(validation1)
    {
        cout <<"la cantidad de guiones en el codigo es: " <<validation1 <<endl;
    }

    if(validation2)
    {
        cout <<"la cantidad de digitos en el codigo es: " <<validation2 <<endl;
    }

    if(validation3){
        cout <<"codigo valido, la ultima letra es mayuscula " <<endl;
    }else
    {
        cout <<"error, codigo no valido " <<endl;
    }
}



int main(){
    validateCode();
    return 0;
}