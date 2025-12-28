// A
// AB
// ABC
// ABCD
// ABCDE

#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;

    // Approach 1
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            cout << char('A' + i);
        }
        cout << endl;
    }

    // Approach 2
    for(int i=0; i<n; i++) {
        char ch = 'A' + i;
        for(int j=0;j<=i;j++) {
            cout << ch;
        }
        cout << endl;
    }
}