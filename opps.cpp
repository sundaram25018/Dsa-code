#include<iostream>
using namespace std;
class hero{
private:
int age;
  public:
string name;
static int timeComplete;
// void print(){
//     cout<<"age : "<<age<<endl;
// }


hero(){
    cout<<"constructor called"<<endl;
}

hero(int age,string name){
    // cout<<"this ->"<<this<<endl;
    this->age = age;
      this->name = name;
}

hero(hero&temp){
    cout<<"copy constructor called"<<endl;
    this->age = temp.age;
    this->name = temp.name;
}
void print(){
    cout<<"name : "<<this->name<<endl;
    cout<<"age : "<<this->age<<endl;

}
~hero(){
    cout<<"destructor called"<<endl;
}
void setage(int a1){
age = a1;

}
int getage(){
    return age;
}
};
int hero::timeComplete = 5;
int main(){

cout<<"time"<<hero::timeComplete<<endl;
// cout<<"hii"<<endl;
// hero h1;
// // cout<<"hello";
// hero h1(34,"sundaram");
// h1.print();

// // copy constructor
// cout<<endl;
// hero h2(h1);
// h2.print();

// cout<<"address of this is "<<&h1<<endl;
    // static allocation
//     hero h1;
//     cout<<"name : "<<h1.name<<endl;
//    h1.setage(23);
//     cout<<"age : "<<h1.getage()<<endl;
//   // dynamic alloaction

//   cout<<endl;
//   cout<<"dynamic method"<<endl;
//   hero *h2 = new hero;
  
//   (*h2).setage(45);
//   // another method of declaration
// //   h2->setage(90);
// //   h2->name = "aman";
//   cout<<"name : "<<(*h2).name<<endl;
//   cout<<"age : "<<(*h2).getage()<<endl;

    
    return 0;
}