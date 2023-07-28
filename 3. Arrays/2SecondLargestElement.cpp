#include<iostream>
#include<climits>

using namespace std;

int findSecondLargest(int *arr, int n)
{
    int first = arr[0];
    int second = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] > first)
        {
            second = first;
            first = arr[i];

        }

        else if(arr[i] < first)
        {
            if(second == INT_MIN || second < arr[i])
            {
                second = arr[i];
            }
        }
    }

    return second;
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

    int secondLargest = findSecondLargest(arr, n);

    cout << "The second largest element of the array is : " << secondLargest;
}