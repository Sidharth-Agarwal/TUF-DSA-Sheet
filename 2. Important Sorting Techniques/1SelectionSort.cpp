#include<iostream>

using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        // finding the minimum element in the remaining array
        for (int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        
        // swapping the current element with the minimum element
        if(minIndex != i)
        {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
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

    selectionSort(arr, n);

    cout << "The sorted array is : ";

    for (int i = 0; i < n;i++)
    {
        cout << arr[i] << " ";
    }
}