#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    //constructor
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
int main()
{
    Node *head=NULL,*ptr,*n1,*n2,*n3;
    n1=new Node(100);
    n2=new Node(200);
    n3=new Node(300);
   
    
    head=n1;
    n1->next=n2;
    n2->next=n3;
    n3->next=head;

    ptr=head;
     do
   {
        cout<<ptr->data<<"   ";
        ptr=ptr->next;
   } while(ptr!=head);

   int position,value,count=1;
   cout<<"\nEnter the position of new node : ";
   cin>>position;
   cout<<"Enter the value of new node :" ;
   cin>>value;

   cout<<"\n        AFTER INSERTION UPDATED LIST IS\n";
   ptr=head;
   do
   {
       if(position==count)
       {
        Node *x=new Node(value);
        x->next=ptr->next;
        ptr->next=x;   
        break;
       }
       count++;
       ptr=ptr->next;
   }while(ptr!=NULL);

   ptr=head;
   do
   {
    cout<<ptr->data<<"   ";
    ptr=ptr->next;
   }while(ptr!=head);


return 0;
    
}