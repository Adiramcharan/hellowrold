#include <iostream>
#include <string>
using namespace std;
class Dog{
    public:
    void bark(){
        cout<<"woof!";
    }
};
int main(){
    Dog mydog;
    mydog.bark();
    return 0;
}