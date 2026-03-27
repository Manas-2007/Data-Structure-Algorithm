#include<iostream>
using namespace std;
class Stack{
    int *array;
    int size;
    int top;
    public:
    //Constructor
    Stack(int capacity)
    {
        size=capacity;
        top=-1;
        array=new int[size];
    }

    //Push Function
    void push(int data)
    {
        if(top==size-1)
        {
            cout<<"\nStack Overflow.......\n";
        }
        else
        {
            top++;
            array[top]=data;
            cout<<"Inserted "<<data<<" into Stack\n";
        }
    }

    //Pop Function
    void pop()
    {
        if(top==-1)
        {
            cout<<"\nStack Underflow..........\n";
        }
        else
        {
            int value=array[top];
            top--;
            cout<<"\nRemoved "<<value<<" from Stack\n";
        }
    }

    //Peek/Top function
    void peek()
    {
        if(top==-1)
        {
            cout<<"\nStack is Empty....\n";
        }
        else
        {
            cout<<"Top Element in the Stack : "<<array[top]<<endl;
        }
    }

    //Display Stack Data
    void showlist()
    {
        
        for(int i=0;i<=top;i++)
        {
            cout<<array[i]<<"  ";
        }
        cout<<"\nTotal Elements : "<<top+1<<endl;
    }

    ~Stack()
    {
        delete []array;
    }
};
int main()
{
    int size;
    cout<<"Enter the size of the Stack : ";
    cin>>size;
    Stack s(size);
    s.push(45);
    s.push(-5);
    s.push(-1);
    s.push(-2);
    s.showlist();
    s.pop();
    s.pop();
    s.push(100);
    s.showlist();
    s.peek();

    return 0;
}