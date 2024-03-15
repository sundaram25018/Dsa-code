#include<iostream>
#include<stack>
using namespace std;
// void ReverseAnArrey(int arr[], int n){
//     stack<int>s;
//     for (int i = 0; i < n; i++)
//     {
//        s.push(arr[i]); 
//     }
//       while (!s.empty()) {
//         cout << s.top() <<" ";
//         s.pop();
    
//       }  
// }

void ReverseAnArrey(int arr[],int start, int end){
while(start<end){
    // int temp = arr[start];
    // arr[start] = arr[end];
    // arr[end] = temp;
    // start++;
    // end--;
    swap(arr[start++], arr[end--]);
}
}
void Print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";

    }
    
}
int main(){
    int arr[] = {3,4,6,7,8};
    int n = 5;
    ReverseAnArrey(arr, 0, 4);
    Print(arr, n);
    return 0;
}