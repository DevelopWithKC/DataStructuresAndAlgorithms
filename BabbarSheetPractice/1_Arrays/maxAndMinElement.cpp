#include<bits/stdc++.h>
using namespace std;
// return the maximum and minimum element from the array

int main()
{
    vector <int> v = {20, 23, 56, 98, 45, 12, 74, 59, 10};
    int max = INT_MIN;
    int min = INT_MAX;

    for(int i = 0; i < v.size(); i++)
    {
        if(max < v.at(i))
            max = v.at(i);
        
        if(min > v.at(i))
            min = v.at(i);
    }

    cout<<"Maximum and minimum values respectively are: "<< max <<" and " <<min <<endl;

    return 0;

}