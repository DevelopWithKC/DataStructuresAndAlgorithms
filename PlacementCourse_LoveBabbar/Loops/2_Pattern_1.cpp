#include<bits/stdc++.h>
using namespace std;

/*
pattern:

* * * *
* * * *
* * * *
* * * *

*/

// int main()
// {
//     cout<<"The pattern is: "<<endl;
//     for(int i = 0; i < 4; i++)
//     {
//         for(int j = 0; j < 4; j++)
//         {
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;

//     return 0;
// }


/*
pattern:

1 1 1
2 2 2
3 3 3

*/

// int main()
// {
//     int num = 1;

//     for(int i = 1; i <= 3; i++)
//     {
//         for(int j = 1; j <= 3; j++)
//         {
//             cout<<num<<" ";
//         }
//         cout<<endl;
//         num ++;
//     }

//     return 0;
// }

int main()
{
    // int num = 1;

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << i << " ";
        }
        cout << endl;
        // num++;
    }

    return 0;
}


