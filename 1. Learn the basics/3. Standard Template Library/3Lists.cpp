#include <iostream>
#include <list>

using namespace std;

void listBasics() {
    list<int> ls;

    ls.push_back(3);
    ls.emplace_back(4);
    ls.push_front(5);
    ls.emplace_front(10);
    
    cout << "Printing the list : ";
    for(auto it:ls) {
        cout << it << " ";
    } 
}

int main() {
    listBasics();
    return 0;
}