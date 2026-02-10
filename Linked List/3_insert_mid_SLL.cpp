//Write a program to insert a node after a given node in linked list
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

        ptr=head;                       //Reset
        
        //Inserting a node
        int position,value,count=1;
        bool isfound=0;
        cout<<"\nEnter value of NEW Node : ";
        cin>>value;
        cout<<"Enter the position in List : ";
        cin>>position;
        while(ptr!=NULL)
        {
            if(count==position)
            {
                isfound=1;
                Node *newnode=new Node(value);
                newnode->next=ptr->next;
                ptr->next=newnode;
                break;
            }
            ptr=ptr->next;
            count++;
        }

        if(isfound==1)
        {
            cout<<"\n.......DATA SUCCESSFULLY INSERTED IN THE LIST.......\n\n";
        }
        else
        {
            cout<<"\n.......DATA NOT AVAILABLE IN THE LIST AT THAT POSITION..........\n\n";
        }


        ptr=head;           //Reset
        cout<<"\n           AFTER INSERTION             \n";
         while(ptr!=NULL)
        {
            cout<<ptr->data<<"  ";
            ptr=ptr->next;
        }

}