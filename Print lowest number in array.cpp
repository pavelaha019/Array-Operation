#include <iostream>
using namespace std;

int main()
{
    int a[101],n,min;
    cout<<"Enter the array size: ";
    cin>>n;
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    min=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    cout<<"The lowest number in the array is: "<<min<<endl;
    return 0;
}