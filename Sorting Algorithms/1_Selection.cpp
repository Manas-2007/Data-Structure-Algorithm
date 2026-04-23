#include<iostream>
using namespace std;
//Selection sort Function
void SelectionSort(int *array,int size)
{
    for(int i=0;i<size;i++)
    {
        int minValue=i;
        for(int j=i+1;j<size;j++)
        {
            if(array[j]<array[minValue])
            {
                minValue=j;
            }
        }
        //Swap
        int temp=array[minValue];
        array[minValue]=array[i];
        array[i]=temp;
    }
}
int main()
{
    int size;
    cout<<"Enter the size of the Array :  ";
    cin>>size;
    int *data;
    data=new int[size];
    //Input data
    cout<<"Enter the data into Array : \n";
    for(int i=0;i<size;i++)
    {
        cin>>data[i];
    }
    cout<<"Your Sorted Data : ";
    SelectionSort(data,size);
    for(int i=0;i<size;i++)
    {
        cout<<data[i]<<" ";
    }
    return 0;
}