#include<iostream>
using namespace std;
int main(){
    // int num = 10;
    // int i = 9;
    // int *p =0;
    // p = &i;
    // cout<<num<<endl;
    // cout<<&p<<endl;
    // cout<<"address of num is : "<<&num<<endl;
    // int *ptr = &num;
    //  cout<<"address is : "<<ptr<<endl;
    // cout<<"value is : "<<*ptr<<endl;
    // cout<<"size of integer"<<sizeof(num)<<endl;
    // cout<<"size of pointer"<<sizeof(ptr)<<endl;

    // int num = 5;
    // int a=num;
    // cout<<"a before"<<num<<endl;
    // a++;
    // cout<<"a after"<<num<<endl;

    // int *ptr = &num;
    // cout<<"befor "<<num<<endl;
    // (*ptr)++;
    // cout<<"after "<<num<<endl; 

    // int *q = ptr;
    // cout<<ptr<<"-"<<q<<endl;

    // int arr[10] = {2,5,8};
    // cout<<" address of first memory block is "<<arr<<endl;
    //     cout<<" address of first memory block is "<<&arr[0]<<endl;
    //     cout<<" value of arr "<< *arr<<endl;
    //             cout<<" value of arr "<< *(arr + 2)<<endl;

    // int temp[10];
    // cout<<"size of arrey "<<sizeof(temp)<<endl;
    // int *ptr = &temp[0];
    // cout<<sizeof(&ptr)<<endl;
    int a = 10;
    int b= 18;
    int c= a;
    int *d = 0;
    d = &c;
    ++c=b+c-(a++);
    cout<<c<<endl;
    cout<<a<<endl;
    
    return 0;
}