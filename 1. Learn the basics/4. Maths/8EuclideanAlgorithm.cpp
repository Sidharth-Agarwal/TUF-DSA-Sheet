#include <iostream>

using namespace std;

int euclideanAlgorithm(int num1, int num2) {
    while(num1 > 0 && num2 > 0) {
        if(num1  > num2) {
            num1 = num1 % num2;
        } else {
            num2 = num2 % num1;
        }
    }

    if(num1 == 0) {
        return num2;
    } else {
        return num1;
    }
}

int main() {
    int a,b;
    cout << "Enter the first number : ";
    cin >> a;
    cout << "Enter the second number : ";
    cin >> b;

    cout << "Getting HFC with Euclidean algorithm : " << euclideanAlgorithm(a,b) << endl;

    return 0;
}