#include <iostream>
#include <functional>
using namespace std;
void myfunction(function<void()> func){
    func();
    func();
}
int main(){
    auto message=[](){
        cout<<"hello world!\n";
    };
    myfunction(message);
    return 0;
}