#include<iostream>
using namespace std;

void Merge_Sort(int *array,int start,int end)
{
    if(start<end)
    {
        int mid=start+(end-start)/2;
        Merge_Sort(array,start,mid);
        Merge_Sort(array,mid+1,end);

        // Size calculation of arrays
        int n1=mid-start+1;
        int n2=end-mid;

        // Creating Temporary arrays
        int L[n1],R[n2];

        // Copying elements into the temporary arrays
        for(int i=0;i<n1;i++)
        {
            L[i]=array[start+i];
        }

        for(int j=0;j<n2;j++)
        {
            R[j]=array[mid+1+j];
        }

        // Comparison logic
        int i=0,j=0,k=start;
        while(i<n1 && j<n2)
        {
            if(L[i]>=R[j])
            {
                array[k]=R[j];
                j++;
            }
            else
            {
                array[k]=L[i];
                i++;                
            }
            k++;
        }

        // Copying remaining elements into the main array
        while(i<n1)
        {
            array[k]=L[i];
            i++;
            k++;
        }

        while(j<n2)
        {
            array[k]=R[j];
            j++;
            k++;
        }
    }
}

int main()
{
    int size;
    cout<<"ENTER ARRAY SIZE : ";
    cin>>size;
    int *data=new int[size];
    cout<<"Enter "<<size<<" elements in array : \n";
    for(int i=0;i<size;i++)
    {
        cout<<"Data "<<i+1<<" : ";
        cin>>data[i];
    }
    cout<<"\n============AFTER SORTING===============\n";
    Merge_Sort(data,0,size-1);
    for(int i=0;i<size;i++)
    {
        cout<<data[i]<<" ";
    }

    return 0;

}