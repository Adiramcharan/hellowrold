#include <iostream>
#include <string>
using namespace std;
class car{
    public:
    string brand;
    string model;
    int year;
};
int main(){
    car carobj1;
    carobj1.brand="bmw";
    carobj1.model="x5";
    carobj1.year=1999;
    car carobj2;
    carobj2.brand="ford";
    carobj2.model="mustang";
    carobj2.year=1969;
    cout << carobj1.brand<<" "<<carobj1.model<<" "<<carobj1.year<<"\n";
    cout<< carobj2.brand<<" "<<carobj2.model<<" "<<carobj2.year<<"\n";
    return 0;
}