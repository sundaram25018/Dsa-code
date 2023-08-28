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
        this->right = NULL;
    }
};
int solve(node* root, int &i, int k){
    if(root == NULL){
        return -1;
    }
    int leftans = solve(root->left, i, k);
    if(leftans!=-1){
        return leftans;
    }
    i++;
    if(i==k){
        return root->data;
    }
    return solve(root->right, i, k);
}
int kthsmallest(node* root, int k){
    int i = 0;
    int ans = solve(root, i, k);
    return ans;
}
// pair<int, int>predecessorandSuccessor(node* root, int key){
//     node* temp = root;
//     int predeccssor = -1;
//     int successor = -1;
//     while(temp->data!=key){
//         if(temp->data > key){
//             successor = temp->data;
//             temp = temp->left;
            
//         }
//         else{
//             predeccssor = temp->data;
//             temp = temp->right;
            
//         }
//     }
//     node* lefttree = temp->left;
//     while(lefttree!=NULL){
//         predeccssor = lefttree->data;
//         lefttree = lefttree->right;
//     }
//     node* righttree = temp->right;
//     while(righttree!=NULL){
//         successor = righttree->data;
//         righttree = righttree->left;
//     }
//     pair<int, int>ans;
//     ans.first = predeccssor;
//     ans.second = successor;
//     return ans;
// }
// void inorder(node*root, vector<int>&v){
//     if(root == NULL){
//         return;
//     }
//     inorder(root->left, v);
//     v.push_back(root->data);
//     inorder(root->right, v);
// }
// bool twosum(node* root, int val){
//    vector<int>v;
//    inorder(root, v);
//    bool flage = false;
//     int i =0;
//     int j =v.size()-1;
//     while(i<j){
//         if(v[i]+v[j]==val){
//              flage= true;
//              break;
//         }
//         else if(v[i]+v[j]>val){
//             j--;
//         }
//         else{
//             i++;
//         }
//     }
//     return flage;
// }
void inorder(node* root, vector<int>&v){
    if(root == NULL){
        return;
    }
    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right, v);
}
node* inordertobalance(int s, int e, vector<int>&v){
    if(s>e){
        return NULL;
    }
    int mid = s+e/2;
    node* root = new node(v[mid]);
    root->left = inordertobalance(s, mid-1, v);
    root->right = inordertobalance(mid+1, e, v);
    return root;
    
}
node* NormalBstToBalanceBst(node* root){
    vector<int>v1;
    inorder(root, v1);
    return inordertobalance( 0, v1.size()-1,v1); 
}
void display(node* root){
    if(root == NULL){
        return;
    }
    display(root->left);
    cout<<root->data<<" ";
    display(root->right);
}
int main(){
    node* root = new node(9);
    root->left = new node(8);
    root->left->left = new node(6);
    root->left->left->left = new node(5);
    root->left->left->right = new node(7);
    root->right = new node(14);
    root->right->left = new node(11);
      root->right->right = new node(15);
      cout<<kthsmallest(root, 2)<<endl;;
    //  pair<int, int>val =  predecessorandSuccessor(root, 8);
    //  cout<<"predeccssor : "<<val.first<<endl;
    //   cout<<"successor : "<<val.second<<endl;
    //   cout<<twosum(root, 11);
      node* temp = NormalBstToBalanceBst(root);
      display(temp);
    return 0;
}