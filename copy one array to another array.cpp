#include <iostream>
using namespace std;

int main()
{
    int a[101],b[101],n;
    cout<<"Enter the array size: ";
    cin>>n;
    cout<<"Enter the array elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    cout<<"The copied array elements are: ";
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}