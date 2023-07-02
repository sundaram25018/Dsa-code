#include<iostream>
using namespace std;
// char lowercase(char c){
//    char ans =  c-'A'+'a';
//      return ans;
// }
// char Uppercase(char c){
//    char ans =  c-'a'+'A';
//      return ans;
// }
char tolowercase(char c){
    if(c >='a'&& c<='z'){
        return c;
    }
    else{
        char ans =  c-'A'+'a';
        return ans;
    }
}

int getlength(char name[]){
    int count = 0;
    for(int i = 0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}
bool checkpallindrome(char name[]){
    int i=0;
    int j = getlength(name)-1;
    while(i<j){
        if(tolowercase(name[i++])!=tolowercase(name[j--])){
           return false;
        }
    }
 return true;
}
void reverse(char name[]){
    int s = 0;
    int e= getlength(name)-1;
    while (s<=e)
    {
        swap(name[s], name[e]);
        s++;
        e--;
    }
    
}

int main(){
    char name[20];
    cout<<"Enter your character"<<endl;
    cin>>name;
    cout<<getlength(name)<<endl;
    cout<<"After reverse"<<endl;
    reverse(name);
    cout<<name;
    if(checkpallindrome(name)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
// char c = 'R';
// char c1 = 'b';
// cout<<lowercase(c)<<endl;
// cout<<Uppercase(c1)<<endl;
    return 0;
}