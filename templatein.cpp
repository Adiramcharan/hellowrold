#include <iostream>
#include <string>
using namespace std;
template <typename T>
T add(T a,T b){
    return a+b;
}
int main(){
    cout<<add(5,3)<<endl;
    cout<<add(2.5,4.3)<<endl;
    cout<<add<string>("a","g")<<endl;
    return 0;
}