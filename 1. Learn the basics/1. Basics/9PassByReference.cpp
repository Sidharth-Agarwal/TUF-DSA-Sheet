#include <iostream>

using namespace std;

void doSomething(string &s) {
    s[0] = 'a';
    return;
}

int main() {
    string str = "Sidharth";
    cout << str << endl;
    doSomething(str);
    cout << str << endl;

    return 0;
}