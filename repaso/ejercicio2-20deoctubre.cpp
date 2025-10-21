#include <iostream>

using namespace std;

void letterTranslater(){
    string userString;
    string newString="";

    cout <<"por favor ingrese una palabra para convertir: ";
    cin >>userString;

    for(int i=0; i< userString.size(); i++)
    {
        char letter= userString[i];

        if(i%2 == 0)
        {
            if( letter >= 'A' && letter <= 'Z')
            {
                letter= letter +32;
            }
        }
            else
            {
            if(letter >= 'a' && letter <= 'z')
            {
                letter= letter-32;
            }
            }
                    newString += letter;       
    }
    cout <<"la nueva palabra transformada es: " <<newString <<endl;
}

int main(){
    letterTranslater();
    return 0;
}