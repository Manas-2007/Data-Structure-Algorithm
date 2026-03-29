//Write a program to implement the logic of queue using the linked list data structure......
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

//Node class
class Node{
    public:
    int data;
    Node*next;
    //Constructor
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};

//Queue Class
class Queue{
    Node*front,*rear;
    public:
    Queue()
    {
        front=rear=NULL;
    }

    //Enqueue function
    void push()
    {
        int data;
        cout<<"\nEnter the data : ";
        cin>>data;
        Node*newnode=new Node(data);
        if(front==NULL)
        {
            front=newnode;
            rear=newnode;
        }
        else
        {
            rear->next=newnode;
            rear=rear->next;
        }
    }

    //Dequeue function
    void pop()
    {
        if(front==NULL)
        {
            cout<<"\nQueue Underflow situation.....\n";
        }
        else if(front==rear)
        {
            delete front;
            front=rear=NULL;
        }
        else
        {
            Node*temp=front;
            cout<<"\nRemoved Node with data : "<<temp->data<<"\n";
            front=front->next;
            delete temp;
        }
    }

    //void traversal
    void Display()
    {
        Node*temp=front;
        if(front==NULL)
        {
            cout<<"\nQueue is Empty....\n";
        }
        else
        {
            while (temp!=NULL)
            {
                cout<<temp->data<<"  ";
                temp=temp->next;
            }
        }
    }
};

int main()
{
    Queue x;
    int choice;
    do
    {
        cout << "\n--- Queue using Linked List ---\n";
        cout << "1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) 
        {
            case 1:
            x.push();
            Clear();
            break;

            case 2:
            x.pop();
            Clear();
            break;

            case 3:
            x.Display();
            Clear();
            break;

            case 4:
            cout<<"\nExiting.........";
            exit(0);
            break;

            default :
            cout<<"\nInvalid Choice! Try again.....\n";
            
        }
    } while (true);
 return 0;   
}