// #include<iostream>
// using namespace std;
// bool isprime(int n){
//     for (int i = 2; i < n; i++)
//     {
//         if(n%i == 0){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     int n;
//     cin>>n;
//     if(isprime(n)){
//         cout<<" this is prime number "<<endl;
//     }
//     else{
//         cout<<"this is not prime"<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for (int i = 2; i <= n; i++)
//     {
//         if(n%i==0){
//             cout<<"not prime"<<endl;
//             break;
//         }
//        else{
//             cout<<"prime number"<<endl;
//             break;
//         }
//         if(n==1 || n==0){
// cout<<"not prime"<<endl; 
//         } 
        
//     }

   
    
//     return 0;
// }

#include<iostream>
using namespace std;
int hcf(int a, int b){
    if(a==0)
        return b;
if(b==0)
    return a;
    while (a!=b)
    {
        if(a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;

}


int main(){
    int a,b;
    cout<<"enter your nummber "<<endl;
    cin>>a>>b;
int ans = hcf(a,b);
cout<<"hcf of "<<a<<" & "<<b<<" is "<<ans<<endl;
    return 0;
}