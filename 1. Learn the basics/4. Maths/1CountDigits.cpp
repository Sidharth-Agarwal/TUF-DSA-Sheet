#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int countDigits(int n) {
    return int(log10(n) + 1);
}

int countDigit(int n) {
    int count = 0;

    while(n>0) {
        count++;
        n /=10;
    }

    return count;
}

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;

    cout << "Calculating digits by first method : " << countDigit(n) << endl;
    cout << "Calculating digits by first method : " << countDigits(n) << endl;
    
    return 0;
}