#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the First Number : ";
    cin>>a;
    cout<<"Enter the Second Number : ";
    cin>>b;
    //Normal Way 
    int min=(a<b)? a:b;
   for(int i=min;i>=1;i--)
   {
    if(b%i==0 && a%i==0)
    {
        cout<<"THE GCD OF "<<a<<" & "<<b<<" is "<<i<<"\n";
        break;
    }
   }
    
return 0;
}