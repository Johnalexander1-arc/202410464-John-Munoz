#include <iostream>

using namespace std;

void List(){
string nombres[5] = {"Carlos", "Marta", "Lucía", "Tomás", "Sofía"}; int edades[5] = {20,
16, 22, 15, 19};

cout <<"las personas mayores de 18 años son: " <<endl;

for(int i=0; i < 5; i++){
    if(edades[i]>=18)
    {
        cout <<nombres[i]<< " :" <<edades[i] <<endl;
    }
}

}
    

int main(){
    List();
    return 0;
}