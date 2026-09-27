#include<iostream>
using namespace std;

void Selection_Sort(int *array,int size)
{
    for(int i=0;i<size;i++)
    {
        int minIdx=i;
        for(int j=i+1;j<size;j++)
        {
            if(array[j]<array[minIdx])
            {
                minIdx=j;
            }
        }
        int temp=array[i];
        array[i]=array[minIdx];
        array[minIdx]=temp;
    }
}

int main()
{
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;

    int *data=new int[size];
    cout<<"Enter "<<size<<" elements in array : \n";
    for(int i=0;i<size;i++)
    {
        cout<<"Data "<<i+1<<" : ";
        cin>>data[i];
    }
    cout<<"\n============AFTER SORTING===============\n";
    Selection_Sort(data,size);
    for(int i=0;i<size;i++)
    {
        cout<<data[i]<<" ";
    }

    return 0;
}