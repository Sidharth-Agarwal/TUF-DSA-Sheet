#include <iostream>

using namespace std;

int printSum(int n) {
    if(n == 0) {
        return 0;
    }

    return n + printSum(n-1);
}

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int sum = printSum(n);

    cout << "The sum of the numbers is : " << sum;
}