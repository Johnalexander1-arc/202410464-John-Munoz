#include <iostream> 

using namespace std;

void investWord(){
    string userWord1;
    string userWord2;
    string investFirstWord= "";
    string investSecondWord= "";

    cout <<"por favor ingrese la primer palabra: " <<endl;
    cin >>userWord1; 

    cout <<"por favor ingrese la segunda palabra :" <<endl;
    cin >>userWord2;

    for(int i=userWord1.size()-1; i>=0; i--)
        {
         investFirstWord+= userWord1[i]; 
        }

     for (int j= userWord2.size()-1; j >= 0; j--)
        {
             investSecondWord+= userWord2[j];
        }


        if(userWord1== investFirstWord)
        {
            cout <<"la primera palabra es un palindromo: " <<endl;
        }else
        {
            cout <<"la primera palabra no es un palidromo. " <<endl;
        }

        if(userWord2== investSecondWord)
        {
            cout <<"la segunda palabra es un palindromo. "<<endl;
        }else
        {
            cout <<"la segunda palabra no es un palidnromo. " <<endl;
        } 
    }

    
    

int main(){
    investWord();
    return 0;
}