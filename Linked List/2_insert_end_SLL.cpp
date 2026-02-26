#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    //Constructor
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
int main()
{
    Node *n1,*n2,*n3,*n4,*n5,*head=NULL,*ptr;
    n1=new Node(100);
    n2=new Node(200);
    n3=new Node(300);
    n4=new Node(400);
    n5=new Node(500);

    head=n1;
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=NULL;

    //Traversing
     ptr=head;
     cout<<"            ORIGINAL LINKED LIST\n";
     while(ptr!=NULL)
     {
        cout<<ptr->data<<"   ";
        ptr=ptr->next;
     }


     ptr=head;
     int value;
     cout<<"\n\nENTER THE VALUE OF NEW NODE : ";
     cin>>value;

     //Insertion of Node
     if(head==NULL)
     {
        Node *x=new Node(value);
        head=x;
        x->next=NULL;
     }
     else
     {
        while(ptr->next!=NULL)
        {
           ptr=ptr->next;
        }
        Node *x=new Node(value);
            x->next=NULL;
            ptr->next=x;
     }

     cout<<"\n        AFTER INSERTION OF NEW NODE (END)\n";
     ptr=head;
     while(ptr!=NULL)
     {
        cout<<ptr->data<<"  ";
        ptr=ptr->next;
     }

     return 0;
}