#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
void Insertnode(Node *&head, int val)
{
    Node* n = new Node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    Node *temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void displaynode(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout <<temp->data <<"->";
        temp = temp->next;
        
    }
    
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Insertnode(head,1);
    Insertnode(head,2);
    Insertnode(head,3);
    displaynode(head);

    return 0;
}