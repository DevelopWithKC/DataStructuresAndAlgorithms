#include<bits/stdc++.h>
#include<iostream>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    for (int i = 0; i < intervals.size() - 1; i++)
    {
        int j = 0;
        if (intervals[i][i + 1] > intervals[i + 1][i])
            {
                intervals[i][i + 1] = intervals[i + 1][i + 1];

                // intervals[i+1].clear();
            }
    }

    return intervals;
}

int main()
{
    vector<vector<int>> intervals{{1, 3}, {2, 6}, {8, 10}, {15, 18}};

    merge(intervals);

    cout<<"Merged intervals vector: \n";
    // cout<<"Size: "<<intervals.size();

    for(int i = 0; i < intervals.size(); i++)
    {
        int k = 0;
        cout<<"{"<<intervals[i][k++];
        cout<<", "<<intervals[i][k++]<<"}";
    }
    cout<<endl;

    return 0;
}