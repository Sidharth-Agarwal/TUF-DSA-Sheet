#include<iostream>
#include<climits>

using namespace std;

bool checkSortedAscending(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i] > arr[i+1])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;

    cout << "Enter the size of the array : ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter the elements of the array : ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool check = checkSortedAscending(arr,n);

    if(check)
    {
        cout << "Sorted";
    }
    else
    {
        cout << "Not Sorted";
    }
}