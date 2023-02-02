#include<iostream>
#include<vector>
using namespace std;
class node{
    public:
    int data;
    node*prev;
    node*next;

 node(int d){
     this->data = d;
     this->prev = NULL;
     this->next = NULL;

 }
~node(){
   int val = this->data;
   if(next!=NULL){
       delete next;
       next = NULL;
   } 
   cout<<"memory free node with data "<<val<<endl;
}
};  
void print (node*head){
 node*temp = head;
 while (temp != NULL)
 {
     cout<<temp->data<<" ";
     temp = temp ->next;

 }
 cout<<endl;
 
}
int getlength(node*head){
    int len = 0;
    node*temp = head;
    while (temp != NULL)
 {
     len++;
     temp = temp ->next;

 }
return len;
}
void insertHead(node* &head, int d){
    node* temp = new node(d);
    temp -> next = head;
    head->prev = temp;
    head = temp;
}
void insertTail(node* &tail, int d){
    node* temp = new node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
}
void insertAtPosition(node* &tail,node* &head,int position,int d ){
    if(position == 1){
        insertHead(head,d);
        return;
    }
    node*temp = head;
    int cnt = 1;
    while (cnt<position-1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next==NULL)
    {
        insertTail(tail,d);
        return;
    }
    
    node* nodeToinsert = new node(d);
    nodeToinsert ->next=temp->next;
    temp->next->prev= nodeToinsert;
    temp->next= nodeToinsert;
    nodeToinsert->prev = temp;
}

void deletenode(int position,node* &head){
    if(position == 1){
   node*temp = head;
   temp->next->prev = NULL;
   head = head->next;
   temp->next = NULL;

   delete temp;
    }
    else{
    node*curr = head;
    node*prev = NULL;

    int cnt = 1;
    while (cnt< position)
    {
        prev = curr;
        curr = curr->next;
        cnt++;
    }
     curr->prev=NULL;
     prev->next=curr->next;
     curr->next=NULL;
     delete curr;   
    }
}
bool checkpallindrome(vector<int>arr){
   int n = arr.size();
   int s = 0;
   int e = n-1;
   while (s<=e)
   {
    if(arr[s] != arr[e]){
        return 0;
    }
    s++;
    e--;
   }
   return 1;
}
bool ispalindrome(node* head){
vector<int>arr;
node*temp = head;
while (temp != NULL)
{
    arr.push_back(temp->data);
    temp = temp->next;
}
  return checkpallindrome(arr);
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
    node*node1 = new node(1);
    node*head = node1;
    node*tail = node1;
    print(head); 
    insertHead(head, 2);
    insertHead(head, 3);
    insertHead(head, 2);
    insertHead(head, 1);
    insertHead(head, 1);
   
    cout<<getlength(head)<<endl;
    insertHead(head, 13);
    print(head);
    cout<<getlength(head)<<endl;
    insertTail(tail,28); 
    print(head);
    insertAtPosition(tail,head,2,45);
    print(head);
    insertAtPosition(tail,head,1,15);
    print(head);
    deletenode(3,head);
    print(head);
    if(ispalindrome(head)){
        cout<<"this is  pallindrome "<<endl;
    }
    else{
        cout<<"this is not pllindrome "<<endl;
    }
    Searching(head,15);
    print(head);
    return 0;
}