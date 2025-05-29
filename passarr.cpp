#include <iostream>
using namespace std;
void myfunction(int mynumber[5]){
    for(int i=0;i<5;i++){
        cout<<mynumber[i]<<"\n";
    }
}
int main(){
    int mynumbers[5]={10,20,30,40,50};
    myfunction(mynumbers);
    return 0;
}