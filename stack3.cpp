#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack <string> cars;
    cars.push("volvo");
    cars.push("bmw");
    cars.push("ford");
    cars.push("mazda");
    cout<<cars.top()<<"\n"; //before adding tesla
    cout<<cars.size()<<"\n";
    cars.top()="tesla";
    cout<<cars.size();
    cout<<cars.top()<<"\n";//after adding tesla
    cars.pop();//now tesla is not the top as it will pop out
    cout<<cars.top()<<"\n";
    cout<<cars.size()<<"\n";
}