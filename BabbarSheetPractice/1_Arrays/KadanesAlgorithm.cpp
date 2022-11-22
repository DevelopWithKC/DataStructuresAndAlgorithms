#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {5, 4, -1, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    // int maxSoFar = INT_MIN, maxEndingHere = 0;

    // for(int i = 0; i < len; i++)
    // {
    //     maxEndingHere += arr[i];
    //     if(maxSoFar < maxEndingHere)
    //     {
    //         maxSoFar = maxEndingHere;
    //     }

    //     if(maxEndingHere < 0)
    //     {
    //         maxEndingHere = 0;
    //     }
    //     cout<<"Maximum sum of subarray: "<<maxSoFar<<endl;

    int max_so_far = INT_MIN, max_ending_here = 0;

    for (int i = 0; i < n; i++)
    {
        max_ending_here = max_ending_here + arr[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    cout<<endl<< max_so_far<<endl;

    return 0;
}


