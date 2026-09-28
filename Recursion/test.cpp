#include<iostream>
using namespace std;

 int Fibo_Iterate(int n)
 {
    int sum=0,a=0,b=1;
    if(n==1 || n==0)
    {
        return 0;
    }
    if(n==2)
    {
        return 1;
    }
    else
    {
        for(int i=3;i<=n;i++)
        {
            sum=a+b;
            a=b;
            b=sum;
        }
        return b;
    }
 }

int main()
{
    int number;
    cout<<"ENTER THE NUMBER : ";
    cin>>number;
    int result=Fibo_Iterate(number);
    cout<<"RESULT: "<<result<<endl;
  

    return 0;
    
}