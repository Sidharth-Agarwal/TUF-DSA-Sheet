#include <iostream>

using namespace std;

void printFunction(int i, int n) {
    if(i > n) {
        return;
    }

    cout << "Sidharth!" << endl;
    printFunction(i+1, n);
}

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;

    printFunction(1,n);

    return 0;
}