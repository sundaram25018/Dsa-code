// #include<iostream>
// using namespace std;
// int catelan(int n){
//     if(n<=1){
//         return 1;
//     }
//     int res =0;
//     for (int i = 0; i <= n-1; i++)
//     {
//         res += catelan(i)*catelan(n-i-1);
//     }
//     return res;
// }
// int main(){
//     for (int i = 0; i < 10; i++)
//     {
//         cout<<catelan(i)<<" ";
//     }
    
//     return 0;
// }

// construct possible BST

#include<iostream>
#include<vector>
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
vector<node*>constructbst(int start, int end){
  vector<node*>tree;
  if(start>end){
      tree.push_back(NULL);
      return tree;
  }
  for (int i = start; i <= end; i++)
  {
      vector<node*>leftSubtree = constructbst(start, i-1);
      vector<node*>rightSubtree = constructbst(i+1, end);
      for (int j = 0; j < leftSubtree.size(); j++)
      {
          node* left = leftSubtree[j];
          for (int k = 0; k < rightSubtree.size(); k++)
          {
              node* right = rightSubtree[k];
              node* Node = new node(i);
              Node->left = left;
              Node->right = right;
              tree.push_back(Node);
          }
          
      }
      
  }
  return tree;
  
}

void printpreOrder(node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    printpreOrder(root->left);
    printpreOrder(root->right);
}
int main(){
    vector<node*>totaltree = constructbst(1,3);
    for (int i = 0; i < totaltree.size(); i++)
    {
        cout<<i+1<<" : ";
        printpreOrder(totaltree[i]);
        cout<<endl;
    }
    
    return 0;
}