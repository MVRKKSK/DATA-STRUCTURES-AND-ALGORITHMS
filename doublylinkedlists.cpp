#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val)
    {
        data=val;
        next=NULL;
        prev=NULL;
    }
};
void InsertatHead(Node* &head , int val)
{
    Node* n = new Node(val);
    n->next=head;
    if(head!=NULL)
    {
        head->prev=n;
    }
    head=n; 
}

void InsertatTail(Node* &head , int val)
{
    if(head==NULL)
    {
        InsertatHead(head,val);
        return;
    }
    Node* n = new Node(val);
    Node* temp = head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}
void displaynode(Node* head)
{
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    
    
    cout<<endl;

    
}
int main()
{
    Node* head=NULL;
    InsertatTail(head , 1);
    InsertatTail(head , 2);
    InsertatTail(head , 3);
    InsertatTail(head , 4);
    displaynode(head);
    InsertatHead(head , 5);
    displaynode(head);
    return 0;
}