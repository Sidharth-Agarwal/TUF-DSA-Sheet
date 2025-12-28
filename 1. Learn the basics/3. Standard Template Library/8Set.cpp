#include <set>
#include <iostream>

using namespace std;

void setBasics() {
    set<int> st;

    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(3);
    st.insert(3);
    st.insert(5);

    cout << "Printing the set : ";
    for(auto it:st) {
        cout << it << " ";
    }
    cout << endl;

    // Gives iterator at this particular element
    auto it1 = st.find(3);

    // If the element is not present then it returns the st.end() iterator
    auto it2 = st.find(3);

    // Erase function
    st.erase(5);

    cout << "Printing the set after erase function : ";
    for(auto it:st) {
        cout << it << " ";
    }
    cout << endl;

    int cnt = st.count(1);

    auto it = st.find(3);
    st.erase(it);

    cout << "Printing the set after erase function : ";
    for(auto it:st) {
        cout << it << " ";
    }
    cout << endl;

    st.insert(4);
    st.insert(5);
    st.insert(6);
    st.insert(7);
    st.insert(8);
    st.insert(8);
    st.insert(9);

    auto it11 = st.find(5);
    auto it12 = st.find(8);
    st.erase(it11, it12);

    cout << "Printing the set after erase function : ";
    for(auto it:st) {
        cout << it << " ";
    }
    cout << endl;

    auto iterator1 = st.lower_bound(2);
    auto iterator2 = st.upper_bound(4);

    cout << "------------------------------------------------" << endl;
}

void multisetBasics() {
    multiset<int> ms;

    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);

    cout << "Printing a multiset : ";
    for(auto it:ms) {
        cout << it << " ";
    }
    cout << endl;

    // Erases all the 1's
    ms.erase(1);

    cout << "Printing a multiset after erase : ";
    for(auto it:ms) {
        cout << it << " ";
    }
    cout << endl;

    int cnt = ms.count(2);

    ms.erase(ms.find(1));
}

int main() {
    setBasics();
    multisetBasics();
    return 0;
}