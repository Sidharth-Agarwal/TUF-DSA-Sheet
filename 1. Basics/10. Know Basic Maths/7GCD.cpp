#include <iostream>
#include <algorithm>

using namespace std;

int findGcd(int a, int b) {
    int gcd = 1;

    while(a > 0 && b > 0) {
        if(a > b) {
            a = a % b;
        } else {
            b = b % a;
        }
    }

    if(a == 0) {
        return b;
    }

    return a;
}

int main() {
    int a, b;
    
    cout << "Enter the first number : ";
    cin >> a;

    cout << "Enter the second number : ";
    cin >> b;

    cout << "GCD of the two numbers is : " << findGcd(a, b);
}