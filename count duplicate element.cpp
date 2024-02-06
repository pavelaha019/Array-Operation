#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    int ar[n];
    cout<<"Enter the elemetns: ";
    for(int i=0;i<n;i++) cin>>ar[i];
    int count = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ar[i]==ar[j])
            count++;
        }
    }
    cout<<count<<" ";
    return 0;
}