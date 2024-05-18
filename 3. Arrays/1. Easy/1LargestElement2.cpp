#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>

using namespace std;

int largestElement(vector<int>& arr)
{
    sort(arr.begin(), arr.end());
    return arr[arr.size()-1];
}

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    vector<int> v;

    cout << "Enter the element of the array : ";

    for(int i=0;i<n;i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    int largest = largestElement(v);
    
    cout << "The largest element in the given array is : " << largest;
}