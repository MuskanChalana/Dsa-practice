#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;

        Node(int num)
        {
            this -> data = num;
            this -> next = NULL;
        }
};

int findMergeNode(Node* &head1, Node* &head2)
{
    Node* temp1 = head1;
    Node* temp2 = head2;

    while(temp1 != NULL)
    {
        temp2 = head2;
        while (temp2 != NULL)
        {
            if(temp1 == temp2)
            {
                return temp1 -> data;
            }
            temp2 = temp2 -> next;

        }
        temp1 = temp1 -> next;
    }
}

void InsertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
    // delete temp;
}

int main()
{
    Node *node1 = new Node(10);
    Node *node2 = new Node(2);
    
    Node *head1 = node1;
    Node *tail1 = node1;

    Node *head2 = node2;
    Node *tail2 = node2;

    InsertAtTail(tail1, 20);
    InsertAtTail(tail1, 20);
    InsertAtTail(tail1, 20);
    InsertAtTail(tail2, 30);

    Node* node3 = new Node(45);
    tail1->next = node3;
    tail2->next = node3;

    Node* node4 = new Node(6);
    node3->next = node4;

    cout<<findMergeNode(head1, head2)<<endl;



}