#include<iostream>
using namespace std;
int main()
{
   int a[50],i,n,temp;
   cin>>n;

   for ( i = 0; i <= n -1; i++)
   {
     cin>>a[i];
   }
    temp=a[n-5];
    for ( i = 0; i <= n; i++)
    {
        a[i+1]=a[i];
    }
    a[n-1]=temp;
    for ( i = 0; i <= n - 1; i++)
    {
        cout<<a[i]<<endl;
    }
    
    return 0;
}