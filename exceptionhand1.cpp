#include <iostream>
using namespace std;
int main(){
    try{
        int age;
        cout<<"enter your age: ";
        cin>>age;
        if(age>=18){
            cout<<"access granted - you are old enough";
        }else{
            throw 505;
        }
    }
    catch(int mynum){
        cout<<"access denied - you must be at least 18 years old.\n";
        cout<<"error number: "<<mynum;
    }
}