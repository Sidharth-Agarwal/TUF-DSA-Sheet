#include<iostream>
#include<climits>

using namespace std;

int findSecondLargest(int *arr, int n)
{
    int first = INT_MIN;
    int second = arr[0];

    
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

    int largest = findSecondLargest(arr, n);

    cout << "The second largest element of the array is : " << largest;
}