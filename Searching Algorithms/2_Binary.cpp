#include<iostream>
using namespace std;
int main()
{
    int size,find,position;
    bool isfound=false;
    int *array;
     cout<<"Enter the size of your Array : ";
    cin>>size;
    array=new int [size];
   
    cout<<"\n       ENTER ELEMENTS INTO ARRAY\n";
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    cout<<"\n       YOUR ARRAY ELEMENTS ARE LISTED BELOW\n";
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<"    ";
    }
    //Binary Search Algorithm
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(array[i]>array[j])
            {
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }

    cout<<"\n       AFTER SORTING YOUR ELEMENTS ARE\n";
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<"    ";
    }
     cout<<"\n\nENTER THE ELEMENT THAT YOU WANT TO FIND : ";
    cin>>find;

    int start=0,end=size-1,mid;
        while(start<=end)
        {
            mid=(start+end)/2;
            if(find==array[mid])
            {
                isfound=true;
                position=mid;
                break;
            }
            else if(find>array[mid])
            {
                start=mid+1;
            }
            else if(find<array[mid])
            {
                end=mid-1;
            }
        } 

        if(isfound)
        {
            cout<<"\nELEMENT AVAILABLE AT INDEX "<<position<<"\n";
        }
        else{
            cout<<"\nELEMENT NOT FOUND\n";
        }

    return 0;
}