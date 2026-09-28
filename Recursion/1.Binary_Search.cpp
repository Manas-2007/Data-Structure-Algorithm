#include<iostream>
using namespace std;

int Binary_Search(int *array,int start,int end,int target)
{
    if(start<=end)
    {
        int mid=start+(end-start)/2;
        if(array[mid]==target)
        {
            return mid;
        }
        if(array[mid]>target)
        {
            return Binary_Search(array,start,mid-1,target);
        }
        else
        {
            return Binary_Search(array,mid+1,end,target);
        }
    }
    else
    {
        return -1;
    }
}

int main()
{
    int size,target;
    cout<<"Enter the size of array : ";
    cin>>size;
    int*data=new int[size];
    for(int i=0;i<size;i++)
    {
        cin>>data[i];
    }
    cout<<"Your elements are : \n";
    for(int i=0;i<size;i++)
    {
        cout<<data[i]<<" ";
    }
    cout<<"\nEnter the Target : ";
    cin>>target;
    int result=Binary_Search(data,0,size-1,target);
    if(result!=-1)
    {
        cout<<"The element is available at : "<<result<<" index "<<endl;
    }
    else
    {
        cout<<"DATA NOT FOUND IN THE ARRAY....";
    }
    delete[] data;
    return 0;
}