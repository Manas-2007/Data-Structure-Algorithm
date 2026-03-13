#include<iostream>
using namespace std;

//Selection Sort Algorithm
void selectionsort(int array[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(array[j]<array[minIndex])
            {
                minIndex=j;
            }
        }

        //SWAP 
        int temp=array[i];
        array[i]=array[minIndex];
        array[minIndex]=temp;
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

     delete[] array;
     return 0;
}