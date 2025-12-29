#include <iostream>

using namespace std;

bool armstrongNumber(int n) {
    int temp = n;
    int armstrong = 0;

    while(temp > 0) {
        int last = temp%10;
        armstrong = armstrong + (last*last*last);
        temp /= 10;
    }

    return armstrong == n;
}

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;

    if(armstrongNumber(n)) {
        cout << "The given number is an armstrong number.";
    } else {
        cout << "The given number is not an armstrong number.";
    }
}