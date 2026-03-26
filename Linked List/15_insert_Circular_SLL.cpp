//Write a program to create a circular singly linked list (also insert) dynamically and traverse its elements in forward direction only....
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int value) 
    {
        data=value;
        next=NULL;
    }
};
//Creating list dynamically
void createList(Node *&head,int size)
{
    Node *ptr=head;
    int value;
    for(int i=0;i<size;i++)
    {
        cout<<"Value at Node "<<i+1<<" : ";
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
            ptr=ptr->next;
        }
    }
    //Connecting last node to first manually
    ptr->next=head;
}

//Traversal
void traverse(Node *&head)
{
    Node *ptr=head;
    if(head==NULL)
    {
        cout<<"List is Empty.....\n";
    }
    else
    {
        while(ptr->next!=head)
        {
            cout<<ptr->data<<"   ";
            ptr=ptr->next;
        }
        cout<<ptr->data<<" ";
    }
}

//Insert at ending
void endinsert(Node *&head)
{
    Node*ptr=head;
    int value;
    cout<<"Enter the value of New Node : ";
    cin>>value;
    Node *newnode=new Node(value);
    if(head==NULL)
    {
        head=newnode;
        newnode->next=head;
        ptr=head;
        return;
    }
    else
    {
        while(ptr->next!=head)
        {
            ptr=ptr->next;
        }
        ptr->next=newnode;
        newnode->next=head;
        ptr=ptr->next;
    }
}

//Insert at Starting
void insertstart(Node *&head)
{
    Node *ptr=head;
    int value;
    cout<<"Enter the value of New Node : ";
    cin>>value;
    Node *newnode=new Node(value);
    if(head==NULL)
    {
        head=newnode;
        newnode->next=head;
        ptr=newnode;
    }
    else
        {
            while(ptr->next!=head)
            {
                ptr=ptr->next;
            }
            newnode->next=head;
            ptr->next=newnode;
            head=newnode;
        }
}

//Insertion at nth position
void insertposition(Node *&head,int position)
{
    Node *ptr=head;
    int count=1,value;
    cout<<"Enter the value of New Node : ";
    cin>>value;
    Node *newnode=new Node(value);
    if(head==NULL)
    {
        head=newnode;
        newnode->next=head;
    }
    else{
        while(ptr->next!=head)
        {
            if(count==position)
            {
                newnode->next=ptr->next;
                ptr->next=newnode;
                break;
            } 
            count++;
            ptr=ptr->next;
        } 
        if(ptr->next==head && count==position)
        {
            newnode->next=ptr->next;
                ptr->next=newnode;
        }

    }
}

int main()
{
    int size,position;
    Node *head=NULL,*ptr;
    cout<<"Enter the size of List : ";
    cin>>size;
    createList(head,size);
    cout<<"     Traversing of Circular Linked List\n";
    traverse(head);
    cout<<"\n       Insertion at ending of the CSLL\n";
    cout<<"Enter the Node Number after you want to Insert New Node : ";
    cin>>position;
   insertposition(head,position);
    traverse(head);
    return 0;
}