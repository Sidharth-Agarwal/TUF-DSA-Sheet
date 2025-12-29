#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;

    vector<int> vect;

    for(int i=0; i<=sqrt(n); i++) {
        if(n%i == 0) {
            vect.push_back(i);

            if((n/i)!=i) {
                vect.push_back((n/i));
            }
        }
    }

    sort(vect.begin(), vect.end());

    cout << "All the divisors for the given number are : ";
    for(auto i:vect) {
        cout << i << " ";
    }
}