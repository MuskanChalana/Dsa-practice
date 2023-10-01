#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
};

int main()
{
    struct node *head, *newnode, *temp;
    head=NULL;
    int num;
    for(int i=0;i<5;i++)
    {
        newnode = (struct node *) malloc (sizeof(struct node));
        cout<<"enter data value";
        cin>>num;
        newnode->data=num;
        newnode->next=NULL;

        if(head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }

    cout<<"printing the whole linked list"<<endl;
    temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        cout<<"node "<<count<<" : "<<temp->data<<" , address="<<temp<<" , next address"<<temp->next<<endl;
        temp=temp->next;
    }
}