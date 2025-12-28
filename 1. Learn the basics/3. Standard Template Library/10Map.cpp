#include <iostream>
#include <map>
#include <string>

using namespace std;

void explainMap() {

    map<int, int> mpp;
    
    map<int, pair<int, int>> mpp1;
    
    map< pair<int, int>, int> mpp2;
    
    
    mpp[1] = 2;
    mpp.emplace(3, 1);
    
    mpp.insert({2, 4});
    
    mpp2[{2,3}] = 10;
    
    // {
    //     {1, 2}
    //     {2, 4}
    //     {3, 1}
    // }
    
    for(auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }
    
    
    cout << mpp[1] << endl;
    cout << mpp[5] << endl;
    
    auto it = mpp.find(3);
    cout << (*it).second << endl;
    
    auto it = mpp.find(5);
    
    // This is the syntax
    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);
}

int main() {
    explainMap();
    return 0;
}