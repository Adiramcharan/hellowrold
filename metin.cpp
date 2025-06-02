#include <iostream>
#include <string>
using namespace std;
class myclass{
    public:
    void myfucntion(){
        cout<<"hello world!";
    }
};
int main(){
    myclass myobj;
    myobj.myfucntion();
    return 0;
}