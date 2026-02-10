//You are given an array of fixed size, you have to create the linked list (singly) and insert each array element on by one (in the beginning) of you linked list
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    //constructor
    Node(int value)
    {
        data=value;
        next=NULL;
    }
};
int main()
{
    int arr[5]={100,200,300,400,500};               //Given array of integers
    Node *head=NULL,*ptr;
    ptr=head;
    for(int i=4;i>=0;i--)
    {
        if(head==NULL)
        {
            Node *newnode=new Node(arr[i]);
            newnode->next=NULL;
            head=newnode;
            ptr=head;

        }
        else
        {
            Node *newnode=new Node(arr[i]);
            newnode->next=ptr;
            head=newnode;
            ptr=head;
        }
    }

    //Traversing of the array
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<"  ";
        ptr=ptr->next;
    }

}