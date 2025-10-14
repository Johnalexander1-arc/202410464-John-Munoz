#include <iostream>

using namespace std;

void consonants(){
    string userName= "alexander";
    string consonantes= " ";

    for(int i=0; i < userName.size(); i++)
    {
        char b = userName[i];
      if( b == 'a' ||b == 'e'|| b=='i'
        || b =='o'||b=='u') 
        {
            consonantes+= b;
        } 
    }
    cout <<"en la palabra hay:" << consonantes <<endl;
}


int main(){
    consonants();
    return 0;
}