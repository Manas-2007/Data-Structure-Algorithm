//Write a program to insert a node at last of the linked list
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //Constructor 
    Node(int value)
    {
        data=value;
        next=NULL;
    }
};
int main()
{
    Node *head=NULL,*ptr;
    Node *a=new Node(10);
    Node *b=new Node(20);
    Node *c=new Node(30);
    Node *d=new Node(40);

    //Linking of Nodes
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=NULL;
    head=a;
    ptr=head;

    cout<<"         ORIGINAL LINKED LIST            \n";
    while(ptr!=NULL)
        {
            cout<<ptr->data<<"  ";
            ptr=ptr->next;
        }


        ptr=head;           //Reset


    //Insertion at END condition
    while(ptr!=NULL)
    {
        if(ptr->next==NULL)
        {
            Node *newnode=new Node(100);
            newnode->next=NULL;
            ptr->next=newnode;
            break;
        }
        ptr=ptr->next;
    }

    ptr=head;                   //Reset
    cout<<"\n               AFTER INSERTION OF LAST NODE               \n";
     while(ptr!=NULL)
        {
            cout<<ptr->data<<"  ";
            ptr=ptr->next;
        }

}