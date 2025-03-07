// Implement a function to find the second-largest element in a set.

#include <bits/stdc++.h>
using namespace std;

void secMax(set<int> &s);

int main()
{
    set<int> s;
    cout << "Enter the 8 elements of set\n";

    for (int i = 0; i < 8; i++)
    {
        int inp;
        cin >> inp;
        s.insert(inp);
    }

    secMax(s);

    return 0;
}

void secMax(set<int> &s)
{
    int size = s.size();
    auto it = s.rbegin();
    it++;

    cout << "The second largest digit in the set = " << *it << "\n";
}