#include<iostream>
using namespace std;
//Merge sort algorithm
void mergeSort(int arr[],int start,int end)
{
    if(start<end)
    {
        int mid=(start+end)/2;

        //Recursive sort left half
        mergeSort(arr,start,mid);

        //Recursive sort right half
        mergeSort(arr,mid+1,end);

        //Size of temporary arrays
        int n1,n2;
        n1=mid-start+1;
        n2=end-mid;

        //Create temporary arrays
        int L[n1],R[n2];

        //Copy elements into both arrays
        for(int i=0;i<n1;i++)
        {
            L[i]=arr[start+i];
        }

        for(int j=0;j<n2;j++)
        {
            R[j]=arr[mid+1+j];
        }

        //Merge both temporary arrays
        int i=0,j=0,k=start;
        while(i<n1 && j<n2)
        {
            if(L[i]<=R[j])
            {
                arr[k]=L[i];
                i++;
            }
            else 
            {
                arr[k]=R[j];
                j++;
            }
            k++;
        }

        //Copy remoining elements of both temporary arrays
        while(i<n1)
        {
            arr[k]=L[i];
            i++;
            k++;
        }

        while(j<n2)
        {
            arr[k]=R[j];
            j++;
            k++;
        }
    }
}
int main()
{
    int size,*array;
    cout<<"Enter size of array : ";
    cin>>size;
    array=new int[size];
    cout<<"Enter "<<size<<" elements in array :\n";
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    //Calling merge sort algorithm
    mergeSort(array,0,size-1);
    cout<<"\nYOUR SORTED ELEMENTS ARE: \n";
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<"   ";
    }
    delete[] array;
    return 0;
}