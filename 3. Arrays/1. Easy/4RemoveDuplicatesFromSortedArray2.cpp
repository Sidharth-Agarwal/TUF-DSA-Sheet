#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int removeDuplicates(int *arr, int n)
{
    int i = 0;

    for(int j=1;j<n;j++)
    {
        if(arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    return i+1;
}

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter the elements of the array : ";
    
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    int updatedArray = removeDuplicates(arr,n);

    cout << "The updated array after removing duplicates is : ";

    for(int i=0;i<updatedArray;i++)
    {
        cout << arr[i] << " ";
    }
}