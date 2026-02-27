#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    int a,b,x,y;
    cout<<"Enter the First Number : ";
    cin>>a;
    cout<<"Enter the Second Number : ";
    cin>>b;
    x=b;
    y=a;
    clock_t start,end;
    start=clock();
    //Euclidian Algorithm
    while(b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    cout<<"The GCD of "<<y<<" & "<<x<<" is "<<a<<endl;
    end=clock();
    cout<<"TIME TAKEN : "<<end-start<<endl;
    return 0;
}