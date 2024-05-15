#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

vector<int> findDivisors(int n)
{
    vector<int> divisors;
    int squareRoot = sqrt(n);

    for(int i=1;i<squareRoot;i++)
    {
        if(n%i == 0)
        {
            divisors.push_back(i);
        
            // Add the counterpart divisor
            // if it's different from i
            if(i != i/n)
            {
                divisors.push_back(n/i);
            }
        }
    }
    return divisors;
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    vector<int> divisors = findDivisors(n);

    cout << "The divisors of the given number are : ";
    
    sort(divisors.begin(), divisors.end());

    for(int divisor : divisors)
    {
        cout << divisor << " ";
    }
}

// Time Complexity - O(sqrt(N))
// Space Complexity - O(1)