#include <iostream>
#include <algorithm>
#include <bits/stdc++.h> 

using namespace std;

bool isArmstrong(int num) {
    int len = to_string(num).length();

    int sum = 0;
    int temp = num;

    while(temp > 0) {
        int last = temp % 10;
        int value = pow(last, len);
        sum = sum + value;
        temp = temp / 10;
    }

    return sum == num;
}

int main() {
    int n;
    
    cout << "Enter the number : ";
    cin >> n;

    if(isArmstrong(n)) {
        cout << "The entered number is an Armstrong number";
    } else {
        cout << "The entered number is not an Armstrong number";
    }
}