#include <iostream>

using namespace std;

void ages(){
     string nombres[5] = {"Carlos", "Marta", "Lucía", "Tomás", "Sofía"}; int edades[5] = {20,
 16, 22, 15, 19};

 for(int i =0; i < 5; i++)
 {
    if(edades[i] >= 18){
        cout <<nombres [i] <<": " <<edades[i] << " años"<<endl;
    }
 }
}

int main(){
    ages();
    return 0;
}