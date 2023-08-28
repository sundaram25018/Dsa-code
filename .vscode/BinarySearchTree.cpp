#include<iostream>
#include<queue>
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
node* BST(node *root, int d){
    if(root == NULL){
        return new node(d);
    }
        if(d < root->data){
            root->left = BST(root->left, d);
        }
        else{
            root->right = BST(root->right, d);
        }
    return root;
}
void inOrder(node* root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
node* SearchInBST(node* root, int key){
    if(root == NULL){
        return NULL;
    }
    if(root->data == key){
        return root;
    }
    if(root->data > key){
        return SearchInBST(root->left, key);
    }
    return SearchInBST(root->right, key);
}
void levelOrder(node*root){
    if(root == NULL){
        return;
    }
    queue<node*>q;
   q.push(root);
   q.push(NULL);
   while (!q.empty()){
       node* Node = q.front();
       q.pop();
         if (Node == NULL)
        {
            cout<<endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else{
            
          if(Node->left){
               q.push(Node->left);
           }
            if(Node->right){
               q.push(Node->right);
           }
           cout<<Node->data<<" ";
        }
           
           
       }
   }
   int maximum(node* root){
  node* temp = root;
  while(temp->right !=NULL){
    temp = temp->right;
  }
  return temp->data;
   
   
   }
   int minimum(node* root){
    node* temp = root;
    while(temp->left !=NULL){
        temp = temp->left;
    }
    return temp->data;
   }
// node* inOrderSucc(node* root){
// node* curr = root;
// while (curr && curr->left != NULL)
// {
//     curr = curr->left;
// }
// return curr;
// }
node* inOrderPre(node* root){
node* curr = root;
while (curr && curr->right != NULL)
{
    curr = curr->right;
}
return curr;
}

// node* deleteInBST(node *root, int key){
//     if(key < root->data){
//         root->left = deleteInBST(root->left, key);
//     }
//     else if(key > root->data){
//         root->right = deleteInBST(root->right, key);
//     }
//     else{
//         if(root->left == NULL){
//             node* temp = root->right;
//             free(root);
//             return temp;
//         }
//         else if(root->right == NULL){
//  node* temp = root->right;
//             free(root);
//             return temp;
//         }
//          node* temp = inOrderSucc(root->right);
//          root->data = temp->data;  
//          root->right = deleteInBST(root->right, key);
//     }
//     return root;
// }
node *deletion(node* root, int val){
    if(root == NULL){
        return root;
    }
    if(root->data == val){
           if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
           }
           if(root->left !=NULL && root->right == NULL){
            node* temp = root->left;
            delete root;
            return temp;
           }
           if(root->left ==NULL && root->right != NULL){
            node* temp = root->right;
            delete root;
            return temp;
           }
           else{
            int mini = minimum(root->right);
            root->data = mini;
            root->right = deletion(root->right, mini);
            return root;

           }
    }
    if(val> root->data){
        root->right = deletion(root->right, val);
    }
    if(val< root->data){
        root->left = deletion(root->left, val);
    }
}
int main(){
    node *root = NULL;
    root = BST(root, 5);
    BST(root, 1);
     BST(root, 3);
      BST(root, 4);
       BST(root, 2);
        BST(root, 7);
        inOrder(root);
        cout<<endl<<"your data "<<endl;
        if(SearchInBST(root, 4) == NULL){
            cout<<"key does't exist"<<endl;
        }
        else{
            cout<<"key exist"<<endl;
        }
        levelOrder(root);
        cout<<maximum(root)<<endl;
        cout<<minimum(root)<<endl;
        cout<<"After deletion "<<endl;
        deletion(root, 7);
          levelOrder(root);
           inOrder(root);
   node* temp = inOrderPre(root);
   cout<<temp->data;

    return 0;
}

