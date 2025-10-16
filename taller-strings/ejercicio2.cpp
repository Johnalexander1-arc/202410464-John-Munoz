#include <iostream>

using namespace std;

void investLetter(){
string userString;
string newString="";

cout <<"por favor ingrese una palabra sin espacios:";
cin >>userString;

for (int i=0; i< userString.size(); i++)
{
    char position= userString[i];

    if(i%2 == 1)
    {
        if(position >= 'a' && position <= 'z')
        {
            position= position -32;
        }
    }else
    {
        if(position >= 'A' && position <= 'Z')
        {
            position= position +32;
        }
    }
    newString += position;
}
cout <<"la nueva palabra es: " <<newString <<endl;
}





int main(){
    investLetter();
    return 0;
}