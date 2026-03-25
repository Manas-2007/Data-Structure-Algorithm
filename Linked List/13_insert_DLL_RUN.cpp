//Write a program to insert a node after nth node at runtime linked list creation...............
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node*prev;
    Node(int value)
    {
        data=value;
        next=NULL;
        prev=NULL;
    }
};
//Creating linked list dynamically
void CreateList(int size,Node *&head)
{
    Node *ptr=head;    
    int value;
    for(int i=0;i<size;i++)
    {
        cout<<"Value of NODE "<<i+1<<" : ";
        cin>>value;
        Node *newnode=new Node(value);
        if(head==NULL)
        {
            head=newnode;
            ptr=head;
        }
        else
        {
            ptr->next=newnode;
            newnode->prev=ptr;
            ptr=ptr->next;
        }
    }
}
//Traversal of Linked List
void Traversal(Node *&head)
{
    Node *ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<"  ";
        ptr=ptr->next;
    }
}

//Insertion of Node after given node
void insertNode(Node *&head,int position)
{
    Node *ptr=head;
    int count=1,value;
    cout<<"Enter the value of New Node : ";
    cin>>value;
    Node *newnode=new Node(value);
    while(ptr!=NULL && position>count)
    {
        count++;
        ptr=ptr->next;
    }
    
    //Checking status of previous node
    if(ptr==NULL)
    {
        cout<<"Invalid position......\n";
        return;

    }
   else if(ptr->next==NULL)                     //Insertion at last node
    {
        newnode->prev=ptr;
        ptr->next=newnode;
    }
    else if(ptr->next!=NULL)
    {
        newnode->next=ptr->next;
        newnode->next->prev=newnode;
        ptr->next=newnode;
        newnode->prev=ptr;
    }
       
}


int main()
{
    Node *head=NULL,*ptr;
    int size,position;
    cout<<"Enter the size of Linked List : ";
    cin>>size;
    CreateList(size,head);
    cout<<"\n       YOUR LISTED DATA\n";
    Traversal(head);
    cout<<"\n   INSERTION OF NODE\n";
    cout<<"Enter the Node after U want to insert : ";
    cin>>position;
    insertNode(head,position);
    Traversal(head);
    return 0;
}
