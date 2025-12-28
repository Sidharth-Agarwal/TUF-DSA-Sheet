#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;

    int initialSpaces = 0;

    for(int i=0; i<n; i++) {
        for(int j=1; j<=n-i; j++) {
            cout << "*";
        }

        for(int j=0; j<initialSpaces; j++) {
            cout << " ";
        }

        for(int j=1; j<=n-i; j++) {
            cout << "*";
        }

        initialSpaces += 2;
        cout << endl;
    }

    initialSpaces = (n*2) - 2;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout << "*";
        }

        for(int j=0; j<initialSpaces; j++) {
            cout << " ";
        }

        for(int j=1; j<=i; j++) {
            cout << "*";
        }
        
        initialSpaces -= 2;
        cout << endl;
    }
}