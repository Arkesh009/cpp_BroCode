// Implement a double-ended queue (deque) where you can add/remove elements from both the front and back.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> d;
    // double ended insertion
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    d.emplace_front(1);
    d.push_front(0);

    // printing deque
    for (auto i : d)
    {
        cout << i << " ";
    }
    cout << "\n";

    // double ended deletion
    d.pop_back();
    d.pop_front();

    //  print again
    for (auto i : d)
    {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}