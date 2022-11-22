#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {4, 8, 6, 2, 1, 9, 7};

    int len = end(arr) - begin(arr);
    int x = arr[len - 1], i;
    for (i = len - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        
    arr[0] = x;

    cout<<"\nClockwise rotated array is: ";
    for(int i = 0; i < len; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}