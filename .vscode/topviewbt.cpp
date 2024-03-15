#include<iostream>
#include<vector>
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
void traverseLeft(node* root, vector<int>&ans){
    if(root == NULL){
        return;
    }
    
    if(root->left){
         traverseLeft(root->left, ans);
    }
    else{
       traverseLeft(root->right, ans);
    }
    ans.push_back(root->data);
    
}
void traverseRight(node* root, vector<int>&ans){
    if(root == NULL){
        return;
    }
     ans.push_back(root->data);
    if(root->right){
         traverseLeft(root->right, ans);
    }
    else{
       traverseLeft(root->left, ans);
    }  
}
vector<int>TopView(node* root){
    vector<int>ans;
    if(root == NULL){
        return ans;
     }
     
    traverseLeft(root->left, ans);
    ans.push_back(root->data);
    traverseRight(root->right, ans);
    
    return ans;
    
}
int main(){
     node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    vector<int>ans = TopView(root);
    // display(ans);
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}