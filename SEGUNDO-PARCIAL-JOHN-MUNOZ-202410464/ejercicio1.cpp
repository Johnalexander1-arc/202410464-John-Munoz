#include <iostream>

using namespace std;

int calculeTotal(int hours, int rate){
    int totalPrice= hours*rate;
    
    return totalPrice;
}

void printlnvoice(string plate, int hours, int rate){
    cout <<"vehiculo : " <<plate << " horas  : " << hours << "tarfia : " << rate << " total:" <<calculeTotal(hours, rate);


}
int main(){
    string plate;
    int hours;
    int rate;

    cout <<"popr favor ingrese la placa del vehiculo: ";
    cin >>plate;

    cout <<"por favor ingrese las horas de parqueo del vehiculo: ";
    cin >>hours;

     cout <<"por favor ingrese la tarifa de parqueo : ";
    cin >>rate;

    printlnvoice(plate, hours, rate);

    return 0;
}