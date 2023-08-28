// #include<iostream>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *left;
//     node *right;

//     node(int d)
//     {
//         this->data = d;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// int search(int inOrder[],int start, int end,int curr){
//     for (int i = start; i <=end; i++)
//     {
//         if(inOrder[i] == curr){
//             return i;
//         }
//     }
//     return -1;
// }
// node* buildTree(int preOrder[], int inOrder[], int start, int end){
//     static int idx = 0;
//     if(start>end){
//         return NULL;
//     }
//     int curr = preOrder[idx];
//     idx++;
//     node* Node = new node(curr);
//     if(start == end){
//         return Node;
//     }
//     int pos = search(inOrder,start,end,curr);

//     Node -> left = buildTree(preOrder,inOrder,start, pos-1);
//     Node -> right = buildTree(preOrder,inOrder,pos+1,end);
//     return Node;
// }
// void display(node* root){
//     if(root == NULL){
//         return;
//     }
//         display(root->left);
        
//         display(root->right); 
//         cout<<root->data<<" ";
// }
// int main(){
//     int preOrder[] ={1,2,4,3,5};
//     int inOrder[] = {4,2,1,5,3};
// node*root = buildTree(preOrder,inOrder,0,4);
// display(root);
// cout<<"given element is : "<<search(inOrder, 0, 5, 1);
//     return 0;
// }
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
int search(int inorder[], int start, int end, int curr){
    for(int i = start; i<=end; i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}
node* buildtree(int inorder[], int postorder[], int start, int end){
    static int idx = end;
    if(start>end){
        return NULL;
    }
    int ele = postorder[idx];
    idx--;
    node* curr = new node(ele);
  
    int pos = search(inorder, start, end, ele);
    curr->right = buildtree(inorder, postorder, pos+1, end);
    curr->left = buildtree(inorder, postorder, start, pos-1);
    

}
void display(node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    display(root->left);
    display(root->right);

}
int main(){
    int inOrder[] = {4,2,1,5,3};
    int postorder[] = {4, 2, 5, 3, 1};
    node* root = buildtree(inOrder, postorder, 0, 4);
    display(root);
    return 0;
}