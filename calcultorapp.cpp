#include <iostream>
using namespace std;
int main(){
    char op;
    double num1,num2,result;
    char choice;
    do{
        cout<<"Enter first number: ";
        cin>>num1;
        cout<<"Select the operation (+, -, *, /): ";
        cin>>op;
        cout<<"Enter second number: ";
        cin>>num2;
        switch (op)
        {
            case '+':
            result =num1 + num2;
            cout<<"Result: "<<result<<"\n";
            break;
            case '-':
            result = num1 - num2;
            cout<<"Result: "<<result<<"\n";
            break;
            case '*':
            result= num1 - num2;
            cout<<"Result: "<<result<<"\n";
            break;
            case '/':
            if(num2==0){
                cout<<"Error: Division bt zero!"<<"\n";
            }
            else{
                result=num1/num2;
                cout<<"Result: "<<result<<"\n";
            }
            break;
            default:
            cout<<"Invalid operator!"<<"\n";
        }
        cout<<"Do you want to perform another calculation? (y/n): ";
        cin>>choice;
    }while (choice == 'y'|| choice == 'Y');
    cout <<"Calculator closed."<<"\n";
    return 0;
    
}