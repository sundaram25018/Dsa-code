#include <iostream>
#include <queue>
#include<stack>
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
node *buildTree(node *root)
{
    cout << " Enter the data : " << endl;
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter data for inserting in left " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right " << data << endl;
    root->right = buildTree(root->right);
    return root;
}
void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {

        node *temp = q.front();

        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
            cout << temp->data << " ";
        }
    }
}
void reverseTravesal(node* root){
    queue<node*>q;
    stack<node*>s;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node* temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else{
            s.push(temp);
             if(temp->left){
            q.push(temp->left);
        }
         if(temp->right){
            q.push(temp->right);
        }
        }
        

        
    }
    while (!s.empty())
    {
        node* temp = s.top();
        if(temp==NULL){
            cout<<endl;
        }
        else{
           cout<<temp->data<<" ";
           s.pop();
        }
        
        
    }
    
    

}
void inOrder(node* root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right); 
}
void preOrder(node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right); 
}
void postOrder(node* root){
    if(root == NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
     cout<<root->data<<" "; 
}
void levelOrder(node* &root){
    queue<node*>q;
    cout<<"Enter data for root"<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);
    while (!q.empty())
    {
        node* temp = q.front();
        q.pop();
        cout<<"Enter the data for left node "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata!= -1){
            temp->left = new node(leftdata);
            q.push(temp->left);
        }
        cout<<"Enter the data for right node "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;
        if(rightdata!= -1){
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    }
    
}

int main()
{
    node *root = NULL;
    levelOrder(root);
    // levelOrderTraversal(root);
    reverseTravesal(root);
    // root = buildTree(root);
    
    // cout<<"inorder traversal is"<<endl;
    // inOrder(root);
    // cout<<endl;
    // cout<<"preorder traversal is"<<endl;
    // preOrder(root);
    //  cout<<endl;
    // cout<<"postorder traversal is"<<endl;
    // postOrder(root);
    
    return 0;
}

// if(root==NULL)
//             return {};

//         queue<TreeNode*> q;
//         vector<vector<int>> ans;
//         q.push(root);
//         while(!q.empty())
//         {
//             int size=q.size();
//             vector<int> res;
//             for(int i=0;i<size;i++)
//             {
//                 TreeNode* temp=q.front();
//                 res.push_back(temp->val);
//                 q.pop();
//                 if(temp->left)
//                     q.push(temp->left);
//                 if(temp->right)
//                     q.push(temp->right);
//             }
//             ans.push_back(res);
//         }
//         return ans;