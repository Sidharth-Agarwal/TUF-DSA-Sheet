#include <iostream>

using namespace std;

void printFactorial(int n, int factorial) {
    if(n == 1) {
        cout << "The factorial for the given number is : " << factorial;
        return;
    }

    printFactorial(n-1, factorial*n);
}

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;

    printFactorial(n,1);
}