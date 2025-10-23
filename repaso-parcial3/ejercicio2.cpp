#include <iostream>

using namespace std;

void investWords(){
    string userString;
    string newString="";

    cout <<"por favor ingrese una palabra: ";
    cin >>userString;

    for(int i=0; i < userString.size(); i++)
    {
        char letter= userString[i];

        if(i%2==0)
        {
            if(letter >= 'a' && letter <= 'z')
            letter = letter-32;
        
        }else
        {
            if(letter >= 'A' && letter <= 'Z')
            {
                letter = letter+32;
            }
        }
        newString+= letter;
    }
    cout <<"la polabra fue conertida correcatamente: "<<newString <<endl;
}

int main(){
    investWords();
    return 0;
}