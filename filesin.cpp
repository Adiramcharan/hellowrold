#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream myfile("filename.txt");
    myfile<<"files can be tricky, but it is fun enough!";
    myfile.close();
}