//Write a program to find the greatest element in the stack (with time complexity of O(1)).......
#include<iostream>
using namespace std;
class Stack{
    int *array;
    int size;
    int top;
    public:
    //Constructor
    Stack(int capacity){
        size=capacity;
        top=-1;
        array=new int[size];
    }
    //Push logic
    void push(int value)
    {
        if(top==size-1)
        {
            cout<<"\nStack is Overflow\n";
        }
        else{
            top++;
            array[top]=value;
        }
    }

    //Pop Logic
    void pop()
    {
        if(top==-1)
        {
            cout<<"\nStack is Underflow\n";
        }
        else
        {
            top--;
        }
    }

    //max Logic
    void MaxValue()
    {
        cout<<"\nThe Maximum value in the Stack is "<<array[top]<<"\n";
    }

    //Max Logic
    void maxPush(int data)
    {
        if(top==size-1)
        {
            cout<<"Stack is overflow\n";
        }
        else if(top==-1)
        {
            top++;
            array[top]=data;
        }
        else
        {
            top++;
            if(data>array[top-1])
            {
                array[top]=data;
            }
            else
            {
                array[top]=array[top-1];
            }
        }
    }

    //Display data
    void Show()
    {
        for(int i=0;i<=top;i++)
        {
            cout<<array[i]<<"  ";
        }
        cout<<"\n";
    }
};

int main()
{
    int size;
    cout<<"Enter the size of the Stack : ";
    cin>>size;
    Stack s1(size),s2(size);
    s1.push(98);
    s2.maxPush(98);

    s1.push(78);
    s2.maxPush(78);

    s1.push(100);
    s2.maxPush(100);

    s1.push(56);
    s2.maxPush(56);

    s1.push(99);
    s2.maxPush(99);

    s1.Show();
    s2.MaxValue();
    
    return 0;

}