//Write a program to take input from the user on runtime of the progrm via singly linked list.

#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value)
    {
        data=value;
        next=NULL;
    }
};
int main()
{
    int size,value;
    Node *head=NULL,*ptr;
    cout<<"Enter the size of the List : ";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cout<<"DATA OAT NODE "<<i+1<<" : ";
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

    //Traversing
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<"  ";
        ptr=ptr->next;
    }
    return 0;
}