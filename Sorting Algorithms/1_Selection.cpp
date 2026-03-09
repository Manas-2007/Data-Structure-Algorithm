#include<iostream>
using namespace std;

//Swap two numbers (Passed by reference - Mandatory)
void swap(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}

//Selection Sort Algorithm
void selectionsort(int array[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(array[i]>array[j])
            {
                swap(array[i],array[j]);
            }
        }
    }
}

int main()
{
    int *array,size;
    cout<<"Enter the size of array : ";
    cin>>size;
    array=new int[size];
    cout<<"Enter "<<size<<" elements in the array\n";
    for(int i=0;i<size;i++)
     {
         cin>>array[i];
     }
     cout<<"\n\nData after sorting :\n";
     selectionsort(array,size);

     for(int i=0;i<size;i++)
     {
        cout<<array[i]<<"   ";
     }

     return 0;
}