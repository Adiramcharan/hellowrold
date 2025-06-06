#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <string> cars={"volvo","bmw","ford"};
    cout<<cars[0]<<endl;
    cout<<cars.at(2)<<endl;
    cars.push_back("tesla");
    cars.push_back("tata");
    cars.push_back("byd");
    cars.pop_back();
    cout<<cars.size()<<endl;
    cout<<cars.empty()<<endl;
    cout<<cars.front()<<endl;
    cout<<cars.back()<<endl;
    return 0;
}