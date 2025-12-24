/* Pattern -
*****
*****
*****
*****
*****
*/

#include <iostream>

using namespace std;

int main() {
    int x, y;
    cout << "Enter the length of the rectangle : ";
    cin >> x;
    cout << "Enter the breadth of the rectangle : ";
    cin >> y;

    for(int i=0; i<x; i++) {
        for(int j=0; j<y; j++) {
            cout << "*";
        }
        cout << endl;
    }
}