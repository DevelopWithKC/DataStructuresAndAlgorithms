#include<bits/stdc++.h>
using namespace std;

/*
pattern

*
* *
* * *
* * * *


*/

// int main()
// {
//     int n;
//     cin>>n;

//     for(int i = 0;i < n; i++)
//     {
//         for(int j = n-i; j <= n; j++)
//         {
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*

pattern 2

1
2 2
3 3 3
4 4 4 4

*/

int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            cout<< i <<" ";
        }
        cout<<endl;
    }
    
    return 0;
}