#include <iostream>

using namespace std;

void investVowels(){

    string userString="mamaguevo";
    string newString="";

    for(int i=0; i < userString.size(); i++)
    {
        char letter= userString[i];

        if(letter=='a' || letter=='e' || letter=='i' || letter=='o' || letter=='u' )
        {
            newString+= letter;
        }
    }
    cout <<"las vocales de la palabra ingresada son: " <<newString <<endl;
}

int main(){
    investVowels(); 
    return 0;
}