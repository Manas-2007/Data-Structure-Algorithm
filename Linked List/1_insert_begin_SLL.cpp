#include<iostream>
using namespace std;
class Node{
   public:
   int data;
   Node *next;
   Node(int data)
   {
      this->data=data;
      next=NULL;
   }
};

//Traversal of SLL
void Traversal(Node*&head)
{
   Node *ptr=head;
   while(ptr!=NULL)
   {
      cout<<ptr->data<<" ";
      ptr=ptr->next;
   }
}

//Dynamic Creation of SLL
void CreateList(Node*&head,int size)
{
   int data;
   Node*ptr=head;
   for(int i=1;i<=size;i++)
   {
      cout<<"Enter data of Node "<<i<<" : ";
      cin>>data;
      Node*newnode=new Node(data);
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
}

//Insertion at any Position
void InsertNode(Node*&head,int pos,int data)
{
   int count=1;
   bool flag=false;
   Node*ptr=head;
   while(ptr!=NULL)
   {
      if(pos==count)
      {
         Node*newnode=new Node(data);
         newnode->next=ptr->next;
         ptr->next=newnode;
         flag=true;
         break;
      }
      count++;
      ptr=ptr->next;
   }

   if(flag)
   {
      cout<<"Node Inserted Succesfully......\n";
   }
   else
   {
      cout<<"Invalid Position..!\n";
   }

}

//Insert at Beginning
void BeginInsert(Node*&head,int value)
{
   Node*ptr=head;
   Node*newnode=new Node(value);
   if(head==NULL)
   {
      head=newnode;
      ptr=head;
   }
   else
   {
      newnode->next=head;
      head=newnode;
      ptr=head;
   }
}

//Insert at End
void EndInsert(Node*&head,int value)
{
   Node*ptr=head;
   Node*newnode=new Node(value);
   if(head==NULL)
   {
      head=newnode;
      ptr=head;
   }
   else
   {
      while(ptr->next!=NULL)
      {
         ptr=ptr->next;
      }
      ptr->next=newnode;
   }
}

//Length of SLL
void LengthList(Node*&head)
{
   int count=0;
   Node*ptr=head;
   while(ptr!=NULL)
   {
      ptr=ptr->next;
   }
   cout<<"\nTotal Nodes : "<<count<<endl;
}
int main()
{
   Node *head=NULL;
   int size,pos,data;
   cout<<"Total Number of Nodes : ";
   cin>>size;
   CreateList(head,size);
   cout<<"Your List shown below : \n";
   Traversal(head);
   
   //Insertion test
   cout<<"\nEnter the Data : ";
   cin>>data;
   EndInsert(head,data);
   Traversal(head);
   LengthList(head);
   return 0;
}
