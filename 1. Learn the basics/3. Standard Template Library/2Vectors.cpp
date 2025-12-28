#include<vector>
#include<iostream>

using namespace std;

void vectorBasics() {
    cout << "Vectors basic operations : ";
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    cout << v[0] << " " << v.at(1) << endl;
    cout << v.front() << endl;
    cout << v.back() << endl;

    vector<pair<int,int>> vec;

    vec.push_back({1,2});
    vec.emplace_back(1,2);
    cout << vec[0].first << endl;
    cout << vec[1].second << endl;

    vector<int> v1(5,100);

    vector<int> v2(5);
    vector<int> v3(v2);

    cout << "Size of a vector : " << v2.size() << endl;
    cout << "Popping element from vector : ";
    cout << "Initial vector : ";
    for(auto it:v2) {
        cout << it << " ";
    }
    cout << endl;
    v2.pop_back();
    cout << "After popping back function : ";
    for(auto it:v2) {
        cout << it << " ";
    }
    cout<< endl;

    cout << "Swapping a vector with another vector : " << endl;
    vector<int> swap1(5,100);
    cout << "First vector : ";
    for(auto it:swap1) {
        cout << it << " ";
    }
    cout << endl;
    vector<int> swap2(5,300);
    cout << "Second vector : ";
    for(auto it:swap2) {
        cout << it << " ";
    }
    cout << endl;
    swap1.swap(swap2);
    cout << "After swapping is done : " << endl;
    cout << "First vector : ";
    for(auto it:swap1) {
        cout << it << " ";
    }
    cout << endl;
    cout << "Second vector : ";
    for(auto it:swap2) {
        cout << it << " ";
    }
    cout << endl;

    // Clearing a vector
    v.clear();
    cout << "Clearing out a vector : " << endl;
    cout << "Size after clearing out : " << v.size();
    for(auto it:v) {
        cout << it;
    }
    cout << endl;

    // Check if a vector is empty or not
    cout << "Checking if the recently cleared out vector is empty of now : " << v.empty();
    cout << endl << "-------------------------------" << endl;

}

void vectorIterator() {
    cout << "Iterators in vectors : ";
    vector<int> vect = {1,2,3,4,5,6,7};
    vector<int>::iterator it = vect.begin();
    // Different iterators
    // vector<int>::iterator it = vect.end();
    // vector<int>::iterator it = vect.rbegin();
    // vector<int>::iterator it = vect.rend(); 
    cout << *(it) << " ";
    it++;
    cout << *(it) << " ";
    it += 2;
    cout << *(it) << " ";
    cout << endl;

    cout << "Printing a vector with increasingly better methods : " << endl;

    for(vector<int>::iterator it = vect.begin(); it!=vect.end(); it++) {
        cout << *(it) << " ";
    }

    cout << endl;

    for(auto it = vect.begin(); it!=vect.end(); it++) {
        cout << *(it) << " ";
    }

    cout << endl;

    for(auto it:vect) {
        cout << it << " "; 
    }

    cout << endl << "-------------------------------" << endl;
}

void vectorErase() {
    // Erasing in a vector
    cout << "Erasing in a vector : " << endl;

    vector<int> erase = {1,2,3,4,5,6,6};

    for(auto it:erase) {
        cout << it << " "; 
    }
    cout << endl;

    erase.erase(erase.begin() + 1);
    for(auto it:erase) {
        cout << it << " "; 
    }
    cout << endl;

    erase.erase(erase.begin() + 1, erase.begin() + 4);
    for(auto it:erase) {
        cout << it << " "; 
    }
    cout << endl << "-------------------------------" << endl;
}

void vectorInsert() {
    // Inserting in a vector
    cout << "Inserting in a vector : " << endl;
    cout << "Initial vector : ";

    vector<int> v(2,100);
    for(auto it:v) {
        cout << it << " ";
    }
    cout << endl;

    cout << "Updated vector : ";
    v.insert(v.begin(), 200);
    for(auto it:v) {
        cout << it << " ";
    }
    cout << endl;

    cout << "Updated vector : ";
    v.insert(v.begin()+1,3,300);
    for(auto it:v) {
        cout << it << " ";
    }
    cout << endl << "-------------------------------" << endl;
}

void vectorCopy() {
    cout << "Copying in a vector : " << endl;
    cout << "Initial vector : ";

    vector<int> v(2,100);
    for(auto it:v) {
        cout << it << " ";
    }
    cout << endl;

    vector<int> copy(5,50);
    v.insert(v.begin( ), copy.begin(), copy.end());

    cout << "After copying : ";
    for(auto it:v) {
        cout << it << " ";
    }
    cout << endl;
}

int main() {
    vectorBasics();
    vectorIterator();
    vectorErase();
    vectorInsert();
    vectorCopy();
    return 0;
}