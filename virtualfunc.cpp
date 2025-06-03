#include <iostream>
#include <string>
using namespace std;
class animal{
    public:
    virtual void sound(){
        cout<<"animal sound\n";
    }
};
class dog:public animal{
    public:
    void sound() override{
        cout<<"dog barks\n";
    }
};
int main(){
    animal *a;
    dog d;
    a=&d;
    a->sound();
    return 0;
}