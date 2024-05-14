#include <iostream>

using namespace std;

int reverseNumber(int n)
{
    int rev = 0;

    while(n > 0)
    {
        rev = (rev*10) + (n % 10);
        n = n /10;
    }
    return rev;
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int reverse = reverseNumber(n);

    if(n == reverse)
    {
        cout << "The number is palindrome!";
    }
    else
    {
        cout << "The number is not palindrome!";
    }
}

// Time Complexity - O(log10N + 1)
// Space Complexity - O(1)