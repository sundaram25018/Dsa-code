// // #include<iostream>
// // #include<array>
// // using namespace std;
// // int main(){
// //     array<int,5>a = {1,3,5,6,9};
// //     int size = a.size();
// //     cout<<a.size()<<endl;
// //     for (int i = 0; i < size; i++)
// //     {
// //         cout<<a[i]<<endl;
// //     }
// //     cout<<"value at given index"<<a.at(3)<<endl;
// //     cout<<"front element"<<a.front()<<endl;
// //     cout<<"last element "<<a.back()<<endl;
// //     return 0;
// // }
// // while (true)
// // {
// //     int* ptr = new int;
// // delete arr[i]
// // delete i;
// // }


// #include<iostream>
// using namespace std;
// int getSum(int *arr, int n){
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum = sum+arr[i];
//     }
//     return sum;
    
// }
// int main(){
//     int n;
//     cout<<"enter size of arrey "<<endl;
//     cin>>n;
//     int* arr = new int[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     int ans = getSum(arr,n);
//     cout<<" your answer is : "<<ans<<endl;
    
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter an size of arrey"<<endl;
    cin>>n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}