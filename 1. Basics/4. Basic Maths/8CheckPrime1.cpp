#include <iostream>

using namespace std;

bool checkPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    if(checkPrime(n))
    {
        cout << "The given number is a prime number!";
    }
    else
    {
        cout << "The given number is not a prime number!";
    }
}

// Time Complexity - O(N)
// Space Complexity - O(1)