#include <bits/stdc++.h>
using namespace std;

int main()
{
    // values can only be poped in the same order as they get pushed in
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(4);

    q.back() += 5;

    cout << q.back() << "\n";
    cout << q.front() << "\n";

    q.pop();
    cout << q.front();
    return 0;
    // rest of the options are same as in stacks
}