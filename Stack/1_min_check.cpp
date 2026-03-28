//Write a program to find the smallest element from the stack with time complexity O(n).....
#include<iostream>
using namespace std;
class Stack{
    int *array;
    int size;
    int top;
    public:
    Stack(int capacity)
    {
        size=capacity;
        top=-1;
        array=new int[size];
    }

    void push(int data)
    {
        if(top==size-1)
        {
            cout<<"\nStack Overflow.....\n";
        }
        else
        {
            top++;
            array[top]=data;
         }
    }

    void pop()
    {
        if(top==-1)
        {
            cout<<"\nStack Underflow.....\n";
        }
        else
        {
            top--;
        }
    }

    int min()
    {
        int min=array[top];
        int localtop=top;
        for(int i=localtop;i>=0;i--)
        {
            if(min>=array[i])
            {
                min=array[i];
            }
        }
        return min;
    }

    void display()
    {
        for(int i=0;i<=top;i++)
        {
            cout<<array[i]<<"  ";
        }
    }
};

int main()
{
    int size;
    cout<<"Enter the size of the stack : ";
    cin>>size;
    Stack s(size);
    s.push(25);
    s.push(56);
    s.push(34);
    s.push(100);
    s.push(67);
    s.push(6);
    s.display();
    cout<<"\nThe min element in the stack is : "<<s.min()<<endl;
}

