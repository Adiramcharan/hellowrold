#include <iostream>
#include <string>
using namespace std;
void myfunction(string country="norway"){
    cout<< country<<"\n";
}
int main(){
    myfunction("sweden");
    myfunction("india");
    myfunction();
    myfunction("usa");
    return 0;
}