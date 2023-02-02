#include <iostream>
using namespace std;
class node
{
public:
    int data;
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
// node *uniqueSortedList(node *head)
// {
//     if (head == NULL)
//     {
//         return NULL;
//     }
//     node *curr = head;
//     while (curr != NULL)
//     {
//         if ((curr->next != NULL) && curr->data == curr->next->data)
//         {
//             node *next_next = curr->next->next;
//             node *nodeTodelete = curr->next;
//             delete (nodeTodelete);
//             curr->next = next_next;
//         }
//         else
//         {
//             curr = curr->next;
//         }
//     }
//     return head;
// }
node* uniqueunSortedList(node*head){
    if (head == NULL)
    {
        return NULL;
    }
    node *curr = head;
    while (curr!=NULL)
    {
        node*temp = curr->next;
        while(temp!=NULL){
             if ((temp->next != NULL) && curr->data == temp->data)
        {
            node *next_next = temp->next->next;
            node *nodeTodelete = temp->next;
            delete (nodeTodelete);
            temp->next = next_next;
        }
        else
        {
            temp = temp->next;
        }
        }
        return head;
    }
    
}
//   ListNode *pseudo_head = new ListNode(0);
//         pseudo_head->next = head;
//         ListNode *cur = pseudo_head;
//         while(cur){
//             if(cur->next && cur->next->val == val)   cur->next = cur->next->next;
//             else    cur = cur->next;
//         }
//         return pseudo_head->next;

if (l1 == NULL and l2 == NULL) return NULL;
			else if (l1 == NULL) return l2; 
			else if (l2 == NULL) return l1; 

			int a = l1->val + l2->val;
			ListNode *p = new ListNode(a % 10);
			p->next = addTwoNumbers(l1->next,l2->next);
			
			return p;

int main()if (a >= 10) p->next = addTwoNumbers(p->next, new ListNode(1));
{
    node *node1 = new node(10);
    node *head = node1;
    InsertAtHead(head, 4);
    InsertAtHead(head, 4);
    InsertAtHead(head, 5);
    InsertAtHead(head,7);
    InsertAtHead(head, 4); 
    InsertAtHead(head,10);
    print(head);
    cout << "After uniquesorting is " << endl;
    // node *newhead = uniqueSortedList(head);
    node *newhead = uniqueunSortedList(head);
    print(newhead);
    return 0;
}