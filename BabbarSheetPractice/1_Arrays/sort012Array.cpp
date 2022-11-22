#include<bits/stdc++.h>
using namespace std;
//given 1s, 2s and 0s in random order. sort them in ascending order
int main()
{
    vector <int> v;
    int arr[] = {0, 1, 0, 2, 1, 1, 0, 2, 2, 0, 1};

    // for(int i = 0; i <len; i++)
    // {
    //     v.push_back(arr[i]);
    // }

    int low = 0;
    int mid = 0;
    int len = end(arr) - begin(arr);
    int high = len - 1;

    while (mid != high)
    {
        if(arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low ++;
            mid ++;
        }

        else if(arr[mid] == 1)
        {
            mid ++;
        }

        else if(arr[mid] == 2)
        {
            swap(arr[high], arr[mid]);
            high --;
        }
    }

    cout<<"Sorted array: ";
    for(int i = 0; i < len; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout << endl;

    return 0;
    
}