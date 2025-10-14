#include <iostream>

using namespace std;

void letterCounter(){
    string userWord1;
    string userWord2;
    int counter=1;
  cout <<"Por favor ingrese una palabra: ";  
  cin >>userWord1;

  cout <<"por favor ingrese la segunda palabra: ";
  cin >>userWord2;

  
  for(int i=0; i <= userWord1.size(); i++)
  {
    char letter= userWord1[i];

    for(int i=0; i <= userWord2.size(); i++)
    {
        char letter2= userWord2[i];

           if(letter==letter2)
           {
            counter++;
           }
    }
  }
  cout <<"el numero de letras en las dos palkabras es:" << counter <<endl;
}

int main(){
    letterCounter();
    return 0;
}