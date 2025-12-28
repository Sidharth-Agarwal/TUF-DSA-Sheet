#include <iostream>
#include <unordered_set>
using namespace std;

void explainUnorderedSet() {
    unordered_set<int> us;
    
    // Insert elements
    us.insert(5);
    us.insert(2);
    us.insert(8);
    us.insert(1);
    us.emplace(10);
    us.insert(2); // Duplicate - won't be inserted
    
    // Elements are NOT in sorted order (unlike set)
    // Output might be: 10 1 8 2 5 (order is unpredictable)
    cout << "Elements: ";
    for (auto it : us) {
        cout << it << " ";
    }
    cout << endl;
    
    // Find an element - O(1) average
    auto it = us.find(8);
    if (it != us.end()) {
        cout << "Found: " << *it << endl;
    }
    
    // Check if element exists - O(1) average
    if (us.count(5)) {
        cout << "5 exists in set" << endl;
    }
    
    // Erase element
    us.erase(2); // {10, 1, 8, 5}
    
    // Size
    cout << "Size: " << us.size() << endl;
    
    // Check if empty
    cout << "Empty: " << us.empty() << endl;
    
    // Clear all elements
    us.clear();
    
    // IMPORTANT: unordered_set does NOT have:
    // - lower_bound()
    // - upper_bound()
    // Because elements are not sorted!
}

int main() {
    explainUnorderedSet();
    return 0;
}