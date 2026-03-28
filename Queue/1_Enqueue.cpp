//Write a program to insert the data into the queue using array.....
#include<iostream>
using namespace std;
class Queue{
    int *array;
    int size;
    int front;
    int rear;
    public:
    Queue(int size)
    {
        front=-1;
        rear=-1;
        this->size=size;
        array=new int[size];
    }

    //Insertion of elements
    void Enqueue()
    {
        int data;
        cout<<"\nEnter the data : ";
        cin>>data;
        if(rear==size-1)
        {
            cout<<"\nQueue Overflow....\n";
        }
        else if(rear==-1)
        {
            front++;
            rear++;
            array[rear]=data;
        }
        else
        {
            rear++;
            array[rear]=data;
        }
    }

    //Deletion of Elements
    void Dequeue()
    {
        if(front==-1)
        {
            cout<<"\nStack Underflow\n";
        }
        else if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            int previous=array[front];
            front++;
            cout<<"\nRemoved "<<previous<<" from the Queue\n";
        }
    }


    //Display data
    void Display()
    {
        for(int i=0;i<=rear;i++)
        {
            cout<<array[i]<<"  ";
        }
        cout<<"\n";
    }
};

int main()
{
    int size,choice;
    cout<<"Enter the size of queue : ";
    cin>>size;
    Queue s(size);
    cout<<"\n           Welcome to Queue Market\n";
    do{
        cout<<"1.Enqueue Operation\n2.Dequeue Operation\n3.Display Data\n4.Exit\n";
        cout<<"Select Your Service (1-4): ";
        cin>>choice;
        switch(choice)
        {
            case 1:
            s.Enqueue();
            break;

            case 2:
            s.Dequeue();
            break;

            case 3:
            s.Display();
            break;

        }
    }while(choice!=4);

    return 0;

}