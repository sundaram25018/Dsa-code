// #include<iostream>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *left;
//     node *right;

//     node(int d)
//     {
//         this->data = d;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// node* BST(node *root, int d){
//     if(root == NULL){
//         return new node(d);
//     }
//         if(d < root->data){
//             root->left = BST(root->left, d);
//         }
//         else{
//             root->right = BST(root->right, d);
//         }
//     return root;
// }
// void inOrder(node* root){
//     if(root == NULL){
//         return;
//     }
//     inOrder(root->left);
//     cout<<root->data<<" ";
//     inOrder(root->right);
// }
// node* SearchInBST(node* root, int key){
//     if(root == NULL){
//         return NULL;
//     }
//     if(root->data == key){
//         return root;
//     }
//     if(root->data > key){
//         return SearchInBST(root->left, key);
//     }
//     return SearchInBST(root->right, key);
// }
// node* inOrderSucc(node* root){
// node* curr = root;
// while (curr && curr->left != NULL)
// {
//     curr = curr->left;
// }
// return curr;
// }
// node* deleteInBST(node *root, int key){
//     if(key < root->data){
//         root->left = deleteInBST(root->left, key);
//     }
//     else if(key > root->data){
//         root->right = deleteInBST(root->right);
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
//          root->right = deleteInBST(root->right, temp->key);
//     }
//     return root;
// }
// int main(){
//     node *root = NULL;
//     root = BST(root, 5);
//     BST(root, 1);
//      BST(root, 3);
//       BST(root, 4);
//        BST(root, 2);
//         BST(root, 7);
//         // inOrder(root);
//         // cout<<endl<<"your data "<<endl;
//         // if(SearchInBST(root, 6) == NULL){
//         //     cout<<"key doest exist"<<endl;
//         // }
//         // else{
//         //     cout<<"key exist"<<endl;
//         // }
//     return 0;
// }