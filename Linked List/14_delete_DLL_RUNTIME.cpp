//Write a program to delete a particular node from the doubly linked list provided that the data will be provided on the runtime by the user  (Also traverse the list in Reverse sequence)......
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
 //Dynamic Creation of DLL
    void  createList(Node *&head,int size)
    {
        int data;
        Node *newnode;
        Node*ptr=head;
        for(int i=0;i<size;i++)
        {
            cout<<"Data at Node "<<i+1<<" : ";
            cin>>data;
            newnode=new Node(data);
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

    //Traversal of DLL
    void Traversal(Node *head)
    {
         Node *ptr=head;
        if(head==NULL)
            {
                cout<<"\nLIST IS EMPTY\n";
            }
        else
          {
       
                while(ptr!=NULL)
                {
                    cout<<ptr->data<<"   ";
                    ptr=ptr->next;
                }
           }
    }

    //Deletion at beginning
    void beginDelete(Node *&head)
    {
        Node *ptr=head;
        if(head==NULL)
        {
            cout<<"List is already empty....\n";
        }
        else
        {
            head=ptr->next;
            delete ptr;
        }
    }

    //Deletion at Ending
    void endDelete(Node *&head)
    {
        Node *ptr=head;
       if(head==NULL)
        {
            cout<<"\nList is already Empty! No element available to delete\n";
        }
         else if(ptr->next==NULL)
        {
            head=NULL;
            delete ptr;
        }        
        else 
        {
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            ptr->prev->next=NULL;
            delete ptr;
        }
    }

    //Delete after Nth Node
    void positionDelete(Node *&head,int position)
    {
         Node *ptr=head;
         int count=1;
         if(head==NULL)
         {
            cout<<"\nList is already Empty! No element available to delete.....\n";
         }
         else if(ptr->next==NULL)
         {
            head=NULL;
            delete ptr;
         }
         else if(position==1)
         {
            head=ptr->next;
            delete ptr;
         }
         else
         {
            while(ptr!=NULL)
            {
            
                if(count==position && ptr->next!=NULL)
                {
                   
                     ptr->prev->next=ptr->next;
                     ptr->next->prev=ptr->prev;
                     delete ptr;
                     break;
                   
                }
                else if(count==position && ptr->next==NULL)
                {
                    ptr->prev->next=NULL;
                    delete ptr;
                    break;
                }
                
                 count++;
                ptr=ptr->next;
            }            
         }
    }

    //Reverse a linked list
    void Reverse(Node *&head)
    {
        Node *ptr=head;
        //Reaching to the last node
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        //Traversing back to front via previous pointer
        while(ptr!=NULL)
        {
            cout<<ptr->data<<"   ";
            ptr=ptr->prev;
        }
    }



int main()
{
    Node *head=NULL,*ptr;
    int size,position;
    cout<<"Enter the size of Linked List : ";
    cin>>size;
    createList(head,size);
    cout<<"\n           YOUR DATA SHOWN BELOW\n";
    Traversal(head);
    cout<<"\n           Reversing the Linked List\n";
    Reverse(head);
    return 0;
}