#include <iostream>
#include <string>
using namespace std;
class Car{
    public:
    string brand;
    string model;
    int year;
    Car(string x, string y,int z);
};
Car::Car(string x, string y,int z){
    brand =x;
    model=y;
    year=z;
}
int main(){
    Car carobj1("BMW","X5",1999);
    Car carobj2("Ford","Mustang",1969);
    cout<<carobj1.brand<<" "<<carobj1.model<<" "<<carobj1.year<<"\n";
    cout<<carobj2.brand<<" "<<carobj2.model<<" "<<carobj2.year<<"\n";
    return 0;
}