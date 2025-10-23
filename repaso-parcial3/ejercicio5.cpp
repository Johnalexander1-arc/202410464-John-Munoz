#include <iostream>

using namespace std;

void similiarPosition(){
    string userString1;
    string userString2;
    int similarPositionLetter=0;

    cout <<"por favor ingrese la primer palabra: ";
    cin >>userString1;

    cout <<"por favor ingrese la segunda palabra: ";
    cin >>userString2;

    int minLength =min(userString1.size(), userString2.size());


    for(int i=0; i < minLength; i++)
    {
        if(userString1[i]== userString2[i]){
                similarPositionLetter++;
            }    
        }
    cout <<"las letras repetidas son: " <<similarPositionLetter <<endl;
 }


int main(){
    similiarPosition();
    return 0;
}