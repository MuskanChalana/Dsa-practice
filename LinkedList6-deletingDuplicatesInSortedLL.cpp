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

void InsertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
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
    Node* temp = head;
    int curr = temp -> data;
    Node* del = NULL;

    while(temp -> next != NULL )
    {
        if(curr != temp -> next -> data)
        {
            curr = temp -> next -> data;
            temp = temp -> next;
        }
        else
        {
            del = temp -> next;
            temp -> next = temp -> next -> next;
            delete del;
        }
    }

    return head;
}

int main()
{
    Node *node1 = new Node(10);
    
    Node *head = node1;
    Node *tail = node1;
    
    InsertAtTail(tail,10);
    InsertAtTail(tail,10);
    InsertAtTail(tail,11);
    InsertAtTail(tail,12);
    InsertAtTail(tail,12);
    InsertAtTail(tail,12);
    InsertAtTail(tail,12);
    InsertAtTail(tail,13);
    InsertAtTail(tail,17);
    InsertAtTail(tail,17);

    print(head);
    
    head= deleteDuplicates(head);
    print(head);
    

    return 0;
}