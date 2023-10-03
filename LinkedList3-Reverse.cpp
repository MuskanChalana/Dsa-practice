//Reverse a Linked List
// example head->1->2->3->Null to head->3->2->1->Null

#include<iostream>
using namespace std;

class Node
{
    public:
    
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

};

void InsertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
    // delete temp;
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void ReverseLL(Node* &head)
{
    Node *temp=head;
    Node *prev=NULL;
    Node *further;
    
    while(temp!=NULL)
    {
        further=temp->next;
        temp->next=prev;
        prev=temp;
        temp=further;
    }
    head=prev;

}

int main()
{
    Node *head=new Node(3);
    InsertAtHead(head, 2);
    InsertAtHead(head, 1);

    print(head);
    ReverseLL(head);
    print(head);

    return 0;
}