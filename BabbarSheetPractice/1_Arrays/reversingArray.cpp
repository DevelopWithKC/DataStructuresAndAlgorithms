#include<bits/stdc++.h>
using namespace std;
//reverse the array elements
int main()
{
    int temp;
    vector <int> v = {2, 6, 8, 25, 32, 45};

    
    for(int i = v.size()-1, j = 0; i >= 0; i--, j++)
    {
        if(j > i)
            break;
        // temp = v.at(i);

        // v[i] = v[j];

        // v[j] = temp;

        swap(v.at(i), v.at(j)); // swapping first and last pointers and increment first
                                //  pointer and decrement last pointer
    }

    cout << endl;

    for(int i = 0; i < v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout << endl;

    return 0;

}

