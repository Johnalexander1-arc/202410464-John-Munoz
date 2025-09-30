#include <iostream>

using namespace std;

bool isCorrect(char userAnswer,char correctAnswer ){
    if(userAnswer == correctAnswer)
    {
        return true;
    }else
    {
        return false;
    }
}

int questionScore(bool isCorrect){
    if(isCorrect ==true)
    {
        return 10;
    }else if(isCorrect== false)
    {
        return 0;
    }else
    {
        cout <<"opcion no valida" <<endl;
    }

}

void playQuiz(){
    
   char answer;
   int totalScore=0;

   cout <<"¿cual es la capital de Colombia?: ";
   cout <<"a) barranquilla, b)tolima, c)bogota";
   cout <<"respuesta:";
   cin >> answer;
   totalScore +=questionScore(isCorrect(answer, 'c'));






int main(){
    playQuiz();
    return 0;
}

   