#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        Node*next = NULL;

    }
};

Node* head = NULL;

void InsertNode(Node* &head , int data){

    Node * n = new Node(data);

    n->next = head;
    head = n;


}

void Reverselist(Node* &head){
    Node * prev= NULL;
    Node *current = head;
    Node* temp; 
    while (current!=NULL){
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;    
    }
    head = prev;
    return;
    
}

void printList(Node * head){
    while (head!=NULL)
    {
        cout<<head->data<<"-->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
    
}

int main(){
    Node* head = NULL;
    InsertNode(head,4);
    InsertNode(head,3);
    InsertNode(head,2);
    InsertNode(head,1);

    printList(head);
    cout<<"reversed linked list is"<<endl;
    Reverselist(head);
    printList(head);


}
