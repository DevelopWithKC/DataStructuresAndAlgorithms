#include<bits/stdc++.h>
using namespace std;
//given negative and positive integers in random order in an array.
//Shift all the negative numbers to one side of the array

int main()
{
    int temp = 0;
    int arr[] = { -12, 11, -13, -5, 6, -7, 5, -3, -6 };

    int len = end(arr) - begin(arr);

    for(int i = 0; i < len; i++)
    {
        if(arr[i] < 0)
        {
            swap(arr[temp], arr[i]);
            temp ++;
        }
    }

    //print the array
    cout << "Sorted array is: ";
    for (int i = 0; i < len; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;
}