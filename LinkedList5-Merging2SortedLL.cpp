#include<iostream>
using namespace std;

//to merge two sorted linked lists

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

void InsertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
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


Node* MergeTwoSortedLL(Node *&head1, Node *&head2)
{
    Node* temp1 = head1;
    Node* temp2 = head2;

    Node* head3 = NULL;
    Node* temp3 = head3;

    while (temp1 != NULL && temp2 != NULL)
    {   
        if(head3 == NULL)
        {
            if(temp1 -> data <= temp2 -> data)
            {
                head3 = temp3 = temp1;
                temp1 = temp1 -> next;
                continue;
            }
            else
            {
                head3 = temp3 = temp2;
                temp2 = temp2 -> next;
                continue;
            }
        }

        if(temp1 -> data <= temp2 -> data)
        {
            temp3 -> next = temp1;
            temp3 = temp3 -> next;
            temp1 = temp1 -> next;
        }
        else
        {
            temp3 -> next = temp2;
            temp3 = temp3 -> next;
            temp2 = temp2 -> next;
        }

    }

    if(temp1 == NULL)
        temp3 -> next = temp2;
    else
        temp3 -> next = temp1;

    return head3;

}


int main()
{
   Node* LL1= new Node(3);
   Node* LL2= new Node(5);
   Node* T1= LL1;
   Node* T2= LL2;

   InsertAtTail(T1,4);
   InsertAtTail(T1,9);
   InsertAtTail(T1,18);
   InsertAtTail(T1,63);

   InsertAtTail(T2,12);
   InsertAtTail(T2,22);
   InsertAtTail(T2,45);
   InsertAtTail(T2,72);
   InsertAtTail(T2,92);
   InsertAtTail(T2,99);

   print(LL1);
   cout<<endl;
   print(LL2);
   cout<<endl;

   Node* LL3 = MergeTwoSortedLL ( LL1, LL2);

   cout<<"hey";
   print(LL3);
}