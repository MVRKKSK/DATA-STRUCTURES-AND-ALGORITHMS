#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

Node *head = NULL;

void InsertNode(Node *&head, int data)
{
    Node *n = new Node(data);
    n->next = head;
    head = n;
}

void InsertMiddle(Node *&head, int data, int pos)
{
    if (pos == 0)
    {
        InsertNode(head, data);
    }
    else
    {
        Node *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            Node *n = new Node(data);
            n->next = temp->next;
            temp->next = n;
        }
    }
}

void InsertEnd(Node* &head , int data){

    Node *n = new Node(data);
   Node* temp= head;
   while(temp->next!=NULL){
       temp = temp->next;
   }
   temp->next = n;
    
}
void PrintNode(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "-->";
        head = head->next;
    }
    cout << "NULL" << endl;
}
int main()
{

    Node *head = NULL;
    InsertNode(head, 5);
    InsertNode(head, 4);
    InsertNode(head, 3);
    InsertNode(head, 2);
    InsertNode(head, 1);
    InsertMiddle(head, 34, 2);
    InsertEnd(head ,22);
    PrintNode(head);
}
