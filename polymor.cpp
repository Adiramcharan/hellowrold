#include <iostream>
#include <string>
using namespace std;
class animal{
    public:
    void animalsound(){
        cout<<"the animal makes a sound \n";
    }
};
class pig:public animal{
    public:
    void animalsound(){
        cout<<"the pig says: wee wee\n";
    }
};
class dog:public animal{
    public:
    void animalsound(){
        cout<<"the dog says:bow bow \n";
    }
};
int main(){
    animal myanimal;
    pig mypig;
    dog mydog;
    myanimal.animalsound();
    mypig.animalsound();
    mydog.animalsound();
    return 0;
}