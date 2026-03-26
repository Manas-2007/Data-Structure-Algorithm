//Write a program of deleting nodes from the given circular doubly linked list Dynamically on runtime at any given nth position.......
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
//Creating List
void createlist(Node *&head,int size)
{
    Node*ptr=head;
    int value;
    for(int i=0;i<size;i++)
    {
        cout<<"Value of node "<<i+1<<" : ";
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

//Traversing
void show(Node*&head)
{
    Node*ptr=head;
     if(head == NULL)
    {
        cout << "\nList is empty.\n";
        return;
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

//Deleting nodes function
void deletenode(Node*&head,int position)
{
    Node*ptr=head;
    int count=1;
    if(head==NULL)
    {
        cout<<"\nList is already Empty.....\n";
    }
    else
    {
        while(ptr->next!=head)
        {
            if(count==position)
            {
                ptr->next->prev=ptr->prev;
                ptr->prev->next=ptr->next;
                delete ptr;
                break;
            }
            count++;
            ptr=ptr->next;
        }
        if(count==position && ptr->next==head)
        {
           head->prev=ptr->prev;
           ptr->prev->next=head;
            delete ptr;
            return;
        }
    }
    
}

int main()
{
    int size,position;
    Node*head=NULL;
    cout<<"Enter the size of List : ";
    cin>>size;
    createlist(head,size);
    cout<<"\n       Your elements are: \n";
    show(head);
    cout<<"\n       Delete operation working..\n";
    cout<<"\nEnter the position : ";
    cin>>position;
    deletenode(head,position);
    show(head);
    

    return 0;

}