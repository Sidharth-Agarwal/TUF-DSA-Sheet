// This states that - GCD(a,b) = GCD(a-b,b) where, a>b
// Also GCD(a,b) = GCD(a%b,b) where, a>b

#include <iostream>

using namespace std;

int GCD(int a, int b)
{
    while(a>0 && b>0)
    {
        if(a>b)
        {
            a = a%b;
        }
        else
        {
            b = b%a;
        }
    }

    if(a==0)
    {
        return b;
    }

    return a;
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