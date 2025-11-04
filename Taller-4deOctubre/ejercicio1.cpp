#include <iostream>

using namespace std;

void spaces(){
    string word = "Programacion en C++";


    int spacesCounter=0;
     int characters=0;

for(int i=0; i < word.size(); i++){
    char letter= word[i];

    if(letter ==' '){
        spacesCounter++;
    }else 
    {
        characters++;
    }
    
  }
  int total= characters;
    int total2= characters+ spacesCounter;
    cout <<"la cantidad de caracteres sin espacios es: " <<total <<endl;
    cout <<"la cantidad de caracteres con espacios es: " <<total2 <<endl;
}
  

 

int main(){
    spaces();
    return 0;
}