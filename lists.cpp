#include <bits/stdc++.h>
using namespace std;

int main()
{
    // List declaration
    list<int> ls;
    ls.push_back(30);
    ls.emplace_back(40);

    for (auto i : ls)
    {
        cout << i << "\n";
    }

    cout << "Updating list:\n";
    ls.push_front(20);
    ls.emplace_front(10);

    for (auto i : ls)
    {
        cout << i << "\n";
    }

    return 0;
}