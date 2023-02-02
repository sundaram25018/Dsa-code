// #include <iostream>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *next;
//     node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
//     ~node()
//     {
//         int value = this->data;
//         if (this->next != NULL)
//         {
//             delete next;
//             this->next = NULL;
//         }
//         cout << "memory is free for nodes " << value << endl;
//     }
// };
// void InsertAtHead(node *&head, int d)
// {
//     node *temp = new node(d);
//     temp->next = head;
//     head = temp;
// }
// void InsertAttail(node *&tail, int d)
// {
//     node *temp = new node(d);
//     tail->next = temp;
//     tail = temp;
//     cout << "edher aaya tha" << endl;
// }

// void print(node *&head)
// {
//     node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }
// void insertatPosition(node *&tail, node *&head, int position, int d)
// {
//     if (position == 1)
//     {
//         InsertAtHead(head, d);
//         return;
//     }
//     node *temp = head;
//     int cnt = 1;
//     while (cnt < position - 1)
//     {
//         temp = temp->next;
//         cnt++;
//     }
//     if (temp->next == NULL)
//     {
//         InsertAttail(tail, d);
//         return;
//     }
//     node *nodetoinsert = new node(d);
//     nodetoinsert->next = temp->next;
//     temp->next = nodetoinsert;
// }
// void deletenode(int position, node *&head)
// {
//     if (position == 1)
//     {
//         node *temp = head;
//         head = head->next;
//         temp->next = NULL;

//         delete temp;
//     }
//     else
//     {
//         node *curr = head;
//         node *prev = NULL;

//         int cnt = 1;
//         while (cnt < position)
//         {
//             prev = curr;
//             curr = curr->next;
//             cnt++;
//         }
//         prev->next = curr->next;
//         curr->next = NULL;
//         delete curr;
//     }
// }
// int main()
// {
//     node *node1 = new node(10);
//     //   cout<<node1->data<<endl;
//     //     cout<<node1->next<<endl;
//     node *head = node1;
//     node *tail = node1;

//     print(head);
//     InsertAtHead(head, 23);
//     print(head);
//     //  InsertAttail(tail, 12);
//     //  print(head);
//     // InsertAttail(tail, 15);
//     //  print(head);
//     //   InsertAttail(tail, 18);
//     //  print(head);
//     insertatPosition(tail, head, 3, 22);
//     print(head);
//     //  cout<<"head "<<head->data<<endl;
//     //  cout<<"tail "<<tail->data<<endl;
//     // deletenode(4,head);
//     // print(head);
//     return 0;
// }

#include<iostream>
using namespace std;
class node{
    public:
      int data;
      node*next;

      node(int data){
          this->data = data;
          this->next = NULL;
      }
};
void insertAtHead(node* &head, int d){
    node* temp = new node(d);
    temp->next = head;
    head = temp;
}
void inserAtTail(node* &tail, int d){
    node* temp = new node(d);
    tail->next = temp;
    tail = temp;
}
void print(node* &head){
   node* temp = head;
   while (temp!=NULL)
   {
       cout<<temp->data<<" ";
       temp = temp->next;
   }cout<<endl;
    
}
void insertAtPosition(node* &head, node* &tail, int pos, int d){
    if(pos == 1){
        insertAtHead(head, d);
        return;  
    }

    node* temp = head;
    if(temp->next == NULL){
        inserAtTail(tail,d);
        return;
    }
    int cnt = 1; 
    while (cnt<pos-1)
    {
        temp = temp->next;
        cnt++;
    }
    
    node* nodeToInsert = new node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}
void deleteNode(int pos, node* &head){
    if(pos == 1){
        node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;

    }
    else{
        node* curr = head;
        node* prev = NULL;
        int cnt =1;
        while (cnt<pos)
        {
           prev = curr;
            curr = curr->next;
            cnt++; 
        }
          prev->next = curr->next;
        curr->next = NULL;
        delete curr;
        
    }
}
bool Searching(node* &head, int key){
    node*temp = head;
    while (temp!=NULL)
    {
        if(temp->data == key){
            return true;
        }
    }
    return false;
}
int main(){
    int key = 5;
    node* n1 = new node(3);
    node* head = n1;
    node* tail = n1;
    print(head);
    inserAtTail(tail, 4);
    insertAtHead(head,5);
    insertAtPosition(head,tail,2,6);
    if(Searching(head,key)){
        cout<<"element is present"<<endl;
    }
    else{
        cout<<"element is not present"<<endl;
    }
    deleteNode(3,head);
    print(head);
    return 0;
}