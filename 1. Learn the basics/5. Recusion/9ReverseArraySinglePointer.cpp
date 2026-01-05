#include <iostream>

using namespace std;

void reverseArray(int i, int size, int arr[]) {
    if(i >= size/2) {
        return;
    }

    int temp = arr[i];
    arr[i] = arr[size-i-1];
    arr[size-i-1] = temp;

    reverseArray(i+1, size, arr);
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

    reverseArray(0,n,arr);

    cout << "The reversed array is : ";

    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
}