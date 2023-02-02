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
void Sumreplace(node* root){
    if(root == NULL){
        return;
    }
    Sumreplace(root->left);
     Sumreplace(root->right);

     if(root->left != NULL){
         root->data += root->left->data;
     }
     if(root->right != NULL){
         root->data += root->right->data;
     }
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
          node*root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
     root->left->left = new node(4);
      root->left->right = new node(5);
       root->right->left = new node(6);
        root->right->right = new node(7);

        preOrder(root);
        cout<<endl;
        Sumreplace(root);
        preOrder(root);
    return 0;
}