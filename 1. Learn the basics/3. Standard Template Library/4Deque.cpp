#include<deque>
#include<iostream>

using namespace std;

void dequeBasics() {
    
    deque<int>dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(3);
    
    dq.pop_back();
    dq.pop_front();
    
    dq.back();
    dq.front();

    cout << "Printing a deque : ";
    for(auto it:dq) {
        cout << it << " ";
    }
}

int main() {
    dequeBasics();
    return 0;
}