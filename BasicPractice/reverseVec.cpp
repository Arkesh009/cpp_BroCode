// Reverse a vector using reverse() from STL and print the reversed vector.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vec declaration
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};

    // stl reverse function
    reverse(v.begin(), v.end());

    // print vector
    for (auto i : v)
    {
        cout << i << " ";
    }

    return 0;
}