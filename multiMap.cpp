#include <bits/stdc++.h>
using namespace std;

int main()
{
    // sorted
    // but not unique
    // can store multiple values for single key
    multimap<int, int> mtmp;
    mtmp.insert({1, 1});
    mtmp.insert({1, 2});
    mtmp.insert({1, 3});

    cout << (*mtmp.find(1)).second;
    return 0;
}