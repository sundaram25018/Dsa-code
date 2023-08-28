#include<iostream>
#include<map>
using namespace std;
class node{
    public:
    int data;
    node*prev;
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
void InsertAttail(node* &tail, int d){
    node* temp = new node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
}
void insertatPosition(node* &tail, node* &head, int position,int d){
    if(position == 1){
        InsertAtHead(head, d);
return;
    }
    node* temp = head;
    int cnt = 1;
    while (cnt<position-1)
    {
        temp = temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        InsertAttail(tail,d);
        return;
    }
    node*nodetoinsert = new node(d);
    nodetoinsert->next= temp->next;
    temp -> next = nodetoinsert;    
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
bool detectLoop(node* head){
    if(head == NULL){
        return false;
    }
    map<node*, bool>visited;
    node* temp = head;
    while (temp != NULL)
    {
        if(visited[temp] == true){
            cout<<"Present on element "<<temp->data<<endl;
            return 1;
        }
        visited[temp] = true;
        temp = temp->next;

    }
   return false;   
}

node* floydDetectLoop(node* head){
    if(head == NULL){
        return NULL;
    }
    node*slow = head;
    node*fast = head;
    while (slow!=NULL && fast!=NULL)
    {
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
        }
        slow = slow->next;
        if (slow == fast)
        {
            cout<<"present at "<<slow->data<<endl;
            return slow;
        }
        
    }
return NULL;
    
}
node* getStartingNode(node* head){
    if (head == NULL)
    {
        return NULL;
    }
    node*intersection = floydDetectLoop(head);
    node* slow = head;

    while (slow!= intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;  
}
void removeloop(node* head){
    if (head == NULL)
    {
        return;
    }
    node* startofloop = getStartingNode(head);
    node* temp = startofloop;
    while (temp->next != startofloop)
    {
        temp = temp->next;
    }
    temp->next = NULL;
    
}
int main(){
    node*n1 = new node(4);
     node*head = n1;
      node*tail = n1;
     InsertAtHead(head,23);
         InsertAtHead(head,13);
             InsertAtHead(head,10);
           insertatPosition(tail,head,3,22);
           InsertAttail(tail,3);
          tail->next = head->next->next;   
            //  insertTail(head,8);

    //  print(head); 

    //  if(detectLoop(head)){
        if(floydDetectLoop(head)){
         cout<<" linked list is circular in nature"<<endl;
     }
     else{
         cout<<"linked list is not circular"<<endl;
     }
     node*loop = getStartingNode(head);
     cout<<"loop start at "<<loop->data<<endl;
     removeloop(head);

     print(head);
    // print(loop);
    return 0;
}