#include <iostream>

using namespace std;

int reverseNumber(int n) {
    int rev = 0;

    while(n>0) {
        int last = n%10;
        rev = rev*10 + last;
        n /= 10;
    }

    return rev;
}

bool checkPalindrome(int original, int reverse) {
    return original == reverse;
}

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int reverse = reverseNumber(n);

    if(checkPalindrome(n,reverse)) {
        cout << "The given number is a palindrome.";
    } else {
        cout << "The given number is not a palindrome.";
    }

    return 0;
}