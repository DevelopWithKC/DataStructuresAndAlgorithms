#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2, 6, 3, 4, 7, 2, 10, 3, 2, 1};
    int k = 5;
    int n = end(arr) - begin(arr);


    sort(arr, arr+n);
    int ans = arr[n-1] - arr[0];

    int tempMin = arr[0], tempMax = arr[n-1];

    for(int i = 1; i < n; i++)
    {
        //since the tower height must be positive
        if((arr[i] - k) < 0)
            continue;

        //check the most minimum in the array by comparing with other elements
        tempMin = min(arr[0]+k, arr[i]-k);

        // check the most maximum in the array by comparing with other elements
        tempMax = max(arr[i-1]+k, arr[n-1]-k);

    }
    ans = min(ans, tempMax = tempMin);

    cout<<"Minimum possible difference between the towers is: "<<ans<<endl;

    return 0;
}