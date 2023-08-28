#include<iostream>
using namespace std;
// class heap{
//     public: 
//     int arr[100];
//     int size;
//       heap(){
//     arr[0] = -1;
//     size = 0;
// }
//     void insert(int val){
//         size = size+1;
//         int index = size;
//         arr[index] = val;
//         while (index>1)
//         {
//             int parent = index/2;
//             if(arr[parent]<arr[index]){
//                 swap(arr[parent], arr[index]);
//                 index = parent;
//             }
//             else{
//                 return;
//             }
//         }
        
//     }
//     void print(){
//         for (int i = 1; i <= size; i++)
//         {
//             cout<<arr[i]<<" ";
//         }cout<<endl;
        
//     }

//     void DeleteHeap(){
//         if(size==0){
//             cout<<"nothing to delete"<<endl;
//             return;
//         }
//         arr[1]=arr[size];
//         size--;
//         int i = 1;
//         while (i<size)
//         {
//             int leftIndex = 2*i;
//             int rightIndex = 2*i+1;
//             if(leftIndex<size && arr[i]<arr[leftIndex]){
//                 swap(arr[i],arr[leftIndex]);
//                 i = leftIndex;
//             }
//             else if(rightIndex<size && arr[i]<arr[rightIndex]){
//                 swap(arr[i],arr[rightIndex]);
//                 i = rightIndex;
//             }
//             else{
//                 return;
//             }
//         }
        
//     }
// };

// build max heap with 0 base indexing
 
    void heapify(int arr[], int N, int i)
{
    int largest = i; // Initialize largest as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2
 
    // If left child is larger than root
    if (l < N && arr[l] > arr[largest])
        largest = l;
 
    // If right child is larger than largest so far
    if (r < N && arr[r] > arr[largest])
        largest = r;
 
    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);
 
        // Recursively heapify the affected sub-tree
        heapify(arr, N, largest);
    }
}
void buildHeap(int arr[], int N)
{
    
    int startIdx = (N / 2) - 1;
    for (int i = startIdx; i >= 0; i--) {
        heapify(arr, N, i);
    }
}
void printHeap(int arr[], int N)
{
    cout << "Array representation of Heap is:\n";
 
    for (int i = 0; i < N; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
 // build min heap with 1base indexing 
 void heapifiy(int arr[], int n, int i){
    int smallest = i;
    int left = 2*i+1;
    int right = 2*i+2;
    if(left<n && arr[left]<arr[smallest]){
        smallest = left;
    }
     else if(right<n && arr[right]<arr[smallest]){
        smallest = right;
    }
    if(smallest != i){
        swap(arr[smallest], arr[i]);
        heapifiy(arr, n, smallest);
    }
 }  
int main(){
    // heap h;
    // h.insert(50);
    // h.insert(55);
    // h.insert(53);
    // h.insert(52);
    // h.insert(54);
    // h.print();
    // h.DeleteHeap();
    // h.print();
    int arr[] = {1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17};
    int n = sizeof(arr)/sizeof(arr[0]);
    
//   buildHeap(arr, n);
//   printHeap(arr, n);



    for(int  i= (n/2)-1; i>=0; i--){
        heapifiy(arr, n, i);
    }
    cout<<"Printing min heap"<<endl;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}