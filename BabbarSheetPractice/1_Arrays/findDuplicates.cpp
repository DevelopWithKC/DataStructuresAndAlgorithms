#include<bits/stdc++.h>
using namespace std;

// find duplicate in an array of N+1 Integers
int main()
{
    int arr[] = {1, 3, 4, 2, 7, 8, 9, 22, 10, 45, 2, 46, 88};
    int len = end(arr) - begin(arr);

    for(int i = 0; i < len; i++)
    {
        for(int j = i+1; j < len; j++)
        {
            if(arr[i] == arr[j])
            {
                cout<<"Duplicated element: "<<arr[j]<<endl;
                break;
            }
        }
    }

    return 0;
}