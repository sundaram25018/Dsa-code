// #include<iostream>
// using namespace std;
// int sqrt(int n){
//     int s =0,e=n;
//     int mid = (s+e)/2;
//     int ans = -1;
//     while (s<=e)
//     {
//         int square = mid*mid;
//         if (square == n)
//         {
//             return mid;
//         }
//         else if(square<n){
//             ans = mid;
//             s=mid+1;

//         }
//         else{
//             e = mid-1;
//         }
//          mid = (s+e)/2;
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cout<<"enter number :"<<endl;
//     cin>>n;
//     int temp = sqrt(n);
//     cout<<temp<<endl;
//     return 0;
// }


#include<iostream>
using namespace std;
int main()
{
    int i, chk=0, j;
    cout<<"Prime Numbers Between 1 to 100 are:\n";
    for(i=1; i<=100; i++)
    {
        for(j=2; j<i; j++)
        {
           if(i%j==0)
           {
               chk++;
               break;
           }
        }
        if(chk==0 && i!=1)
            cout<<i<<endl;
        chk = 0;
    }
    cout<<endl;
    return 0;
}