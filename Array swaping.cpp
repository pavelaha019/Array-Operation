#include <iostream>
using namespace std;

int main()
{
    int a[101],n,temp;
    cout<<"Enter the array size: ";
    cin>>n;
    cout<<"Enter the array elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
    cout<<"The swaped array elements are: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
   
    return 0;
}