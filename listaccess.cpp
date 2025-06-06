#include <iostream>
#include <list>
using namespace std;
int main(){
    list<string> cars={"volvo", "bmw", "ford","mazda"};
    for(string car:cars){
        cout<<car<<"\n";
    }
    cout<<cars.empty()<<"\n";
    cars.front()="opel";
    cars.back()="toyota";
    cars.push_front("tesla");
    cars.push_back("vw");
    cars.pop_back();
    cars.pop_front();
    cout<<cars.size()<<"\n";
    return 0;
}