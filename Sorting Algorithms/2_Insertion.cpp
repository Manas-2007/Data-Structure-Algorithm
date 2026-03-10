#include<iostream>
using namespace std;

//Insertion sort algorithm
void insertionSort(int array[],int size)
{
    for(int i=1;i<=size-1;i++)
    {
        int key=array[i];
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
    int array[7]={10,67,34,20,60,23,22};
    insertionSort(array,7);
    for(int i=0;i<7;i++)
    {
        cout<<array[i]<<"  ";
    }
    return 0;
}