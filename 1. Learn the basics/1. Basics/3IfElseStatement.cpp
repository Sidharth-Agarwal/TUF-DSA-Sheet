#include <iostream>

using namespace std;

int main() {
    int age;
    cin >> age;
    
    // If you are put an 'if' statement it is not mandatory to put an else statement
    if(age >= 18) {
        cout << "You are an adult";
    } else {
        cout << "You are not an adult";
    }

    return 0;
}