// Implement a program that checks if two maps are equal (i.e., contain the same key-value pairs).

#include <bits/stdc++.h>
using namespace std;

bool areEqual(map<string, int> &, map<string, int> &);

int main()
{
    // declaration of maps
    map<string, int> m1 = {{"a", 1}, {"b", 2}, {"c", 3}};
    map<string, int> m2 = {{"a", 1}, {"b", 2}, {"c", 3}};

    // if function returns true
    if (areEqual(m1, m2))
    {
        cout << "The maps are equal\n";
    }
    // if it returns false
    else
    {
        cout << "Not equal\n";
    }

    return 0;
}

// compare functions
bool areEqual(map<string, int> &m1, map<string, int> &m2)
{
    return m1 == m2;
}