#include <iostream>

using namespace std;

int getLargestInteger(int *arr, int size) {
    if(size == 1) {
        return arr[0];
    }
    
    int LARGEST = arr[0];

    for(int i = 1 ; i < size ; i++) {
        if(arr[i] > LARGEST) {
            LARGEST = arr[i];
        }
    }

    return LARGEST;
}

int main() {
    int arr[] = {1,2,3,4,5};

    cout << getLargestInteger(arr, 5);
}