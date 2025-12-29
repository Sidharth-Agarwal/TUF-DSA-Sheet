#include <iostream>

using namespace std;

int getHFC1(int num1, int num2) {
    int answer = 0;

    for(int i=1; i<=min(num1, num2); i++) {
        if(num1%i == 0 && num2%i == 0) {
            answer = i;
        }
    }

    return answer;
}

int getHFC2(int num1, int num2) {
    int answer = 0;

    for(int i=min(num1,num2); i>0; i--) {
        if(num1%i == 0 && num2%i == 0) {
            answer = i;
            break;
        }
    }

    return answer;
}

int main() {
    int a,b;
    cout << "Enter the first number : ";
    cin >> a;
    cout << "Enter the second number : ";
    cin >> b;

    cout << "Getting HFC with method 1 : " << getHFC1(a,b) << endl;
    cout << "Getting HFC with method 2 : " << getHFC2(a,b) << endl;

    return 0;
}