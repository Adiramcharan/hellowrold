#include <iostream>
#include <string>
using namespace std;
void myfunction(string fname,int age){
    cout<<"hello my name is "<<fname<<" and i am "<<age<<" years old.\n";
}
int main(){
    myfunction("adi",23);
    myfunction("ram",19);
    return 0;
}