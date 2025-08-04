#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int countDigits(int n) {
    // Special ege cases
    if (n == 0) {
        return 1;
    }

    if(n < 0) {
        n = abs(n);
    }

    // The key insight is that log₁₀(n) tells you how many times you need to multiply 10 to get close to n
    int count = (int)(log10(n) + 1);
    return count;
}

int main() {
    int n;
    
    cout << "Enter the number : ";
    cin >> n;

    int numberLength = countDigits(n);

    cout << "The length of the number is : " << numberLength;
}