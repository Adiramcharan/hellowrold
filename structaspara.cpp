#include <iostream>
#include <string>
using namespace std;
struct car
{
    /* data */
    string brand;
    int year;
};
void myfunction(car c){
    cout<<"brand: "<<c.brand<<", year"<<c.year<<"\n";
}
int main(){
    car mycar={"toyota",2020};
    myfunction(mycar);
    return 0;
}