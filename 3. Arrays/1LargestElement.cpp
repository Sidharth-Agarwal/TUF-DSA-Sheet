#include<iostream>
#include<climits>

using namespace std;

int findLargest(int *arr, int n)
{
    int num = INT_MIN;

    for (int i = 0; i < n;i++)
    {
        if(arr[i] > num)
        {
            num = arr[i];
        }
    }

    return num;
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

    int largest = findLargest(arr, n);
}