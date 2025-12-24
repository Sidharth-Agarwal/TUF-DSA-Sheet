#include <iostream>

using namespace std;

void printStatement() {
    cout << "Hello World!" << endl;
}

int sum(int a, int b) {
    return a + b;
}

int main() {
    printStatement();

    int answer = sum(5,6);
    cout << "The answer is sum function is : " << answer << endl;

    return 0;
}