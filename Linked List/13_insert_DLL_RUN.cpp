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
void CreateList(int size,Node *&head,Node*&ptr)
{
    ptr=head;
    int value;
    cout<<"Enter the size of Linked List : ";
    cin>>size;
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
void Traversal(Node *&head,Node *&ptr)
{
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<"  ";
        ptr=ptr->next;
    }
}

int main()
{
    Node *head=NULL,*ptr;
    CreateList(5,head,ptr);
    cout<<"\n       YOUR LISTED DATA\n";
    Traversal(head,ptr);
    return 0;
}
