//Write a program to create a double linked list dynamically to insert the data by the user on runtime.....
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *prev;
    Node *next;
    Node(int value)
    {
        data=value;
        next=NULL;
        prev=NULL;
    }
};
int main()
{
    int size,value;
    Node *head=NULL,*ptr;
    cout<<"Enter the size of Linked List : ";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cout<<"Data at Node "<<i+1<<" : ";
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

    //Traversing of Linked List
    cout<<"\n       YOUR DATA LIST SHOWN BELOW:\n";
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<"   ";
        ptr=ptr->next;
    }

    return 0;
}