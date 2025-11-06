#include <iostream> 

using namespace std;

int wordCounter(string userString){
    int words=1;

    for (int i=0; i < userString.size(); i++){
        char letter= userString[i];
        
        if(letter==' '){
            words++;
        }
    }
    return words;

}





void validation(){
    string userString;
    int wordCounter2=0;
    cout <<"por favor ingrese una cadena de texto: ";
    getline(cin, userString);

    int validation1= wordCounter(userString);

    cout <<"la cantidad de palabras en la cadena de texto es: " <<validation1 <<endl;
    
    for(int i=0; i < userString.size(); i++){
        char letter2= userString[i];
        if(letter2==' ')
        {
            wordCounter2++;
        }

    }
    }
    

int main(){
    validation();
    return 0;
}