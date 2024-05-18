#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int removeDuplicates(int *arr, int n)
{
    set<int> set;

    for(int i=0;i<n;i++)
    {
        set.insert(arr[i]);
    }

    int size = set.size();

    int temp = 0;

    for(int x:set)
    {
        arr[temp++] = x;
    }

    return size;
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