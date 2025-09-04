#include <iostream> 

using namespace std;

void approveSubject(int userNote){

    if(userNote >= 3)
    {
        cout <<"usted aprobo la materia " <<endl;
    }
        else
        {
            cout <<"usted reprobo la meteria " <<endl;
        }
}

int main(){
    int userNote;

    cout <<"por favor ungrese su nota: " <<endl;
    cin >>userNote;
    approveSubject(userNote); 
    return 0;
}