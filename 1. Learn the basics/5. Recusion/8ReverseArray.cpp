#include <iostream>

using namespace std;

void reverseArray(int start, int end, int arr[]) {
    if(start >= end) {
        return;
    }

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    reverseArray(start+1, end-1, arr);
}

int main() {
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array : ";

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    reverseArray(0,n-1,arr);

    cout << "The reversed array is : ";

    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
}