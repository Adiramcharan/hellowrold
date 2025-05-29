#include <iostream>
using namespace std;
int main(){
    auto message=[](){
        cout<<"hello world!\n";
    };
    message();
    return 0;
}