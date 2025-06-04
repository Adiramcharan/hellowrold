#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string mytext;
    ifstream myreadfile("filename.txt");
    while(getline(myreadfile,mytext)){
        cout<<mytext;
    }
    myreadfile.close();
    return 0;
}