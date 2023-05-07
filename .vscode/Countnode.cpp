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
// int countNode(node*root){
// if(root==NULL){
//     return 0;
// }
// return countNode(root->left) + countNode(root->right) + 1;
// }
// int SumOfNode(node* root){
//     if(root == NULL){
//         return 0;
//     }
//     return SumOfNode(root->left) + SumOfNode(root->right) + root->data;
// }
int clacHeight(node* root){
    if(root == NULL){
        return 0;
    }
    int lheight = clacHeight(root->left);
    
    int rheight = clacHeight(root->right);
  
    
    return max(lheight, rheight) + 1;
}

// int clacHeight(node* root){
//     if(root == NULL){
//         return 0;
//     }
//     return max(clacHeight(root->left),clacHeight(root->right) + 1);
// }
int calcDiameter(node* root){
    if(root == NULL){
        return 0;
    }
    int lheight = clacHeight(root->left);
     int rheight = clacHeight(root->right);
     int currDimeter =  lheight + rheight + 1;

int lDimeter = calcDiameter(root->left);
int rDimeter = calcDiameter(root->right);

return max(currDimeter, max(lDimeter, rDimeter));

}
void leafnode(node* root){
    if(root==NULL){
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
int main(){
    node*root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
     root->left->left = new node(4);
      root->left->right = new node(5);
       root->right->left = new node(6);
        root->right->right = new node(7);
        // cout<<countNode(root)<<endl;;
        // cout<<SumOfNode(root);
        cout<<clacHeight(root);
    // cout<<calcDiameter(root)<<endl;
    // leafnode(root);
    return 0;
}