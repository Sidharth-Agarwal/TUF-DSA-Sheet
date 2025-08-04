#include <iostream>

using namespace std;

int countDigits(int n) {
    // Special cases
    if (n == 0) {
        return 1;
    }

    n = abs(n);

    int count = 0;

    while(n > 0) {
        count++;
        n /= 10;
    }

    return count;
}

int main() {
    int n;
    
    cout << "Enter the number : ";
    cin >> n;

    int numberLength = countDigits(n);

    cout << "The length of the number is : " << numberLength;
}