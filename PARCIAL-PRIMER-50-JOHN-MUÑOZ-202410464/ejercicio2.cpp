#include <iostream>

using namespace std;

void machineshift(int initialshift, int finalshift){
    if(initialshift > finalshift)
    {
        cout <<"error, el turno inical no puiede ser mayor que el final " <<endl;
    }else
    {
        while(initialshift <= finalshift)
        {
        cout << initialshift++ <<endl;
        }
    }
}



int main(){
    int firtshift;
    int secondshift;

    cout <<"Por favor ingrese el turno inicial de la maquina:";
    cin >>firtshift;

    cout <<"Por favor ingrese el turno final de la maquina:";
    cin >>secondshift;

    cout <<"la maquina trabajo durante los turnos: " <<endl;

    machineshift(firtshift, secondshift);
    return 0;
}
