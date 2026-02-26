#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    //Constructor
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
int main()
{
    Node *n1,*n2,*n3,*n4,*n5,*head=NULL,*ptr1,*ptr2;
    int count=1,position;
    n1=new Node(100);
    n2=new Node(200);
    n3=new Node(300);
    n4=new Node(400);
    n5=new Node(500);

    head=n1;
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=NULL;

    //Traversing
     ptr1=head;
     cout<<"            ORIGINAL LINKED LIST\n";
     while(ptr1!=NULL)
     {
        cout<<ptr1->data<<"   ";
        ptr1=ptr1->next;
     }

     cout<<"\nEnter the position that you want to delete the Node : ";
     cin>>position;
     ptr1=head;
     //Deleting the node (mid)
     while(ptr1!=NULL)
     {
        if(position==count)
        {
            ptr2->next=ptr1->next;
            delete ptr1;
            break;
        }
        ptr2=ptr1;
        count++;
        ptr1=ptr1->next;
     }

     cout<<"\n          AFTER DELETION OF MIDDLE NODE\n";

     ptr2=head;
     while(ptr2!=NULL)
     {
        cout<<ptr2->data<<"   ";
        ptr2=ptr2->next;
     }
return 0;
}