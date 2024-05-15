#include <iostream>

using namespace std;

int* printDivisors(int num, int &size)
{
    int *divisors = new int[num];

    int count = 0;

    for(int i=1;i<=num;i++)
    {
        if(num%i == 0)
        {
            divisors[count++] = i;
        }
    }

    size = count;
    return divisors;
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int size;

    int *divisors = printDivisors(n,size);

    cout << "The divisors of the given number are : ";

    for(int i=0;i<size;i++)
    {
        cout << divisors[i] << " ";
    }
    
    delete [] divisors;
}

// Time Complexity - O(N)
// Space Complexity - O(1)