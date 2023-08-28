#include<iostream>
#include<vector>
#include<queue>
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
    if((root == NULL) || (root->left == NULL && root->right == NULL)){
        return;
    }
    ans.push_back(root->data);
    if(root->left){
         traverseLeft(root->left, ans);
    }
    else{
       traverseLeft(root->right, ans);
    }
    
    
}
void traverseRight(node* root, vector<int>&ans){
    if((root == NULL) || (root->left == NULL && root->right == NULL)){
        return;
    }
    
    if(root->right){
         traverseLeft(root->right, ans);
    }
    else{
       traverseLeft(root->left, ans);
    }
    ans.push_back(root->data);
    
    
}
void traverseLeaf(node* root, vector<int>&ans){
    if(root == NULL){
        return;
    }
    
   if(root->left == NULL && root->right == NULL){
       ans.push_back(root->data);
       return;
   }

    traverseLeaf(root->left, ans);
    traverseLeaf(root->right, ans);
    
}
vector<int>boundaryTravsal(node* root){
    vector<int>ans;
    if(root == NULL){
        return ans;
    }
    ans.push_back(root->data);
    traverseLeft(root->left, ans);
    traverseLeaf(root, ans);
    traverseRight(root->right, ans);
    return ans;
}
void display(vector<int>&ans){
 for(int  i = 0; i<ans.size(); i++){
    cout<<ans[i]<<" "; 
 }
}
vector<int>zigzag(node* root){
    vector<int>result;
    if(root == NULL){
        return result;
    }
    queue<node*>q;
    q.push(root);
    bool leftToright = true;
    while (!q.empty())
    {
        int size = q.size();
        vector<int>ans(size);
        for(int  i =0; i< size; i++){
          node* frontNode = q.front();
          q.pop();
          int idx = leftToright ? i:size-i-1;
          ans[idx] = frontNode->data; 
          if(frontNode->left){
            q.push(frontNode->left);
          }
         if(frontNode->right){
            q.push(frontNode->right);
          }
          
        }
        if(leftToright == true){
            leftToright = false;
        }
        else{
            leftToright = true;
        }
        for(auto i:ans){
            result.push_back(i);
        }
    }
    return result;
}

int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    
    // vector<int>ans = boundaryTravsal(root);
    vector<int>ans = zigzag(root);
    // display(ans);
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}