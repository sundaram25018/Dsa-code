#include<iostream>
using namespace std;
class node{
    public:
       int data;
       node *left;
       node *right;

       node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
       }

};
void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int CountleafNode(node* root){
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL && root->right==NULL){
        return 1;
    }
    return CountleafNode(root->left) + CountleafNode(root->right);

}
void leafnode(node* root){
    if(root == NULL){
        return;
    }
    if(!root->left && !root->right){
        cout<<root->data<<" ";
        return;
    }
    if(root->left){
        leafnode(root->left);
    }
     if(root->right){
        leafnode(root->right);
    }
}
int countnode(node* root){
    if(root== NULL){
        return 0;
    }
    return countnode(root->left) + countnode(root->right) + 1; 
}
int calHeight(node* root){
    if(root==NULL){
        return 0;
    }
    int lheight = calHeight(root->left);
    int rheight = calHeight(root->right);

    return max(lheight, rheight) + 1;
}
int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right= new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    cout<<"inorder"<<endl;
    inorder(root);
    cout<<endl;
    cout<<"preorder"<<endl;
    preorder(root);
    cout<<endl;

    cout<<"postorder"<<endl;
    postorder(root);
    cout<<endl;
    cout<<"total leaf node is present : "<<CountleafNode(root)<<endl;
    cout<<"total node in tree is : "<<countnode(root)<<endl;
    cout<<"Height of the tree is : "<<calHeight(root)<<endl;
    leafnode(root);

    return 0;
}


