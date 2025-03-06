// Reverse a vector using reverse() from STL and print the reversed vector.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};

    reverse(v.begin(), v.end());

    for (auto i : v)
    {
        cout << i << " ";
    }

    return 0;
}