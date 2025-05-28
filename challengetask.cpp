#include <iostream>
#include <string>
using namespace std;
struct student{
    string name;
    int age;
    char grade;
};
int main(){
    student st1;
    st1.name="ram";
    st1.age=17;
    st1.grade='A';
    student st2;
    st2.name="varun";
    st2.age=17;
    st2.grade='B';
    cout<<"Name:"<<st1.name<<"\n"<<"Age:"<<st1.age<<"\n"<<"Grade:"<<st1.grade<<"\n";
    cout<<"Name:"<<st2.name<<"\n"<<"Age:"<<st2.age<<"\n"<<"Grade:"<<st2.grade<<"\n";
    return 0;
}