#include <iostream>

using namespace std;

int fibonacciNumber(int n) {
    if(n <= 1) {
        return n;
    }

    return fibonacciNumber(n-1) + fibonacciNumber(n-2);
}

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int answer = fibonacciNumber(n);

    cout << "The fibonacci number required is : " << answer;
}