#include<bits/stdc++.h>
using namespace std;

/*
pattern 1

1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4

*/
int main()
{
    int n;
    cin>>n;

    //rows
    for(int i = 0; i < n; i++)
    {
        //columns
        for(int j = 1; j <= n; j++)
        {
            cout<<j<<" ";
        }
        cout << endl;
    }

    return 0;
}

