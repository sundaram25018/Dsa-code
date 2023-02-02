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
void InsertAtHead(node* &head, int d){
node*temp = new node(d);
temp -> next = head;
head = temp; 
}

void print(node* &head){
    node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp ->next;
    }
    cout<<endl;
}

// node* reverseLinkedList(node *head){
//     if(head == NULL || head->next == NULL){
//       return head;
//     }
//     node* prev = NULL;
//     node* curr = head;
//     node* forward = NULL;

//     while (curr != NULL)
//     {
//         forward = curr->next;
//         curr->next=prev;
//         prev = curr;
//         curr = forward;
//     }
//     return prev;
// }
node* reverseRecursive(node* &head){
    if (head==NULL ||  head->next==NULL)
    {
      return head;      
    }
    
    node* newhead = reverseRecursive(head->next);
    head->next->next= head;
    head->next=NULL;

    return newhead;
}
int main(){
    node*n1 = new node(4);
     node*head = n1;
     InsertAtHead(head,23);
         InsertAtHead(head,13);
             InsertAtHead(head,10);
     print(head);
    //  node* rev = reverseLinkedList(head);
    //    print(rev);
    node *newhead = reverseRecursive(head);
    print(newhead);

  
    return 0;
}