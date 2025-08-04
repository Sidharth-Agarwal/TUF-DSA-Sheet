#include <iostream>

using namespace std;

bool checkPalindrome(int n, int rev) {
    return n == rev;
}

int reverseNumber(int n) {
    int rev = 0;

    while(n != 0) {
        int digit = n % 10;
        rev = (rev*10) + digit;
        n /= 10;
    }

    return rev;
}

int main() {
    int n;
    
    cout << "Enter the number : ";
    cin >> n;

    int reverse = reverseNumber(n);

    if (checkPalindrome(n, reverse)) {
        cout << "The entered number is a palindrome";
    } else {
        cout << "The entered number is not a palindrome";
    }
}