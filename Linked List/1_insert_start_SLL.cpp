//Write a program to insert a node at the beginning of the list

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

        //Insertion conditions
        if(head==NULL)                              //When list is empty
        {
            Node*n1=new Node(10);
            head=n1;
            ptr=head;
        }
        else
        {
            Node *newnode=new Node(50);
            newnode->next=ptr;
            head=newnode;
        }


        //Traversing
        cout<<"\n           AFTER INSERTION                 \n";
        ptr=head;
        while(ptr!=NULL)
        {
            cout<<ptr->data<<"  ";
            ptr=ptr->next;
        }
        return 0;
}

      