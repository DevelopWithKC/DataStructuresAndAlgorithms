#include<bits/stdc++.h>
using namespace std;

//Perform union and intersection operations on two arrays
void UnionOperation(int arr1[], int arr2[], int len_a, int len_b)
{
    
    int i = 0;
    int j = 0;

    cout << "\nUnion of the given sets is: ";
    while (i < len_a && j < len_b)
    {
        if (arr1[i] < arr2[j])
        {
            cout << arr1[i++] << " ";
        }

        else if (arr2[j] < arr1[i])
        {
            cout << arr2[j++] << " ";
        }

        else
        {
            cout << arr2[j++] << " ";
            i++;
        }
    }

    while (i < len_a)
    {
        cout << arr1[i++] << " ";
    }

    while (j < len_b)
    {
        cout << arr2[j++] << " ";
    }
    cout << endl;
}

void IntersectionOperation(int arr1[], int arr2[], int len_a, int len_b)
{
    int i = 0, j = 0;

    cout << "Intersection is: ";
    
    while (i < len_a && j < len_b)
    {
        if(arr1[i] < arr2[j])
            i++;
        else if (arr1[i] > arr2[j])
            j++;
        else
        {
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    }

    cout<<endl;
}


int main()
{
    int arr1[] = {1,3,4,5,7};
    int arr2[] = {2,3,5,6};

    int len_a = end(arr1) - begin(arr1);

    int len_b = end(arr2) - begin(arr2);

    cout<<"Choose an operation\n";
    cout<<"1. Union\n";
    cout<<"2. Intersection\n";

    int a;
    cin>>a;

    if(a == 1)
    {
        UnionOperation(arr1, arr2, len_a, len_b);
    }
    else if(a == 2)
    {
        IntersectionOperation(arr1, arr2, len_a, len_b);
    }
    else
        cout<<"Wrong input !!"<<endl;

    return 0;
}