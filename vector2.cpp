#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<string> cars={"volvo","bmw","ford","mazda"};
    for(string car: cars){
        cout<<car<<"\n";
    }
    return 0;
}