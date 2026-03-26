//Write a program to delete nth node from the SCLL.....
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
void createList(Node*&head,int size)
{
    Node*ptr=head;
    int value;
    for(int i=0;i<size;i++)
    {
        cout<<"Value at Node "<<i+1<<" : ";
        cin>>value;
        Node*newnode=new Node(value);
        if(head==NULL)
        {
            head=newnode;
            newnode->next=head;
            ptr=head;
        }
        else
        {
            ptr->next=newnode;
            newnode->next=head;
            ptr=ptr->next;
        }
    }
}

void showlist(Node*&head)
{
    Node*ptr=head;
    if(head==NULL)
    {
        cout<<"\nList is empty....\n";
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

void deletenode(Node*&head,int position)
{
    Node*ptr1=head;
    Node *ptr2=NULL;
    int count=1;
    if(head==NULL)
    {
        cout<<"\nList is already empty.........\n";
    }
    else if(position==1)
    {
       ptr2=head;
       while(ptr1->next!=head)
       {
        ptr1=ptr1->next;
       }
       ptr1->next=ptr2->next;
       head=ptr2->next;
       delete ptr2;
       return;
    }
    else
    {
        
        while(ptr1->next!=head)
        {
            if(count==position)
            {
                ptr2->next=ptr1->next;
                delete ptr1;
                break;
            }
            count++;
            ptr2=ptr1;
            ptr1=ptr1->next;
        }
        //If last node need to delete
        if(count==position && ptr1->next==head)
        {
            ptr2->next=ptr1->next;
            delete ptr1;
            return;
        }
      
    }
}


int main()
{
    Node*head=NULL,*ptr;
    int size,position;
    cout<<"Enter the size of Linked List : ";
    cin>>size;
    createList(head,size);
    cout<<"\n           YOUR LIST SHOWN BELOW\n";
    showlist(head);
    cout<<"\n           LIST AFTER DELETION OPERATION\n";
    cout<<"\nEnter the Node number than want to delete : ";
    cin>>position;
    deletenode(head,position);
    showlist(head);
    return 0;
}