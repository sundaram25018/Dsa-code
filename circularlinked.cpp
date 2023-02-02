#include <iostream>
#include <map>
using namespace std;
class node
{
public:
    int data;
    node *prev;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void InsertAtHead(node *&head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}
void InsertAttail(node *&tail, int d)
{
    node *temp = new node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
void insertatPosition(node *&tail, node *&head, int position, int d)
{
    if (position == 1)
    {
        InsertAtHead(head, d);
        return;
    }
    node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        InsertAttail(tail, d);
        return;
    }
    node *nodetoinsert = new node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}

void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

bool isCircular(node *head)
{
    if (head == NULL)
    {
        return true;
    }
    node *temp = head->next;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }
    if (temp == head)
    {
        return true;
    }
    return false;
}
bool detectLoop(node *head)
{
    if (head == NULL)
    {
        return false;
    }
    map<node *, bool> visited;
    node *temp = head;
    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}
int main()
{
    node *n1 = new node(4);
    node *head = n1;
    node *tail = n1;
    InsertAtHead(head, 23);
    InsertAtHead(head, 13);
    InsertAtHead(head, 10);
    insertatPosition(tail, head, 3, 22);
    InsertAttail(tail, 3);
    tail->next = head;
    //  insertTail(head,8);

    //  print(head);
    // try
    // {
    //      if(isCircular(head)){
    //     cout<<"this is circular in nature"<<endl;
    // }
    // else{
    //     cout<<"this is not circular in nature"<<endl;
    // }
  
    // }
    
    // catch(...)
    // {
    //     cout<<"this is not detect circular loop"<<endl;
    // }

    
   
    if (detectLoop(head))
    {
        cout << " linked list is circular in nature" << endl;
    }
    else
    {
        cout << "linked list is not circular" << endl;
    }

    return 0;
}