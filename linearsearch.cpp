#include<iostream>
using namespace std;
bool linerasearch(int arr[], int size, int key){
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[5] = {2,6,4,1,9};
    int size = 5;
   int ans = linerasearch(arr,size,3);
   if(ans){
       cout<<"element is present"<<endl;
   }
   else{
       cout<<"element is not present"<<endl;
   }
    return 0;
}