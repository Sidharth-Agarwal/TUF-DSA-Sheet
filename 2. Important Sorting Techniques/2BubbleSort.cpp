#include<iostream>

using namespace std;

void bubbleSort(int arr[], int n)
{   
    // setting up the counter at 1
    int counter = 1;

    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            // swapping the elements larger at adjacent positions
            if(arr[i] > arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
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

    bubbleSort(arr, n);

    cout << "The sorted array is : ";

    for (int i = 0; i < n;i++)
    {
        cout << arr[i] << " ";
    }
}