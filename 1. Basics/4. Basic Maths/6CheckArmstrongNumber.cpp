#include <bits/stdc++.h>

using namespace std;

bool checkArmstrong(int n)
{
    int temp = n;
    int sum = 0;
    int length = to_string(n).length();

    while(temp > 0)
    {
        int last = temp % 10;
        sum = sum + pow(last,length);
        temp = temp/10;
    }

    return sum == n ? true : false;
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    if(checkArmstrong(n))
    {
        cout << "The number given is an armstrong number.";
    }
    else
    {
        cout << "The number given is not an armstrong number.";
    }
}

// Time Complexity - O(logN+1)
// Space Complexity - O(1)