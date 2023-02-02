#include<iostream>
using namespace std;
class node{
    public:
      int data;
      node* left;
      node* right;

      node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL; 
      }
};
node* BST(node* root, int d){
if(root == NULL){
  return new node(d);
} 
if(d< root->data){
  root->left = BST(root->left, d);
}
else{
  root->right = BST(root->right, d);
} 
return root;
}
void inorder(node* root){
  if(root==NULL){
    return;
  }
  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);
}
node* SearchInBST(node* root, int key){
    if(root == NULL){
        return NULL;
    }
    if(root->data == key){
        return root;
    }
    if(root->data > key){
        return SearchInBST(root->left, key);
    }
    return SearchInBST(root->right, key);
}
int main(){
  node* root = NULL;
  root = BST(root, 5);
  BST(root, 4);
   BST(root, 3);
    BST(root, 2);
     BST(root, 1);
      BST(root, 6);
      inorder(root);
      cout<<endl<<"your data "<<endl;
        if(SearchInBST(root, 4) == NULL){
            cout<<"key doest exist"<<endl;
        }
        else{
            cout<<"key exist"<<endl;
        }
    return 0;
}