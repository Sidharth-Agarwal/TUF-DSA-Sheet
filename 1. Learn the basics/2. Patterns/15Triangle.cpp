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
    for(int i=n; i>0; i--) {
        for(int j=0; j<i; j++) {
            cout << char('A' + j);
        }
        cout << endl;
    }

    // Approach 2
    for(int i=n; i>0; i--) {
        for(char ch = 'A'; ch<'A'+i; ch++) {
            cout << ch;
        }
        cout << endl;
    }
}