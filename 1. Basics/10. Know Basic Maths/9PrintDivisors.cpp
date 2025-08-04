#include <iostream>

using namespace std;

void printDivisors(int num) {
    for(int i=0;i<num;i++) {
        if(num % i == 0) {
            cout << i << endl;
        }
    }

    return;
}

int main() {
    int n;

    cout << "Enter the number : ";
    cin >> n;

    printDivisors(n);
}