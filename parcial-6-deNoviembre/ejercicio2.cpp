#include <iostream> 

using namespace std;

void temperatures(){
    string ciudades[10] = {"Bogotá", "Medellín", "Cali", "Cartagena", "Pereira", "Bucaramanga",
"Manizales", "Tunja", "Santa Marta", "Villavicencio"};
float temperaturas[10] = {18.5, 25.1, 27.8, 31.3, 22.7, 26.2, 19.0, 16.4, 30.5, 29.0};
    float maxTemperature;
    float mintemperature;
    float suma=0;
    float city=0;
    cout <<"por favor ingrese la temperatura minima: ";
    cin >> mintemperature;

    cout <<"por favor ingrese la temperatura maxima: ";
    cin >> maxTemperature;

        cout <<"las ciudades con temperaturas dentro del rango ingresado: (" <<mintemperature <<" - " << maxTemperature <<")" <<endl;

    for(int i=0; i < 10; i++){
        if(temperaturas[i] >= mintemperature && temperaturas[i] <= maxTemperature){
            cout <<ciudades[i] <<" : " << temperaturas[i] <<endl;
            city++;
            suma+= temperaturas[i];
            
        }
    }
    float average= suma/city;
    cout <<"el promedio de las temperaturas es: " <<average <<endl;
}

int main(){
    temperatures();
    return 0;
}