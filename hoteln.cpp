#include <iostream>
#include <string>
using namespace std;
int main(){
    int numguests;
    cout<<"how many guests?:";
    cin>>numguests;
    cin.ignore();
    if(numguests<=0){
        cout<<"number of guests must be at least 1.\n";
        return 0;
    }
    string* guests=new string[numguests];
    for(int i=0;i<numguests;i++){
        cout<<"enter the name for guest "<<(i+1)<<": ";
        getline(cin,guests[i]);
    }
    cout<<"\nguests checked in:\n";
    for(int i=0; i<numguests;i++){
        cout<<guests[i]<<"\n";

    }
    delete[] guests;
    return 0;
}