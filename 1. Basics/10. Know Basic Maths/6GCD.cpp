#include <iostream>
#include <algorithm>

using namespace std;

int findGcd(int a, int b) {
    int gcd = 1;

    for(int i=min(a,b); i>0; i--) {
        if(a % i == 0 && b % i == 0) {
            return i;
        }
    }

    return gcd;
}

int main() {
    int a, b;
    
    cout << "Enter the first number : ";
    cin >> a;

    cout << "Enter the second number : ";
    cin >> b;

    cout << "GCD of the two numbers is : " << findGcd(a, b);
}