// #include<iostream>
// using namespace std;
// int piovted(int arr[],int s,int e){
// int pivot = arr[s];
// int cnt = 0;
// for (int i = s+1; i <= e; i++)
// {
//     if(arr[i]<=pivot){
//         cnt++;
//     }
// }
//  int pivotIndex = s+cnt;
//  swap(arr[pivotIndex],arr[s]); 

//  int i =s, j=e;

//  while (i < pivotIndex &&  j > pivotIndex)
//  {
//     while (arr[i]<=pivot)
//     {
//         i++;
//     }
//      while (arr[j]>pivot)
//     {
//         j++;
//     }
//     if (i < pivotIndex &&  j > pivotIndex)
//     {
//        swap(arr[i++],arr[j--]);
//     }
    
    
//  }
//  return pivotIndex;
 
// }
// void quickSort(int arr[],int s,int e){
// if(s>=e){
//     return;
// }
// int p = piovted(arr,s,e);
// quickSort(arr,s,p-1);
// quickSort(arr,p+1,e);
// }
// int main(){
//     int arr[5] = {3,6,2,9,1};
//     int n = 5;
//     quickSort(arr,0,n-1);
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
    
//     return 0;
// }


 // another method

 #include <iostream>  
  
using namespace std;  
  
/* function that consider last element as pivot,  
place the pivot at its exact position, and place  
smaller elements to left of pivot and greater  
elements to right of pivot.  */  
int partition (int a[], int start, int end)  
{  
    int pivot = a[end]; // pivot element  
    int i = (start - 1);  
  
    for (int j = start; j <= end - 1; j++)  
    {  
        // If current element is smaller than the pivot  
        if (a[j] < pivot)  
        {  
            i++; // increment index of smaller element  
            // int t = a[i];  
            // a[i] = a[j];  
            // a[j] = t; 
            swap(a[i],a[j]); 
        }  
    }  
    // int t = a[i+1];  
    // a[i+1] = a[end];  
    // a[end] = t;  
    swap(a[i+1],a[end]);
    return (i + 1);  
}  
  
/* function to implement quick sort */  
void quick(int a[], int start, int end) /* a[] = array to be sorted, start = Starting index, end = Ending index */  
{  
    if (start < end)  
    {  
        int p = partition(a, start, end);  //p is the partitioning index  
        quick(a, start, p - 1);  
        quick(a, p + 1, end);  
    }  
}  
  
/* function to print an array */  
void printArr(int a[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        cout<<a[i]<< " ";  
}  
int main()  
{  
    int a[] = { 23, 8, 28, 13, 18, 26 };  
    int n = sizeof(a) / sizeof(a[0]);  
    cout<<"Before sorting array elements are - \n";  
    printArr(a, n);  
    quick(a, 0, n - 1);  
    cout<<"\nAfter sorting array elements are - \n";    
    printArr(a, n); 
    
      
    return 0;  
}