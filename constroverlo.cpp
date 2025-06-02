#include <iostream>
#include <string>
using namespace std;
class Car{
    public:
    string brand;
    string model;
    Car(){
        brand="unkonwn";
        model="unknown";
    }
    Car(string b, string m){
        brand =b;
        model=m;
    }
};
int main(){
    Car car1;
    Car car2("BMW","X5");
    Car car3("Ford","Mustang");
    cout<<car1.brand<<" "<<car1.model<<"\n";
    cout<<car2.brand<<" "<<car2.model<<"\n";
    cout<<car3.brand<<" "<<car3.model<<"\n";
    return 0;
}