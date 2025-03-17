// Implement a queue using queue to reverse the first k elements of a queue.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    vector<int> v;

    // input queue size
    cout << "Enter the size of queue\n";
    int n;
    cin >> n;

    // input queue elements
    cout << "Enter the elements of queue\n";
    while (n--)
    {
        int a;
        cin >> a;
        q.emplace(a);
    }

    // input number of terms to be reversed
    cout << "Enter the number of terms you wanna reverse\n";
    int x;
    cin >> x;

    // push elements of queue upto x terms in a vector
    while (x--)
    {
        v.push_back(q.front());
        q.pop();
    }

    // reverse the vector
    reverse(v.begin(), v.end());

    // print the vector i.e reversed elements of queue
    for (auto i : v)
    {
        cout << i << " ";
    }

    // To complete the process we can push reversed terms back inside the queue

    return 0;
}