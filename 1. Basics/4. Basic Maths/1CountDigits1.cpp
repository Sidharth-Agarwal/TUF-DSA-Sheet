#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int countDigits(int n)
{
    int count = 0;

    while(n>0)
    {
        count++;
        n = n/10;
    }
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

// The number of iteration depends on the division then log comes into picture
// Time Complexity - O(log10(N))
// Space Complexity - O(1)