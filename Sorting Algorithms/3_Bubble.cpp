#include<iostream>
using namespace std;

void Bubble_Sort(int *array,int size)
{
    bool isSwap=false;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                isSwap=true;
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }

        if(!isSwap)
        {
            cout<<"\n========ALREADY SORTED ARRAY============\n";
            break;
        }
    }
}

int main()
{
    
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;

    int *data=new int[size];
    cout<<"Enter "<<size<<" elements into array : \n";
    for(int i=0;i<size;i++)
    {
        cout<<"Data "<<i+1<<" : ";
        cin>>data[i];
    }
    cout<<"\n===========AFTER SORTING===============\n";
    Bubble_Sort(data,size);
    for(int i=0;i<size;i++)
    {
        cout<<data[i]<<" ";
    }

    return 0;
}