#include <iostream>

using namespace std;

int vowelsCounter(string text){
    int counter=0;

    for(int i=0; i < text.size(); i++)
    {
        char letter= text[i];

        if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') 
        {
            counter++;
        }
    }
     return counter;
}

int consonantsCounter( string text){
    int consonantCounter=0;

    for(int j=0; j < text.size(); j++)
    {
        char letter2= text[j];

        if((letter2 >= 'a' && letter2 <= 'z') || (letter2 >= 'A' && letter2 <= 'Z')){

            if(letter2 !='a' && letter2 !='e' && letter2 !='i' && letter2 !='o' && letter2 !='u' && letter2 !='A' && letter2 !='E' && letter2 !='I'&& letter2 !='O' && letter2 !='U' ){
            consonantCounter++;
        }
        }
    }
    return consonantCounter;
    
}


int nonAlphabeticalCounting( string text){
    int numbers=0;
    int symbols=0;

    for(int k=0; k <text.size(); k ++)
    {
        char letter3= text[k];

        if(letter3 >= '0' && letter3 <= '9')
        numbers++;

        if(!((letter3 >= 'A' && letter3 <= 'Z')||(letter3 >= 'a' && letter3 <='z')||(letter3 >= '0' && letter3 <= '9')))
        {
            symbols++;
        }
    }

    return numbers + symbols;
    
}

void stringAnalysis(){
    string userString;

    cout <<"por favro ingrese una cadena de texto: ";
    cin >>userString;

    int validation1= vowelsCounter(userString);
    int validation2= consonantsCounter(userString);
    int validation3= nonAlphabeticalCounting(userString);

    if(validation1)
    {
        cout <<"la palabra ingresada tiene: " << validation1 <<"vocales " <<endl;
    }
    if(validation2)
    {
        cout <<"la palabra tiene: " <<validation2 << "consonates " <<endl;
    }
    if(validation3)
    {
        cout <<"la palabra tiene: " <<validation3 << "simbolos " <<endl;
    }
}



int main(){
    stringAnalysis();
    return 0;
}