#include <iostream>
#include <string>
using namespace std;
void modifystr(string &str){
    str+=" world!";
}
int main(){
    string greeting="hello";
    modifystr(greeting);
    cout<<greeting;
    return 0;
}