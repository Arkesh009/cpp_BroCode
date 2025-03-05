// Write a program to input n integers into a vector and then sort the vector in both ascending and descending order.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector<int> v;
    cout << "Enter the size of vector\n";
    cin >> n;

    cout << "Enter the elements\n";
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    cout << "In ascending order\n";
    sort(v.begin(), v.end());
    for (auto i : v)
    {
        cout << i << "\n";
    }

    cout << "\nIn decending order\n";
    sort(v.begin(), v.end(), greater<int>());
    for (auto i : v)
    {
        cout << i << "\n";
    }
    return 0;
}