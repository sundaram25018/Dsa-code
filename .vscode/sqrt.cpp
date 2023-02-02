#include<iostream>
using namespace std;
int sqrt(int n){
    int s =0,e=n;
    int mid = (s+e)/2;
    int ans = -1;
    while (s<=e)
    {
        int square = mid*mid;
        if (square == n)
        {
            return mid;
        }
        else if(square<n){
            ans = mid;
            s=mid+1;

        }
        else{
            e = mid-1;
        }
         mid = (s+e)/2;
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter number :"<<endl;
    cin>>n;
    int temp = sqrt(n);
    cout<<temp<<endl;
    return 0;
}