#include <iostream>

using namespace std;

bool palindrome(int i, string& s) {
    if (i >= s.length() / 2) {
        return true;
    }

    if (s[i] != s[s.length() - i - 1]) {
        return false;
    }

    return palindrome(i + 1, s);
}


int main() {
    string s;
    cout << "Enter the string : ";
    getline(cin,s);

    if(palindrome(0,s)) {
        cout << "The given string is a palindrome.";
    } else {
        cout << "The given string is not a palindrome.";
    }
}