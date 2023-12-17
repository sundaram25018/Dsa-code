#include<iostream>
#include<vector>
using namespace std;
class node{
    public:
    
        int data;
        node* left;
        node* right;
        node(int data){
            this->data = data;
            this->left = NULL;
            this->right = right;
    }
};
void solve(node* root, int sum, int &maxsum, int len, int &maxlen){
    if(root == NULL){
        if(len>maxlen){
          maxlen = len;
          maxsum = sum;
        }
        else if(len = maxlen){
            maxsum = max(sum, maxsum);
        }
        return;
    }
    sum = sum+root->data;
    solve(root->left, sum,maxsum, len+1, maxlen);
    solve(root->right, sum,maxsum, len+1, maxlen);
}
int longestpathsum(node* root){
    int sum = 0;
    int len = 0;
    int maxlen = 0;
    int maxsum = INT32_MIN;
    solve(root, sum, maxsum, len, maxlen);
    return maxsum;

}
node* LCA(node* root, int n1, int n2){
    if(root == NULL){
        return NULL;
    }
    if(root->data == n1 || root->data == n2){
        return root;
    }
    node* leftans = LCA(root->left, n1, n2);
    node* rightans = LCA(root->right, n1, n2);
    if(leftans!=NULL && rightans !=NULL){
        return root;
    }
    else if(leftans==NULL && rightans !=NULL){
        return rightans;
    }
    else if(leftans!=NULL && rightans ==NULL){
        return leftans;
    }
    else{
        return NULL;
    }
}
void solve(node* root, int k, int &count, vector<int>ans){
    if(root == NULL){
        return;
    }
    ans.push_back(root->data);
    solve(root->left, k, count, ans);
    solve(root->right, k, count, ans);
    int size = ans.size();
    int sum = 0;
    for(int i = size-1; i>=0; i--){
        sum += ans[i];
        if(sum == k){
            count++;
        }
    }
    ans.pop_back();
}
int kthsum(node* root, int k){
    vector<int>ans;
    int count = 0;
    solve(root, k, count, ans);
    return count;

}
int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    // cout<<longestpathsum(root);
    int n1 = 4;
    int n2 = 6;
    node* ans = LCA(root, n1, n2);
    // cout<<kthsum(root, 7);

    return 0;
}