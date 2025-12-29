#include <iostream>
#include <math.h>

using namespace std;

bool checkPrime(int n) {

    int count = 0;

    for(int i=0; i<sqrt(n); i++) {
        if(n%i == 0) {
            count++;
            
            if((n/i) != i) {
                count++;
            }
        }
    }

    if(count == 2) {
        return true;
    }
    
    return false;
}

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;

    if(checkPrime(n)) {
        cout << "The given number is a prime number.";
    } else {
        cout << "The given number is not a prime number.";
    }
}