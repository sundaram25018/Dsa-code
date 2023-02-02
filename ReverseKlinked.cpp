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
// node*reverseK(node* &head, int k){
//     node*prev = NULL;
//     node* curr = head;
//     node* next;
//     int cnt = 0;
//     while (curr!=NULL && cnt<k)
//     {
//         next= curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//         cnt++;
//     }
//     if (next!=NULL)
//     {
//         head->next = reverseK(next,k);
//     }
//     return prev;
// }

node*getMiddle(node* head){
    if(head == NULL){
        return NULL;
    }
    if (head->next==NULL)
    {
            return head->next;
    }
    if (head->next->next==NULL)
    {
            return head->next;
    }
    node*slow = head;
    node*fast = head->next;
     while (fast != NULL)
     {
         fast = fast->next;
         if(fast!=NULL){
             fast = fast->next;
         }
         slow = slow->next;
     }
     return slow;   
}
int getLength(node* head){
    int len = 0;
    while (head != NULL)
    {
        len++;
        head = head ->next;
    }
    return len;
}
node* findMiddle(node* head){
    return getMiddle(head);
}

int main(){
node*n1 = new node(4);
     node*head = n1;
     InsertAtHead(head,3);   
     InsertAtHead(head,5);
     InsertAtHead(head,1);
     InsertAtHead(head,9);
      InsertAtHead(head,8 );
     print(head);

    //  int k=2;
    //  node*nhead = reverseK(head,k);
    //  print(nhead);
    node*nhead = findMiddle(head);
    print(nhead);
    return 0;
}