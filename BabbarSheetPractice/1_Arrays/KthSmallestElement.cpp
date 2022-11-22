#include<bits/stdc++.h>
using namespace std;

// Given an array arr[] and an integer K where K is smaller than size of array, 
// the task is to find the Kth smallest element in the given array. 
// It is given that all array elements are distinct

int main()
{
    vector <int> v = {10, 23, 51, 18, 90, 12, 6, 19};
    int k = 5;

    //hence, find 5th smallest number from the array.
    sort(v.begin(), v.end());

    cout<<"5th smallest element: "<<v.at(4)<<endl;

    return 0;


}