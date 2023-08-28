#include<iostream>
#include<utility>
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
int maximum(node* root){
   
    if(root == NULL){
        return INT32_MIN;
    }
   int ans = root->data;
   int leftans =  maximum(root->left);
   int rightans =  maximum(root->right);
   if(leftans>ans){
    ans = leftans;
   }
   if(rightans>ans){
    ans = rightans;
   }
    
    return ans;
}
void leafnode(node* root){
    if(root == NULL){
        return;
    }
    if(!root->left && !root->right){
        cout<<root->data<<" ";
        return;
    }
     leafnode(root->left);
      leafnode(root->right);
    // if(root->left){
    //     leafnode(root->left);
    // }
    //  if(root->right){
    //     leafnode(root->right);
    // }
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
pair<bool, int> fastheight(node* root){
    if(root == NULL){
        pair<bool, int>p = make_pair(true, 0);
        return p;
    }
    pair<bool, int> left = fastheight(root->left);
    pair<bool, int> right = fastheight(root->right);
    bool leftans = left.first; 
    bool rightans = right.first;
    bool diff = abs(left.second - right.second) <=1;
    pair<bool, int>ans;
    ans.second = max(left.second, right.second)+1;
    if(leftans && rightans && diff){
        ans.first = true;
    }
    else{
        ans.first = false;
    }
 return ans;
}
bool checkbalance(node* root){
    return fastheight(root).first;
}
pair<int, int> fasth(node* root){
    if(root == NULL){
         pair<int, int>p = make_pair(0, 0);
        return p;
    }
    pair<int, int> left = fastheight(root->left);
    pair<int, int> right = fastheight(root->right);
    int leftans = left.first; 
    int rightans = right.first;
    int height = left.second+right.second+1;
    pair<int, int>ans;
    ans.first = max(leftans, max(rightans, height));
    ans.second = max(left.second, right.second)+1;
    return ans;

}
int diameter(node* root){
    return fasth(root).first;
}
int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
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
    if(checkbalance(root)){
        cout<<"tree is balance"<<endl;
    }
    else{
        cout<<"tree is not balance"<<endl;
    }
    cout<<diameter(root);
    cout<<maximum(root)<<endl;

    return 0;
}


