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

int Compare(Node *head1, Node *head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;

    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1 -> data != temp2->data)
        {
            return 0;
        }
        temp1 = temp1 -> next;
        temp2 = temp2 -> next;
    }

    if (temp1!=NULL || temp2!=NULL)
        return 0;
    
    return 1;
    
}

int main()
{
    Node *head1=new Node(3);
    Node *head2=new Node(3);
    InsertAtHead(head1, 2);
    InsertAtHead(head1, 1);
    InsertAtHead(head2, 2);
    InsertAtHead(head2, 1);
    
    cout<<Compare(head1,head2)<<endl;

    InsertAtHead(head2, 1);
    cout<<Compare(head1,head2);

    return 0;
}