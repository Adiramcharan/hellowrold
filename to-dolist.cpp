#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;
const string filename="to-dolist.txt";
void loadtask(vector<string> &tasks){
    ifstream file(filename);
    string line;
    while(getline(file,line)){
        tasks.push_back(line);
    }
    file.close();
}
void addtask(vector<string>& tasks){
    cout<<"Enter new task: ";
    cin.ignore();
    string task;
    getline(cin,task);
    tasks.push_back(task);
    cout<<"Task added.\n";
}
void viewtask(vector<string>& tasks){
    cout<<"\n--- Your To-Do List ---\n";
    if(tasks.empty()){
        cout<<"No Tasks found.\n";
    }else{
        for(size_t i=0; i<tasks.size(); i++){
            cout<<i+1<<"."<<tasks[i]<<endl;
        }
    }
}
void deletetask(vector<string>& tasks){
    viewtask(tasks);
    if(tasks.empty()) return;
    int index;
    cout<<"Enter task number to delete: ";
    cin>>index;
    if(index>0&& index<=tasks.size()){
        tasks.erase(tasks.begin()+index-1);
        cout<<"Task deleted.\n";
    }else{
        cout<<"Invalid task number.\n";
    }
}
void modifytask(vector<string>& tasks){
    viewtask(tasks);
    if(tasks.empty()) return;
    int index;
    cout<<"Enter task number to modify: ";
    cin>>index;
    cin.ignore();
    if(index>0 && index<=tasks.size()){
        cout<<"Enter new task text: ";
        string newtask;
        getline(cin,newtask);
        tasks[index-1]=newtask;
        cout<<"Task updated.\n";
    }else{
        cout<<"Invalid task number.\n";
    }
}
void savetask(vector<string>& tasks){
    ofstream file(filename);
    for(const string& task: tasks){
        file<<task<<endl;
    }
    file.close();
}
int main(){
    vector<string> tasks;
    loadtask(tasks);
    int choice;
    do{
        cout<<"\n===== To-Do List Menu ====\n";
        cout<<"1. Add task.\n2. View task.\n3. Delete task.\n4. Modify task\n5. Save & Exit.\n";
        while(true){
            cout<<"Choose the option: ";
            if(cin>>choice)break;
            cout<<"Invalid input! Please enter a number.\n";
            cin.clear();
            cin.ignore(10000,'\n');
        }
        switch(choice){
            case 1: addtask(tasks);break;
            case 2: viewtask(tasks);break;
            case 3: deletetask(tasks);break;
            case 4: modifytask(tasks);cout<<"Tasks modified.";break;
            case 5: savetask(tasks);cout<<"Tasks saved. Exiting...\n";break;
            default:cout<<"Invalid choice\n";
        }

    }while (choice!=5);
    return 0;
    

}