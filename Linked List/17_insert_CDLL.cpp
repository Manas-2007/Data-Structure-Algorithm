//Write a program of circular doubly linked list and implement insertion operation just after the nth node at runtime of the program..........
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node*prev;
    Node(int value)
    {
        next=NULL;
        prev=NULL;
        data=value;
    }
};
void createlist(Node*&head,int size)
{
    Node*ptr=head;
    int value;
    for(int i=0;i<size;i++)
    {
        cout<<"Value of Node "<<i+1<<" : ";
        cin>>value;
        Node*newnode=new Node(value);
        if(head==NULL)
        {
            head=newnode;
            newnode->next=head;
            newnode->prev=head;
            ptr=head;
        }
        else
        {
            ptr->next=newnode;
            newnode->prev=ptr;
            newnode->next=head;
            ptr=ptr->next;
        }
    }
}

void show(Node*head)
{
    Node*ptr=head;
    if(head==NULL)
    {
        cout<<"List is EMPTY....\n";
    }
    else
    {
        while(ptr->next!=head)
        {
            cout<<ptr->data<<"  ";
            ptr=ptr->next;
        }
        cout<<ptr->data<<"  ";
    }
}

void reverse(Node*head)
{
    Node*ptr=head;
    if(head==NULL)
    {
        cout<<"List is Empty....\n";
    }
    else
    {
       while(ptr->next!=head)
       {
        ptr=ptr->next;
       }
    }
    while(ptr!=head)
    {
        cout<<ptr->data<<"  ";
        ptr=ptr->prev;
    }
    cout<<ptr->data<<" " ;
}

void insertnode(Node*&head,int position)
{
    Node*ptr=head;
    int value,count=1;
    cout<<"Enter thr value of new node : ";
    cin>>value;
    Node*newnode=new Node(value);
    if(head==NULL)
    {
        head=newnode;
        newnode->next=head;
        newnode->prev=head;
        ptr=head;
    }
    else{
        while(ptr->next!=head)
        {
            if(count==position)
            {
                newnode->next=ptr->next;
                ptr->next->prev=newnode;
                ptr->next=newnode;
                newnode->prev=ptr;
                break;
            }
            count++;
            ptr=ptr->next;
        }
        if(count==position && ptr->next==head)
        {
            newnode->next=ptr->next;
            ptr->next->prev=newnode;
            newnode->prev=ptr;
            ptr->next=newnode;
            return ;
        }
    }
}

int main()
{
    Node *head=NULL;
    Node*ptr;
    int size,position;
    cout<<"Enter the size of List : ";
    cin>>size;
    createlist(head,size);
    cout<<"\n       YOUR LISTED ELEMENTS SHOWN BELOW\n";
    show(head);
    cout<<"\n       Insertion of New Node in List\n";
    cout<<"\nEnter the position of new node : ";
    cin>>position;
    insertnode(head,position);
    show(head);

    return 0;    
}