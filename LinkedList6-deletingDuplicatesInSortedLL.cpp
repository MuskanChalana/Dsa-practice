#include<iostream>
using namespace std;

// Delete duplicate values from a sorted Linked List

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

Node* deleteDuplicates( Node* head)
{
    
}

int main()
{
    Node *node1 = new Node(10);
    
    Node *head = node1;
    Node *tail = node1;
    
    InsertAtHead(head, 12);

    InsertAtTail(tail, 20);

    InsertAtTail(tail, 30);

    InsertAtPositon(head, tail, 0, 40);

    InsertAtPositon(head, tail, 1, 50);
    print(head);

    DeleteAtPosition(head, 0);
    print(head);

    DeleteAllNodes(head);
    return 0;
}