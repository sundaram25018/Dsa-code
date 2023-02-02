// #include<iostream>
// using namespace std;

// void swap(int *xp, int *yp)
// {
//     int temp = *xp;
//     *xp = *yp;
//     *yp = temp;
// }

// void selectionSort(int arr[], int n)
// {
//     int i, j, min_idx;

//     // One by one move boundary of unsorted subarray
//     for (i = 0; i < n-1; i++)
//     {
//         // Find the minimum element in unsorted array
//         min_idx = i;
//         for (j = i+1; j < n; j++)
//         if (arr[j] < arr[min_idx])
//             min_idx = j;

//         // Swap the found minimum element with the first element
//         swap(&arr[min_idx], &arr[i]);
//     }
// }

// /* Function to print an array */
// void printArray(int arr[], int size)
// {
//     int i;
//     for (i=0; i < size; i++)
//         cout << arr[i] << " ";
//     cout << endl;
// }
// int main(){
//    int arr[] = {64, 25, 12, 22, 11};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     selectionSort(arr, n);
//     cout << "Sorted array: \n";
//     printArray(arr, n);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void selectionSort(int arr[],int n){
//     int i, j, min_idx;
//     for ( i = 0; i < n-1; i++)
//     {
//        min_idx = i;
//        for ( j = i+1; j < n; j++)
//        {
//            if(arr[j] < arr[min_idx]){
//                min_idx = j;

//            }

//        }
//        swap(arr[min_idx],arr[i]);

//     }

// }
//  void print(int arr[], int n){
//         for (int i = 0; i < n; i++)
//         {
//             cout<<arr[i]<<" ";

//         }cout<<endl;

//     }

// int main(){
//     int arr[] = {80, 10, 29, 11, 8, 30, 15};
//     int n = 7;

//     print(arr,n);
//     selectionSort(arr,n);
//     print(arr,n);
//     return 0;
// }

#include <iostream>
using namespace std;
void SelectionSort(int arr[], int startIndex, int n)
{

    if (startIndex >= n - 1)
        return;
    int minIndex = startIndex;
    for (int index = startIndex + 1; index < n; index++)
    {
        if (arr[index] < arr[minIndex])
            minIndex = index;
    }
    // int temp = arr[startIndex];
    // arr[startIndex] = arr[minIndex];
    // arr[minIndex] = temp;
    swap(arr[minIndex], arr[startIndex]);
    SelectionSort(arr, startIndex + 1, n);
}

int main()
{
    int arr[] = {2, 6, 9, 1, 4};
    int n = 5;
    SelectionSort(arr, 0, 5);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
