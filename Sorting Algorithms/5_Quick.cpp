#include<iostream>
using namespace std;

int Partition(int arr[],int low,int high)
{
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}

void Quicksort(int arr[],int low,int high){
    if(low<high)
    {
        int pi=Partition(arr,low,high);
        Quicksort(arr,low,pi-1);
        Quicksort(arr,pi+1,high);
    }
}

int main()
{
    int *array,size;
    cout<<"Enter the size of array : ";
    cin>>size;
    array=new int[size];
    cout<<"Enter "<<size<<" elements in the array : \n";
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    cout<<"YOUR ELEMENTS AFTER SORTING ARE :\n";
    Quicksort(array,0,size);
    for(int i=0;i<size;i++)
    {
       cout<<array[i]<<"   ";
    }
    return 0;
}