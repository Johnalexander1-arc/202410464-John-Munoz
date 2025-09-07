#include <iostream> 

using namespace std;

void approveSubject(int Note){

    if(Note >= 3)
    {
        cout <<"usted aprobo la materia " <<endl;
    }
        else
        {
            cout <<"usted reprobo la materia " <<endl;
        }
}

int main(){
    int userNote;

    cout <<"por favor ungrese su nota: " <<endl;
    cin >>userNote;
    approveSubject(userNote); 
    return 0;
}