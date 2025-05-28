#include <iostream>
#include <string>
using namespace std;
int main(){
    struct
    {
        /* data */
        int mynum;
        string mystring;
    }myStructure;
    myStructure.mynum=1;
    myStructure.mystring="hello world";
    cout << myStructure.mynum<<"\n";
    cout <<myStructure.mystring<<"\n";
    return 0;
}