/**
 * n x m = 5 x 6
 * ******
 * ******
 * ******
 * ******
 * ******
 */

#include <iostream>

using namespace std;

int main() {
    int n,m;
    cout << "Enter the values of n and m : ";
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << "*";
        }
        cout << endl;
    }
}