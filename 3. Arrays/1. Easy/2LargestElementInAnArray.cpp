#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int sortArray(vector <int>& arr) {
    sort(arr.begin(), arr.end());
    return arr[arr.size() - 1];
}

int main() {
    vector<int> arr = {1,2,3,4,5};
    cout<<sortArray(arr)<<endl;
    return 0;
}
