// E
// DE
// CDE
// BCDE
// ABCDE

#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of row : ";
    cin >> n;

    char start = 'A' + (n-1);

    for(int i=0; i<n; i++) {
        for(int j=i; j>=0; j--) {
            cout << char(start - j);
        }
        cout << endl;
    }
}