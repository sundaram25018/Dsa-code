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
bool isBST(node* root, int min=NULL, int max=NULL){
    if (root == NULL)
    {
        return true;
    }
    
// if(min!= NULL && root->data <= min->data){
//     return false;
// }
// if(max!= NULL && root->data >= max->data){
//     return false;
// }
if(root->data >= min && root->data <= max){
    bool leftValid = isBST(root->left, min, root->data);
    bool rightValid = isBST(root->right, root->data, max);
    return leftValid && rightValid;
}
else{
    return false;
}
}
int main(){
    node* root1 = new node(5);
    root1->left = new node(2);
    root1->right = new node(6);
    if(isBST(root1, NULL,NULL)){
        cout<<"valid BST"<<endl;
    }
    else{
        cout<<"Not valid BST"<<endl;
    }

    return 0;
}