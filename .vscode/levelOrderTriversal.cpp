#include <iostream>
#include <queue>
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
void levelOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *Node = q.front();
        q.pop();
        if (Node != NULL)
        {
            cout << Node->data << " ";
            if (Node->left)
            {
                q.push(Node->left);
            }
            if (Node->right)
            {
                q.push(Node->right);
            }
            else if (!q.empty())
            {
                q.push(NULL);
            }
        }
    }
}
void reverse(node *root)
{
    if (root == NULL)
    {
        return;
    }
}
void printLevelOrder(node *root)
{
    // Base Case
    if (root == NULL)
        return;

    // Create an empty queue for level order traversal
    queue<node *> q;

    // Enqueue Root and initialize height
    q.push(root);

    while (q.empty() == false)
    {
        // Print front of queue and remove it from queue
        node *Node = q.front();
        cout << Node->data << " ";
        q.pop();

        /* Enqueue left child */
        if (Node->left != NULL)
            q.push(Node->left);

        /*Enqueue right child */
        if (Node->right != NULL)
            q.push(Node->right);
    }
}
int sumAtk(node *root, int k)
{
    if (root == NULL)
    {
        return -1;
    }
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    int level = 0;
    int sum = 0;

    while (!q.empty())
    {
        node *Node = q.front();
        q.pop();

        if (Node != NULL)
        {
            if (level == k)
            {
                sum += Node->data;
            }
            if (Node->left)
            {
                q.push(Node->left);
            }
            if (Node->right)
            {
                q.push(Node->right);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
            level++;
        }
    }
    return sum;
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    // levelOrder(root);
    // printLevelOrder(root);
    cout << sumAtk(root, 2) << endl;
    return 0;
}