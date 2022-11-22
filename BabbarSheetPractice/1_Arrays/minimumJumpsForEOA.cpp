#include<bits/stdc++.h>
using namespace std;

//Find the minimum number of jumps to reach the end of an array.
// int minJumps(int arr[], int n)
// {
//     int furthest = 0, end = 0, jump = 0;

//     for (int ind = 0; ind < n - 1; ind++)
//     {
//         furthest = max(furthest, arr[ind] + ind);

//         if (end == ind)
//         {
//             jump++;
//             if (end == furthest)
//                 return -1;
//             end = furthest;
//         }
//     }

//     return jump;
// }

int minJumps(int a[], int n)
{
    int maxR = a[0];
    int steps = a[0];

    int jump = 1;

    if (n == 1)
        return 0;
    else if (a[0] == 0)
        return -1;

    else
    {
        for (int i = 1; i < n; i++)
        {
            // if(i == 1)
            if (i == n - 1 && steps)
                return jump;

            maxR = max(maxR, a[i] + i);
            steps--;
            if (steps < 0)
                return -1;

            if (steps == 0)
            {
                jump++;
                if (i > maxR)
                    return -1;
                steps = maxR - i;
            }
        }
    }
}

int main()
{
    int a[] = {2, 3, 1, 1, 2, 4, 2, 0, 1, 1};
    int n = end(a) - begin(a);
    int answer = minJumps(a,n);

    cout<<"Minimum Jumps = "<<answer<<endl;
    return 0;
}