#include <iostream>
using namespace std;
template <class T>
class box{
    T value;
    public:
    box(T val):value(val){}
    void display(){
        cout<<"value: "<<value<<endl;
    }
};
int main(){
    box<int> b1(10);
    box<string> b2("hello");
    b1.display();
    b2.display();
    return 0;
}