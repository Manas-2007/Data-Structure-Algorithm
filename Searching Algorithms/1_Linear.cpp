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

    cout<<"\n\nENTER THE ELEMENT THAT YOU WANT TO FIND : ";
    cin>>find;
    
    //Linear Search Algorithm
    for(int i=0;i<size;i++)
    {
        if(array[i]==find)
        {
            isfound=true;
            position=i;
            break;
        }
    }
    if(isfound)
    {
        cout<<"\nELEMENT AVAILABLE AT INDEX "<<position<<"\n\n";
    }
    else
    {
        cout<<"\nELEMENT NOT FOUND\n";
    }

    return 0;

}