#include <iostream>

using namespace std;

int wordCounter( string phrase){
    int counter=1;

    for(int i=0; i < phrase.size(); i++ )
    {
        char letter = phrase[i];
        int ascii= int (letter);

        if(ascii==32)
        {
            counter++;
        }
    }
return counter;
}

int punctuationCounter( string phrase){
    int counter2=0;

    for(int j=0; j < phrase.size(); j++)
    {
        char letter2= phrase[j];
        int ascii= int (letter2);

        if((ascii >= 33 && ascii <= 47 )||(ascii >= 58 && ascii <= 64))
        {
            counter2++;
        } 
    }
    return counter2;
}

bool finishOnPoint(string phrase){

    for(int k=0; k < phrase.size(); k++){
        char letter3= phrase[phrase.size()-1];

        if(letter3=='.')
        {
          return true;  
        }
        return false;
    }

}

void phraseAnalysis(){
    string userPhrase;

    cout <<"por favopr ingrese la frase a analizar: ";
    getline(cin,userPhrase);

    int validation1= wordCounter(userPhrase);
    int validation2= punctuationCounter(userPhrase);
    bool validation3= finishOnPoint(userPhrase);

    if(validation1)
    {
        cout <<"la frase ingresada contiene: " <<validation1 << " palabras" <<endl;       
    }

    if(validation2)
    {
        cout <<"la frase ingresada tiene: " <<validation2 << " signos de puntuacion" <<endl;
    }

    if(validation3)
    {
        cout <<"la frase es valida. " <<endl;
    }else
    {
        cout <<"error, la frase no termina con un punto. " <<endl;
    }
}


int main(){
    phraseAnalysis();
    return 0;
}