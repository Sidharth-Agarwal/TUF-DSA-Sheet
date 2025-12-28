#include <iostream>

using namespace std;

void pairs() {
    pair<int,int> p1 = {1,2};

    cout << "Simple pair : ";
    cout << p1.first << " " << p1.second << endl;

    pair<int, pair<int, int>> p2 = {1, {2,3}};

    cout << "Nested pair : ";
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    cout << "An array of pairs : ";
    pair<int, int> arr[] = {{1,2}, {3,4}, {5,6}};
    cout << arr[1].second << " " << arr[0].first << endl;
}

int main() {
    pairs();
    return 0;
}