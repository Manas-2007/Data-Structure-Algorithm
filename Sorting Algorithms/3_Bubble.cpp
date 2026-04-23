#include<iostream>
using namespace std;
//Bubble Sort Function
void BubbleSort(int *array,int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}
int main()
{
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    int *data=new int[size];
    cout<<"Enter your data :\n";
    for(int i=0;i<size;i++)
    {
        cin>>data[i];
    }
    BubbleSort(data,size);
    for(int i=0;i<size;i++)
    {
        cout<<data[i]<<" ";
    }
    return 0;    
}