#include <iostream>
#include <algorithm>

using namespace std;

int GCD(int a, int b)
{
    int gcd = 1;

    for(int i=1;i<=min(a,b);i++)
    {
        if(a%i == 0 && b%i==0)
        {
            gcd = i;
        }
    }

    return gcd;
}

int main()
{
    int a;
    cout << "Enter the first number : ";
    cin >> a;

    int b;
    cout << "Enter the second number : ";
    cin >> b;

    int answer = GCD(a,b);
    cout << "HCF : " << answer;
}

// Time complexity - O(min(a,b))
// Space complexity - O(1)