#include <iostream>

using namespace std;


     int main(){

        int userNumber; 

        cout <<"Hola, por favor ingrese el numero a multiplicar: ";
        cin >> userNumber;
        for (int i = 1 ; i<= 10; i++)
        {
        int producto= userNumber * i;
            cout <<userNumber << "x" << i << "=" <<producto <<endl;
        }
        return 0;
     }
    