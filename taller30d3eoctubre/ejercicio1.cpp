#include <iostream>

using namespace std;

void employeesList(){
    string employees[4]={"Ana", "Luis", "Maria","Pedro"};

    for (int i =0; i < 4; i++){
    
    cout <<"contador en: " << i <<endl;
    string employeesValue = employees[i];
    cout <<"el valor de la lista es: " <<employeesValue <<endl;
    }
}
int main(){
    employeesList();
    return 0;
}