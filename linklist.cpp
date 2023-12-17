#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;

    }

};
void InsertAthead(Node* &head, int d){
   Node* temp = new Node(d);
   temp->next = head;
   head= temp;
}
void printnode(Node*&head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp= temp->next;
        
    }
    cout<<endl;
}
Node* deletelast(Node*&head){
    Node* temp = head->next;
    Node* temp2 = head;
    while(temp->next!=NULL){
        temp2->next=temp;
        temp = temp->next;
        
    }
    temp2->next = NULL;
    return temp2;
}
int main(){
    Node* n1 = new Node(2);
    Node* head = n1;
    InsertAthead(head,4);
     InsertAthead(head,6);
      InsertAthead(head,8);
       InsertAthead(head,5);
printnode(head);
Node* newnode = deletelast(head);
printnode(newnode);

    return 0;

}