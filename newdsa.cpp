#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch >= 'a' && ch <= 'z'){
        cout<<"lower case"<<endl;
    }
    else if( ch >= 'A' && ch<='Z'){
        cout<<"Upper case"<<endl;
    }
    else{
        cout<<"It is number or special character"<<endl;
    }
    return 0;
}