#include <iostream>

using namespace std;

int main() {

    cout << "For Loop" << endl;
    // For loop
    for (int i = 1; i <= 10; i++) {
        cout << "Hey, Sidharth, this is the " << i << "'th iteration" << endl;
    }

    cout << endl;

    cout << "While Loop" << endl;
    // While loop
    int i = 10;
    while (i > 0) {
        cout << "Hey, Sidharth, this is the " << i << "'th iteration" << endl;
        i--;
    }

    cout << endl;

    cout << "Do-While Loop" << endl;
    // Do-while loop
    int j = 0;
    do {
        cout << "Hey, Sidharth, this is the " << j << "'th iteration" << endl;
        j++;
    } while(j<=10);

    return 0;
}