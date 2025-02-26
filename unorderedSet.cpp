#include <bits/stdc++.h>
using namespace std;

int main()
{
    // same as set
    // unique but unsorted
    // upper bound and lower bound function does not work
    // better time complexity in most cases except collision

    unordered_set<int> us;
    us.insert(5);
    us.insert(6);
    us.insert(1);
    us.insert(3);
    us.insert(2);

    cout << "Size of unordered set: " << us.size() << "\n";

    for (auto i : us)
    {
        cout << i << "\n";
    }

    return 0;
}