//Write a program to implement the concept of the circular queue via array data structure.....
#include<iostream>
#include<cstdlib>
using namespace std;
class Queue{
    int *array;
    int size,front,rear;
    public:    
    //Constructor
    Queue(int capacity)
    {
        size = capacity;
        front=-1;
        rear=-1;
        array=new int[size];
    }

    //Enqueue
    void push()
    {
        int data;
        cout<<"\nEnter the data : ";
        cin>>data;

        if(front==-1)
        {
            front++;
            rear++;
            array[rear]=data;
        }
        else if(front==(rear+1)%size)
        {
            cout<<"\nQueue Overflow......\n";
        }
        else{
            rear++;
            array[rear]=data;
        }
    }

    //Dequeue
    void pop()
    {
        if(front==-1)
        {
            cout<<"\nQueue Underflow...\n";
        }
        else
        { 
            if(rear!=(front+1)%size)
                {
                    int value=array[front];
                    cout<<"\nRemoved "<<value<<" from the Queue\n";
                    front++;
                }
                else
                {
                    front=-1;
                    rear=-1;
                }
        }
    }


    //Display data
    void show()
    {
        for(int i=front;i<=rear;i++)
        {
            cout<<array[i]<<"  ";
        }
        cout<<"\n";
    }
};

int main()
{
    int size,choice;
    cout<<"Enter the size of the Queue : ";
    cin>>size;
    Queue s(size);
    do{
        cout<<"\n           Welcome to Circular Queue Chor Bazaar\n";
        cout<<"1.ENQUEUE \n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n";
        cout<<"Select Your Service (1-4) : ";
        cin>>choice;
        switch(choice)
        {
            case 1:
            s.push();
            break;

            case 2:
            s.pop();
            break;

            case 3:
            s.show();
            break;

            case 4:
            exit(0);
            break;

            default : 
            cout<<"\nINVALID CHOICE NUMBER! TRY AGAIN.......\n";
            break;
        }
    }while(choice);

    return 0;
}