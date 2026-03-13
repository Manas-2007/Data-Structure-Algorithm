#include<iostream>
using namespace std;

//Bubble sort algorithm
void bubble(int a[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main()
{
    int *arr,size;
    cout<<"Enter the size of array :";
    cin>>size;
    arr=new int[size];
    cout<<"Enter "<<size<<" elements in array :\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    } 
    cout<<"Your Elements after sorting :"<<"\n";
    bubble(arr,size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"   ";
    }

    delete[] arr;
    return 0;
}