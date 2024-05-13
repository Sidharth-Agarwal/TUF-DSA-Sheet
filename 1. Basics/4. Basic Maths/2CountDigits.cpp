#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int countDigits(int n)
{
    // the below expression helps in getting the number of digits in the number
    // adding +1 at the end makes sure that the output is correct
    int count = (int)(log10(n)+1);
    return count;
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int digits = countDigits(n);

    cout << "Number of the digits in the given number is : " << digits;
}

// Time Complexity - O(1)
// Space Complexity - O(1)