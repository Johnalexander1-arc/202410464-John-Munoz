#include <iostream> 

using namespace std;

void totalFines(string cityToFilter){
    string placas[6] = {"ABC123", "XYZ789", "LMN456", "JKL321", "QWE654", "TYU999"};
float multas[6] = {250000, 180000, 300000, 450000, 200000, 120000};
string ciudades[6] = {"Tunja", "Bogotá", "Tunja", "Medellín", "Cali", "Tunja"};
 float fines=0;
 float suma=0;
 
 cout <<"multas registradas en " <<cityToFilter <<": " <<endl;

 for(int i=0; i < 6; i++){
    if(ciudades[i]== cityToFilter)
    {
        cout <<placas[i] << " : " << multas[i] <<" " <<ciudades[i] <<endl;
        suma+= multas[i];
    }
 }
cout <<"total de multas para  "<< cityToFilter <<": " <<suma <<endl;
}


int main(){
    string cityToFilter;
    cout <<"por favor ingrese la ciudad que desea filtrar :";
    cin >> cityToFilter;
    totalFines(cityToFilter);
    return 0;
}