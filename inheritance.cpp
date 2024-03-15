#include<iostream>
using namespace std;
class Human{
  public:
  int age;
  string name;
  public:
  int getAge(){
    return this->age;
  }
  string getName(){
    return this->name;
  }
};
class Male :public Human{
  public:
    int salary;

    void sleep(){
        cout<<"Male is sleeping"<<endl;
    }
};
int main(){
    Male m;
    cout<<m.getAge()<<endl;
    cout<<m.getName()<<endl;
    m.sleep();
    return 0;
}