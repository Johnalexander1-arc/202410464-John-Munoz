#include <iostream>

using namespace std;

void forWithString(){
    cout <<"-----------" <<endl;
    string userNumber= "otorrinolaringologo!";

    int vocales =0;
    for (int i=0; i < userNumber.size(); i++)
    
    {
        char textCharacter= userNumber[i];
        if(textCharacter== 'o')
        {
            vocales++;
        }
    }
    cout <<"la vocal o se repite: " << vocales << " veces" <<endl;
    
}

int main(){
    forWithString();
    return 0;
}