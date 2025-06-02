#include <iostream>
#include <string>
using namespace std;
class vehicle{
    public:
    string brand="Ford";
    void honk(){
        cout<<"tuut tuut \n";
    }
};
class car:public vehicle{
    public:
    string model="Mustang";
};
int main(){
    car mycar;
    mycar.honk();
    cout<<mycar.brand+" "+mycar.model;
    return 0;
}