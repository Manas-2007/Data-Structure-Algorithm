//Write a program to create a circular singly linked list dynamically and traverse its elements in forward direction only....
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
    while(ptr->next!=head)
    {
        cout<<ptr->data<<"   ";
        ptr=ptr->next;
    }
    cout<<ptr->data<<" ";
}

int main()
{
    int size;
    Node *head=NULL,*ptr;
    cout<<"Enter the size of List : ";
    cin>>size;
    createList(head,size);
    cout<<"     Traversing of Circular Linked List\n";
    traverse(head);
    return 0;
}