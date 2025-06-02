#include <iostream>
#include <string>
using namespace std;
class Myclass{
    public:
    int x;
};
int main(){
    Myclass obj1;
    obj1.x=45;
    cout<<obj1.x;
    return 0;
}