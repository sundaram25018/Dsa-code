// #include<iostream>
// using namespace std;
// void reverse(string& str,int i, int j){
//     if(i>j){
//         return;
//     }
//     swap(str[i], str[j]);
//     i++;
//     j--;

//     reverse(str,i,j);
 
// }
// int main(){
//     string name ="abcde";
//   reverse(name,0,name.length()-1);
//   cout<<name<<endl;
//     return 0;
// }

// check pallindrom

// #include<iostream>
// using namespace std;
// bool checkpallindrom(string str,int i,int j){
//     if(i>j){
//         return false;
//     }
//     if(str[i]!=str[j]){
//         return false;
//     }
//     checkpallindrom(str,i+1,j+1);
// }
// int main(){
//     string name;
//     cin>>name;
//     cout<<endl;
//     bool isPallindrom = checkpallindrom(name,0,name.length()-1);
//     if(isPallindrom){
//         cout<<"Pallindrom hai"<<endl;
//     }
//     else{
//         cout<<"Not Pallindrom hai"<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int power(int a, int b){
//     if(b==0){
//         return 1;
//     }
//     if(b==1){
//         return a;
//     }
//    int ans =  power(a, b/2);
//    if(b%2 == 0){
//        return ans*ans;
//    }
//    else{
//        return a*ans*ans;
//    }
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     int ans = power(a,b);
//     cout<<ans<<endl;
//     return 0;
// }

// bobble sort

#include<iostream>
using namespace std;
void sortarrey(int arr[],int n){
    if(n==0 || n==1){
        return;
    }
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    sortarrey(arr,n-1);
}
int main(){
    int arr[5] = {2,7,4,1,3};
    sortarrey(arr,5);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}