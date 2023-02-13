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
node* ConstructBST(int preOrder[], int* preOrderIdx, int key, int min, int max, int n){
    if(*preOrderIdx >= n){
        return NULL;
    }
    node* root = NULL;


    if(key > min && key < max){
        root = new node(key);
        *preOrderIdx = *preOrderIdx + 1;
        
        if(*preOrderIdx<n){
            root->left = ConstructBST(preOrder, preOrderIdx,preOrder[*preOrderIdx], min, key,n);
        }
        if(*preOrderIdx>n){
            root->right = ConstructBST(preOrder, preOrderIdx,preOrder[*preOrderIdx], key, max,n);
        }   
    }
    return root;
}
void printpreOrder(node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    printpreOrder(root->left);
    printpreOrder(root->right);
}
int main(){
    int preOrder[] = {10, 2,1,13,11};
    int n = 5;
    int preOrderIdx = 0;
    node* root = ConstructBST(preOrder, &preOrderIdx, preOrder[0],INT32_MIN, INT32_MAX,n);
   printpreOrder(root);
}