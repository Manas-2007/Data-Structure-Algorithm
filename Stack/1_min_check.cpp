//Write a program to find the smallest element in the stack having time complexity O(1)...............
#include<iostream>
#include<climits>
using namespace std;
class Stack{
    public:
    int *array;
    int size;
    int top;
    Stack(int capacity)
    {
        size=capacity;
        top=-1;
        array=new int[size];
    }

    //Original Stack
    void mainpush(int data)
    {
        if(top==size-1)
        {
            cout<<"\nStack Overflow...\n";
        }
        else
        {
            top++;
            array[top]=data;
        }
    }

    //minpush
    void minpush(int data)
    {
        
            if(top==-1)
            {
                top++;
                array[top]=data;
            }
            else
        {
                top++;
                if(data<array[top-1])
                {
                    array[top]=data;
                }
                else
                {
                    array[top]=array[top-1];
                }
        }
    }
    
    //Min value
    void min()
    {
        cout<<"The min value in the Stack is "<<array[top]<<"\n";
    }
   
    //Display
    void display()
    {
        for(int i=0;i<=top;i++)
        {
            cout<<array[i]<<"   ";
        }
        cout<<"\n";
    }
    
};
//pop logic
    void pop(Stack &a,Stack &b)
    {
        a.top--;
        b.top--;
    }

    //size of the stack
    void Size(Stack &a,Stack &b)
    {
        cout<<"\nSIZE OF STACK 1 : "<<a.top+1;
        cout<<"\nSIZE OF STACK 2 : "<<b.top+1<<"\n";
    }

int main()
{
    int size;
    cout<<"Enter the size of the Stack : ";
    cin>>size;
    Stack s1(size),s2(size);
    s1.mainpush(56);
    s2.minpush(56);

    s1.mainpush(67);
    s2.minpush(67);

    s1.mainpush(7);
    s2.minpush(7);

    s1.mainpush(100);
    s2.minpush(100);

    s1.mainpush(89);
    s2.minpush(89);

    Size(s1,s2);
    pop(s1,s2);
    Size(s1,s2);

      s1.display();
      s2.min();
      Size(s1,s2);
      
    return 0;

}