/**
 *     *    
 *    ***   
 *   *****
 *  *******
 * ********* 
 * *********
 *  *******
 *   *****
 *    ***
 *     *
 */

#include <iostream>

using namespace std;

void pyramid(int n) {
    for(int i=1;i<=n;i++) {
        for(int j=0;j<n-i;j++) {
            cout << " ";
        }
        for(int j=0;j<(i*2)-1;j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void invertedPyramid(int n) {
    for(int i=n;i>0;i--) {
        for(int j=1;j<(n-i+1);j++) {
            cout << " ";
        }
        for(int j=0;j<(i*2)-1;j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    pyramid(n);
    invertedPyramid(n);

    return 0;
}