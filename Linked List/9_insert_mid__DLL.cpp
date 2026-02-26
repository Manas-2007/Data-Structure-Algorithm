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
    int position,count=1;
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

    ptr=head;

    //Inserting a node
    cout<<"\nEnter the position : ";
    cin>>position;
    cout<<"Enter the NEW node value : ";
    cin>>value;

    while(ptr!=NULL)
    {
        if(position==count)
        {
            Node *x=new Node(value);
            x->next=ptr->next;
            ptr->next->prev=x;
            x->prev=ptr;
            ptr->next=x;
        }
        count++;
        ptr=ptr->next;
    }

    
    ptr=head;
    cout<<"\n       AFTER INSERTION OF NODE AT MID OF THE LINKED LIST\n";
    while(ptr!=NULL)
    {
        cout<<ptr->data<<"   ";
        ptr=ptr->next;
    }

    return 0;



}