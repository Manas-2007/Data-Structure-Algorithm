#include<iostream>
using namespace std;

int Linear_Search(int *array,int size,int target)
{
    bool isFound=false;
    int index;
    for(int i=0;i<size;i++)
    {
        if(array[i]==target)
        {
            isFound=true;
            index=i;
            break;
        }
    }
    if(isFound)
    {
        return index;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int array[5]={10,20,40,3,90};
    int result=Linear_Search(array,5,200);
    if(result!=-1)
    {
       cout<<"Element is available at index "<<result;
    }
    else{
        cout<<"DATA NOT FOUND.....";
    }

    return 0;
    
}