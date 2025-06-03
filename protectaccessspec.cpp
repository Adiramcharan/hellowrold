#include <iostream>
#include <string>
using namespace std;
class Employee{
    protected:
    int salary;
};
class Programmer:public Employee{
    public:
    int bonus;
    void setsalary(int s){
        salary=s;
    }
    int getsalary(){
        return salary;
    }
};
int main(){
    Programmer myobj;
    myobj.setsalary(50000);
    myobj.getsalary();
    cout<<"salary: "<<myobj.getsalary()<<"\n";
    return 0;
}
