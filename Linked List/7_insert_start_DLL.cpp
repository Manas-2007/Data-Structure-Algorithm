#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *prev;
    Node *next;
    //Constructor
    Node(int data)
    {
        this->data=data;
        prev=NULL;
        next=NULL;
    }
};
int main()
{
    Node *ptr,*head=NULL,*n1,*n2,*n3,*n4,*n5;
    int value;
    n1=new Node(100);
    n2=new Node(200);
    n3=new Node(300);
    n4=new Node(400);
    n5=new Node(500);

    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=NULL;

    n5->prev=n4;
    n4->prev=n3;
    n3->prev=n2;
    n2->prev=n1;
    n1->prev=NULL;

    head=n1;
    ptr=head;

    //Traversing
    cout<<"         ORIGINAL LINKED LIST\n";
    while(ptr!=NULL)
    {
        cout<<ptr->data<<"   ";
        ptr=ptr->next;
    }

    //Insertion at the start
    cout<<"\nEnter the value of NEW node : ";
    cin>>value;
    ptr=head;
    if(head==NULL)
    {
        Node *x=new Node(value);
        x->next=NULL;
        x->prev=NULL;
        head=x;
    }
    else
    {
        Node *x=new Node(value);
        x->next=head;
        ptr->prev=x;
        head=x;
    }

    ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<"   ";
        ptr=ptr->next;
    }
    
    return 0;
}