// *
// **
// ***
// ****
// *****

#include <iostream>

using namespace std;

int main() {
    int x;
    cout << "Enter the number of row : ";
    cin >> x;

    for(int i=0; i<x; i++) {
        for (int j=0; j<=i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}