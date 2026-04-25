#include<iostream>
using namespace std;

//Insertion Sort
void InsertionSort(int *arr,int size)
{
    int curr,prev;
    for(int i=1;i<size;i++)
    {
        curr=arr[i];
        prev=i-1;
        while(prev>=0 && arr[prev]>curr)
        {
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
}
int main()
{
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int *array=new int[size];
    cout<<"Enter data in array :-\n";
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    cout<<"Your Sorted data : ";
    InsertionSort(array,size);
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}