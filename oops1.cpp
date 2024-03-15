#include<iostream>
using namespace std;
class employee{
    public:
    int id;
    string name;
    int salary;

    employee(int id, string name, int salary){
        this->id = id;
        this->name = name;
        this->salary = salary;
    }
    void display(int id, string name, int salary){
        cout<<"id : "<<id<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"salary : "<<salary<<endl;
    }
    
};
int main(){
    employee e(1,"sundaram", 40999);
    e.display(1,"sundaram", 4000);

    return 0;
}