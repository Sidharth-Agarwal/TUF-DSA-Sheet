#include <iostream>

using namespace std;

int main() {
    // String data type
    string s;
    s = "hello world!";
    cout << s << endl;

    // getLine()
    string str;
    cout << "Enter the input string : ";
    getline(cin,str);
    cout << str;

    return 0;
}