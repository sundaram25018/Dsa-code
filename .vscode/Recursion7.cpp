#include<iostream>
using namespace std;
void TowerOfHanoi(int n, string src, string helper, string dest){
    if(n==1){
        cout<<" transfer "<<n<<" from "<<src<<" to "<<dest<<endl;
        return;
    }
    TowerOfHanoi(n-1,src,dest,helper);
    cout<<" transfer "<<n<<" from "<<src<<" to "<<dest<<endl;
    TowerOfHanoi(n-1,src,helper,dest);

}
int main(){
    int n;
    string src =  "S";
    string helper =  "H";
    string dest = "D";
    cin>>n;
    TowerOfHanoi(n,src,helper,dest);
    return 0;
}