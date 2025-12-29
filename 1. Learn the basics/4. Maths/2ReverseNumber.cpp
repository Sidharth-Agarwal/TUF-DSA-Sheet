#include <iostream>

using namespace std;

int reverseNumber(int n) {
    int rev = 0;

    while(n>0) {
        int last = n%10;
        rev = rev*10 + last;
        n /= 10;
    }

    return rev;
}

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;

    cout << "The reverse of the number entered is : " << reverseNumber(n) << endl;

    return 0;
}