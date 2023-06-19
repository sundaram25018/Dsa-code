#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
node* sortedArrayBST(int arr[], int start, int end){
    if(start>end){
        return NULL;
    }
    int mid = (start+ end)/2;
      node* root = new node(arr[mid]);
      root->left = sortedArrayBST(arr, start, mid-1);
      root->right = sortedArrayBST(arr, mid+1, end);
      return root;
}
void preOrder(node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right); 
}
int main(){
    int arr[] = {10, 20, 30, 40, 50,60};
    node* root = sortedArrayBST(arr, 0, 5);
    preOrder(root);
    cout<<endl;
    return 0;
}