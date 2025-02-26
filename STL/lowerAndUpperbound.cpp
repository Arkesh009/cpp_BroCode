#include <bits/stdc++.h>
using namespace std;

int main()
{
    // lower bound and upper bound functions can only be used for sorted data containers
    set<int> v = {3, 2, 1, 5, 8, 4, 9, 33, 7, 66, 88, 16, 99};
    cout << "Lower bound: " << *v.lower_bound(4) << "\n"; // returns the value >= 4
    cout << "Upper bound: " << *v.upper_bound(4) << "\n"; // returns the value > 4

    return 0;
}