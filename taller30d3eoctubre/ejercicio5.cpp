#include <iostream>

using namespace std;

void products(){
    string products[3] = {"Pan", "Leche", "Queso"}; float prices[3] = {1500, 3200, 4800};
    
    for (int i =0; i < 3; i++){
        cout <<products[i] << " precio: " <<prices[i] <<endl;
    }
}
int main(){
    products();
    return 0;
}