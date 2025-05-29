#include <iostream>
using namespace std;
int main(){
    for(int i=1;i<=3;i++){
        auto show=[i](){
            cout<<"number: "<<i<<"\n";
        };
        show();
    }
    return 0;
}