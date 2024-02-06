#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int new_arr[6];

    for(int i=0; i<5; i++)
    {
        new_arr[i] = arr[i];
    }

    new_arr[5] = 6;

    for(int i=0; i<6; i++)
    {
        cout << new_arr[i] << " ";
    }

    return 0;
}