#include<iostream>
using namespace std;

void Insertion_Sort(int *array,int size)
{
    for(int i=1;i<size;i++)
    {
        int key=i;
        int j=i-1;
        while(j>=0 && array[j]>key)
        {
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=key;
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
    Insertion_Sort(data,size);
    for(int i=0;i<size;i++)
    {
        cout<<data[i]<<" ";
    }

    return 0;
}

