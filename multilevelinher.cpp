#include <iostream>
#include <string>
using namespace std;
class myclass{
    public:
    void myfunction(){
        cout<<"some content in parent class. ";
    }
};
class mychild:public myclass{

};
class mygrandchild:public mychild{

};
int main(){
    mygrandchild myobj;
    myobj.myfunction();
    return 0;
}

