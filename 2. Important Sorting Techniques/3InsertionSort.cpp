#include<iostream>

using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n;i++)
    {
        int current = arr[i];
        int j = i - 1;

        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter the elements of the array : ";

    for (int i = 0; i < n;i++)
    {
        cin >> arr[i];
    }

    insertionSort(arr, n);

    cout << "The sorted array is : ";

    for (int i = 0; i < n;i++)
    {
        cout << arr[i] << " ";
    }
}