// Write a program to input n integers into a set and print the unique elements in sorted order.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    cout << "Enter elements\n";
    while (n--)
    {
        int input;
        cin >> input;
        s.insert(input);
    }

    cout << "The set of unique elements in a sorted order\n";

    for (auto i : s)
    {
        cout << i << " ";
    }

    return 0;
}