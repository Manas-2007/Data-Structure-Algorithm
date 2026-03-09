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
    cout<<"      ORIGINAL LIST\n";
    do
    {
        cout<<ptr->data<<"   ";
        ptr=ptr->next;

    } while (ptr!=head);  

    int value;
    cout<<"\nEnter the value of new node : ";
    cin>>value;
    
    cout<<"\n       AFTER INSERTION AT FIRST POSITON\n";
    
    Node *x=new Node(value);
    x->next=ptr;
    head=x;

    ptr=head;
     do
    {
        cout<<ptr->data<<"   ";
        ptr=ptr->next;

    } while (ptr!=head);


}