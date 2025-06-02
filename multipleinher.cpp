#include <iostream>
#include <string>
using namespace std;
class myclass{
    public:
    void myfunction(){
        cout<<"welcome to the app! \n";
    }
};
class myotherclass{
    public:
    void myfunction(){
        string s;
        cout<<"enter the name: ";
        getline(cin,s);
        cout<<"the name is "<<s;
    }
};
class mychildclass:public myclass,public myotherclass{
    public:
    void callboth(){
        myclass::myfunction();
        myotherclass::myfunction();
    }
};
int main(){
    mychildclass myobj;
    myobj.callboth();
    return 0;
}