#include<iostream>
using namespace std;

int partition(int *array,int start,int end)
{
    int pivot=array[end];
    int j=start-1;
    for(int i=start;i<end;i++)
    {
        if(array[i]<=pivot)
        {
            j++;
            int temp=array[i];
            array[i]=array[j];
            array[j]=temp;
        }
    }
    int temp=array[j+1];
        array[j+1]=array[end];
        array[end]=temp;
        
        return j+1;
}

void Quick_Sort(int *array,int start,int end)
{
    if(start<end)
    {
        int pi=partition(array,start,end);
        Quick_Sort(array,start,pi-1);
        Quick_Sort(array,pi+1,end);
        
    }
}

int main()
{
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int *data=new int[size];
    cout<<"Enter "<<size<<" elements in the array : \n";
    for(int i=0;i<size;i++)
    {
        cout<<"Data "<<i+1<<" : ";
        cin>>data[i];
    }

    cout<<"\n==============AFTER SORTING=======================\n";
    Quick_Sort(data,0,size-1);
    for(int i=0;i<size;i++)
    {
        cout<<data[i]<<" ";
    }

    return 0;
}