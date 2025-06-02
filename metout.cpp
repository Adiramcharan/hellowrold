#include <iostream>
#include <string>
using namespace std;
class myclass{
    public:
    void myfunction();
};
void myclass::myfunction(){
    cout<<"hello world!";
}
int main(){
    myclass myobj;
    myobj.myfunction();
    return 0;
}