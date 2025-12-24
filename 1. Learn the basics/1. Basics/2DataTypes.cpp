#include <iostream>

using namespace std;

int main() {
    // Data Types
    int a = 10;
    cout << a << endl;
    long b = 1000000000;
    cout << b << endl;
    long long c = 1000000000000000000;
    cout << c << endl;
    float d = 5.654;
    cout << d << endl;

    string e = "Hello World";
    cout << e << endl;
    string f;
    cin >> f;
    cout << f << endl;
    // This will only take input before the space on input only
    // To get the whole sentence getline is used
    string g;
    getline(cin, g);
    cout << g << endl;

    char h = 'a';
    cout << h << endl;

    return 0;
}