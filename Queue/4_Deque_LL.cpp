#include<iostream>
 #include<cstdlib>
  using namespace std;
  
  //clear screen 
  void Clear()
   { 
        cout<<"\nPress Enter to Continue.......";
        cin.ignore(); 
        cin.get(); 
        system("cls"); 
  }


class Node{
    public:
    int data;
    Node*prev,*next;
    Node(int data)
    {
        this->data=data;
        prev=NULL;
        next=NULL;
    }
};

class Deque{
    Node*front,*rear;
    public:
    Deque()
    {
        front=rear=NULL;
    }

    //Push Front
    void push_front()
    {
        int data;
        cout<<"\nEnter the data : ";
        cin>>data;
        Node*newnode=new Node(data);
        if(front==NULL)
        {
            front=rear=newnode;
        }
        else
        {
            front->prev=newnode;
            newnode->next=front;
            front=front->prev;
        }
    }

    //Push Back
    void push_back()
    {
        int data;
        cout<<"\nEnter the data : ";
        cin>>data;
        Node*newnode=new Node(data);
        if(front==NULL)
        {
            front=rear=newnode;
        }
        else
        {
            rear->next=newnode;
            newnode->prev=rear;
            rear=rear->next;
        }
    }

    //Pop Front
    void pop_front()
    {
        Node*temp=front;
        if(front->next==NULL)
        {
            front=NULL;
            rear=NULL;
            delete temp;
        }
        else 
        {
            cout<<"\nRemoved Node with data "<<temp->data<<"\n";
            front->next->prev=NULL;
            front=front->next;
            delete temp;
        }
    }

    //Pop back
    void pop_back()
    {
         Node*temp=rear;
        if(front->next==NULL)
        {
            front=NULL;
            rear=NULL;
            delete temp;
        }
        else
        {
            cout<<"\nRemoved Node with data "<<temp->data<<"\n";
            rear->prev->next=NULL;
            rear=rear->prev;
            delete temp;
        }
    }

    //Display data of the deque
    void show()
    {
        Node*temp=front;
        if(temp==NULL)
        {
            cout<<"\nList is Empty....\n";
        }
        else
        {
            while(temp!=NULL)
            {
                cout<<temp->data<<"  ";
                temp=temp->next;
            }

        }
    }
};

int main()
{
    
    Deque x;
     int choice; 
     do { cout << "\n--- Queue using Linked List ---\n"; 
        cout << "1. Push Front\n2. Push Back\n3. Pop Front\n4. Pop Back\n5.Display\n6.Exit";
         cout << "\nEnter choice: "; 
        cin >> choice; switch (choice)
         { 
            case 1: 
            x.push_front();
           Clear(); 
           break;

           case 2: 
           x.push_back(); 
           Clear(); 
           break;
           
           case 3: 
           x.pop_front(); 
           Clear(); 
           break;

           case 4:
           x.pop_back();
           Clear();
           break;

           case 5:
           x.show();
           Clear();
           break;
           
           case 6:
         cout<<"\nExiting.........";
          exit(0);
           break; 
           
           default : 
           cout<<"\nInvalid Choice! Try again.....\n"; 
        } 
    } while (true);
    
    
    return 0;
}