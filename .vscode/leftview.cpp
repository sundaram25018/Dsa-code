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
void traverseLeft(node* root, vector<int>&ans, int level){
    if(root == NULL){
        return;
    }
    if(level == ans.size()){
        ans.push_back(root->data);
    }
   traverseLeft(root->left, ans, level+1);
   traverseLeft(root->right, ans, level+1);
    
}
vector<int> leftview(node* root){
    vector<int>ans;
    traverseLeft(root, ans, 0);
   return ans;
}
void traverseright(node* root, vector<int>&ans, int level){
    if(root == NULL){
        return;
    }
    if(level == ans.size()){
        ans.push_back(root->data);
    }
   traverseright(root->right, ans, level+1);
   traverseright(root->left, ans, level+1);
   
    
}
vector<int> Rightview(node* root){
    vector<int>ans;
    traverseright(root, ans, 0);
   return ans;
}
int main(){
    // node* root = new node(1);
    // root->left = new node(2);
    // root->right = new node(3);
    // root->left->left = new node(4);
    // root->left->right = new node(5);
    // root->right->left = new node(6);
    // root->right->right = new node(7);
    // vector<int>ans = leftview(root);
    // // display(ans);
    // for(int i = 0; i<ans.size(); i++){
    //     cout<<ans[i]<<" ";
     node* root = new node(1);
    root->left = new node(2);
    root->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    root->right->left->left = new node(8);
    root->right->left->left->left = new node(9);
    root->left->right = new node(3);
     root->left->right->left = new node(4);
vector<int>ans = leftview(root);
    // display(ans);
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
   
    //  vector<int>ans = Rightview(root);
    // // display(ans);
    // for(int i = 0; i<ans.size(); i++){
    //     cout<<ans[i]<<" ";
    
}
return 0;
}